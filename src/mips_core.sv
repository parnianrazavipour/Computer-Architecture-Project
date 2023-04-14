module mips_core(
    inst_addr,
    inst,
    mem_addr,
    mem_data_out,
    mem_data_in,
    mem_write_en,
    halted,
    clk,
    rst_b
);


    output  [31:0] inst_addr;
    input   [31:0] inst;
    output [31:0] mem_addr;
    input   [7:0]  mem_data_out[0:3];
    output  [7:0]  mem_data_in[0:3];
    output    mem_write_en;
    output reg     halted;
    input          clk;
    input          rst_b;

    wire [31:0] pc,pc_increase_result,pc_increase_result_out,pc_add_result,jump_mux_out,next_pc_mux_out;
    wire [31:0] ID_pc,EX_pc;
    wire [31:0] IDEXreg_pc;
    wire [31:0] ID_inst,EX_inst;
    wire [31:0] IDEXreg_inst;
    assign inst_addr = pc;
    wire [31:0] alu_out,operand_1,operand_2;
    wire [31:0] MEM_alu_out,MEMtoWB_alu_out,WB_alu_out,EX_operand_1,
                EX_operand_2,ExtoMEM_operand2,MEM_operand2,EX_sign_extended;
    // wire [5:0] opcode,func;
    // wire [4:0] rs,rt,rd,sa;
    wire [15:0] immAdd; //address offset / immediate 
    wire [25:0] address; // jump address distination shifted to left two bits <add 00 at lsb in execute>
    wire [31:0] alu_src_mux_out,sign_extended,memtoreg_mux_out,adder_sign_extend_result,sa_select_mux_out;
    wire [4:0] aluctrl,EX_aluctrl;
    wire [4:0] forw_src1,ID_src1,forw_src2,ID_src2;
    wire [4:0] rd,destReg,EX_destReg,EXtoMEM_destReg,MEM_destReg,MEMtoWB_destReg,WB_destReg,from_WB_destReg;
    wire regWrite, EX_regWrite,EXtoMEM_regWrite,MEM_regWrite,MEMtoWB_regWrite,WB_regWrite,from_WB_regWrite;
    wire MemWrite, memtoreg, branch, jump, shift,alu_src,is_byte,rs_is_src,rt_is_src;
    wire EX_MemWrite,EXtoMEM_memWrite,MEM_MemWrite,EX_memtoreg,EXtoMEM_memtoreg,MEM_memtoreg
        ,MEMtoWB_memtoreg,WB_memtoreg
        ,EX_branch,EX_jump,EX_shift,EX_alu_src,EX_is_byte,EXtoMEM_is_byte,MEM_is_byte
        ,EX_rs_is_src,EX_rt_is_src;
    // wire [3:0] aluOp;
    // assign rs = inst[25:21];
    // assign rt = inst[20:16];
    // assign sa = inst[10:6];
    // assign opcode = inst[31:26];
    // assign immAdd = inst[15:0];
    // assign address = inst[25:0];
    // assign sa = inst[10:6];
    

    // assign func = inst[5:0];    
    // reg [4:0] desreginst  = inst[15:11];
    // wire cuDestReg,jump,branch,memtoreg,MemWrite,alusrc,regWrite,z_flag,shift,is_byte,ready;
    // assign rd = cuDestReg ?  desreginst : rt;  // in r type is rd 
    

    wire [7:0]  in_data[0:3];
    assign in_data[3] = MEM_operand2[31:24];
    assign in_data[2] = MEM_operand2[23:16];
    assign in_data[1] = MEM_operand2[15:8];
    assign in_data[0] = MEM_operand2[7:0];

    wire [7:0] data_out [0:3] ; 
    wire [7:0] WB_data_out [0:3];

    wire i_sign;
    wire b_or_j;
    wire cache_ready;
        
     //initial $monitor(" cache_ready  %b  pc %b pc_increase_result %b next_pc_mux_out  %b branch %b ", cache_ready  , pc , pc_increase_result , next_pc_mux_out , branch ) ; 
    IF_stage IF(
        .clk(clk),
        .rst(rst_b),
        .next_pc(next_pc_mux_out),
        .branch(b_or_j),
        .hold(cache_ready),
        .pc(pc),
        .pc_increase_result(pc_increase_result)
    );

    wire is_float;
    assign is_float = ((inst[31:26] == 6'b110000) | (inst[31:26] == 6'b110001) | (inst[31:26] == 6'b110010) | (inst[31:26] == 6'b110011) | (inst[31:26] == 6'b110100));
    wire [7:0]  in_data_float[0:3];
    wire [7:0] in_data_final[0:3];
    assign  in_data_final = is_float ? in_data_float : in_data;
    wire [31:0] float_addr;
    wire [31:0] final_cache_addr = is_float ? float_addr : MEM_alu_out;
    wire [31:0] float_inst = is_float ? inst : 32'b0;
    wire [31:0] int_inst = is_float ? 32'b0 : inst;
    wire float_memWrite,final_memWrite,float_memtoreg,final_memtoreg;
    assign final_memtoreg = is_float ? float_memtoreg : MEM_memtoreg;
    assign final_memWrite = is_float ? float_memWrite : MEM_MemWrite;
    wire div_by_zero,underflow
            ,snan,overflow,qnan,inexact;
    coprocessor f_core(
        .inst(float_inst),
        .alu_out(float_addr),
        .data_out(data_out),
        .in_data(in_data_float),
        .MemWrite(float_memWrite),
        .memtoreg(float_memtoreg),
        .halted(halted),
        .clk(clk),
        .rst_b(rst_b),
        .div_by_zero(div_by_zero),
        .underflow(underflow),
        .snan(snan),
        .overflow(overflow),
        .qnan(qnan),
        .inexact(inexact)
    );

    wire IFID_hold,IF_flush;
      //   initial $monitor(" cache_ready  %b  ID_pc %b pc_increase_result %b next_pc_mux_out  %b  ID_inst %b ", cache_ready  , ID_pc , pc_increase_result , next_pc_mux_out , ID_inst) ; 

    IF_ID_reg IFtoID(
        .pc_increase_result(pc_increase_result),
        .inst(int_inst),
        .clk(clk),
        .hold(~cache_ready),
        .IF_flush(0),
        // .hold(IFID_hold),
        // .IF_flush(IF_flush),
        .inst_out(ID_inst),
        .pc_increase_result_out(ID_pc)
    );
    // pc  pc_core(.clk(clk),
    //             .in(next_pc_mux_out),
    //             .out(pc),
    //             .ready(ready)
    // );

    // adder  pc_inc(.in1(pc),
    //                 .in2(32'd4),
    //                 .out(pc_increase_result)                     
        
    // );
    wire [31:0] rd_data;
 
 //always@(halted) $display(" halted %d cache_ready  %b  ID_pc %d pc_increase_result %d next_pc_mux_out  %d  ID_inst %b  operand_1 %d operand_2 %d  sign_extended %d destReg %d ",halted,cache_ready , ID_pc , pc_increase_result , next_pc_mux_out , ID_inst ,  operand_1,  operand_2 ,  sign_extended  , destReg ) ; 
//initial $monitor("inst add %d " , inst_addr);

//initial $monitor("inst %b id_inst  %b id_pc %d  op1 %d op2%d ex_op1 %d exop2 %d next_pcmuxout %d b or j %b  branch %d" , inst[31:26] , ID_inst[31:26], ID_pc , operand_1 , operand_2 , EX_operand_1, EX_operand_2 , next_pc_mux_out , b_or_j , branch);
     
    ID_stage ID(
        .clk(clk),
        .rst(rst_b),
        .regWrite(from_WB_regWrite),
        .halted(halted),
        .inst(ID_inst),
        .pc_increase_result(ID_pc),
        .rd_data(rd_data),
        // .ready(ready),
        .rd(from_WB_destReg),
        .inst_out(IDEXreg_inst),
        .pc_increase_result_out(IDEXreg_pc),
        .operand_1(operand_1),
        .operand_2(operand_2),
        .sign_extended(sign_extended),
        .aluctrl(aluctrl),
        .MemWrite(MemWrite),
        .memtoreg(memtoreg),
        .branch(branch),
        .jump(jump),
        .shift(shift),
        .alusrc(alu_src),
        .is_byte(is_byte),
        // .rs_is_src(rs_is_src),
        // .rt_is_src(rt_is_src),
        .destReg(destReg),
        .src1_out(ID_src1),
        .src2_out(ID_src2),
        .regWrite_out(regWrite)
    );

    ID_EX_reg IDtoEX(
        .clk(clk),
        .regWrite(regWrite),
        .hold(~cache_ready),
        .inst(IDEXreg_inst),
        .pc_increase_result(IDEXreg_pc),
        .operand_1(operand_1),
        .operand_2(operand_2),
        .sign_extended(sign_extended),
        .aluctrl(aluctrl),
        .destReg(destReg),
        .src1(ID_src1),
        .src2(ID_src2),
        .MemWrite(MemWrite),
        .memtoreg(memtoreg),
        .branch(branch),
        .jump(jump),
        .shift(shift),
        .alu_src(alu_src),
        .is_byte(is_byte),
        .regWrite_out(EX_regWrite),
        .inst_out(EX_inst),
        .pc_increase_result_out(EX_pc),
        .operand_1_out(EX_operand_1),
        .operand_2_out(EX_operand_2),
        .sign_extended_out(EX_sign_extended),
        .aluctrl_out(EX_aluctrl),
        .destReg_out(EX_destReg),
        .src1_out(forw_src1),
        .src2_out(forw_src2),
        .MemWrite_out(EX_MemWrite),
        .memtoreg_out(EX_memtoreg),
        .branch_out(EX_branch),
        .jump_out(EX_jump),
        .shift_out(EX_shift),
        .alu_src_out(EX_alu_src),
        .is_byte_out(EX_is_byte)
    );
    wire [1:0] sel_val1,sel_val2;
    forwarding_unit forward (
        .EX_src1(forw_src1),
        .EX_src2(forw_src2),
        // EX_store_src,
        .MEM_dest(MEM_destReg),
        .WB_dest(WB_destReg),
        .MEM_regWrite(MEM_regWrite),
        .WB_regWrite(WB_regWrite),
        .sel_val1(sel_val1),
        .sel_val2(sel_val2)//,
        // sel_store_val
    );
//    always@(posedge clk)
//     $monitor("EX_pc %b EX_operand_1 %d EX_operand_2 %d  EX_sign_extended %d  alu_out %d  from_WB_destReg %d from_WB_regWrite %d  rd_data %d sel_val1 %d, sel_val2 %d" , EX_pc ,  EX_operand_1, EX_operand_2 , EX_sign_extended,
//      alu_out , from_WB_destReg , from_WB_regWrite , rd_data, sel_val1 , sel_val2 );


// initial $monitor ($time," pc %d destReg%d EX_destReg%d MEM_destReg%d WB_destReg%d ddata%d  ready%d MemWrite%d MEM_MemWrite%d in_data%d data_out%d  MEM_alu_out %h"
 //  , pc , destReg, EX_destReg ,  MEM_destReg , WB_destReg , rd_data  ,  cache_ready ,MemWrite , MEM_MemWrite, in_data  ,  data_out  , MEM_alu_out);
    EX_stage EX(
        .inst(EX_inst),
        .pc_increase_result(EX_pc),
        .operand_1(EX_operand_1),
        .operand_2(EX_operand_2),
        .sign_extended(EX_sign_extended),
        .MEM_alu_out(MEM_alu_out),
        .WB_out(WB_alu_out),
        .aluctrl(EX_aluctrl),
        .destReg(EX_destReg),
        .MemWrite(EX_MemWrite),
        .memtoreg(EX_memtoreg),
        .branch(EX_branch),
        .jump(EX_jump),
        .shift(EX_shift),
        .alusrc(EX_alu_src),
        .regWrite(EX_regWrite),
        .is_byte(EX_is_byte),
        .sel_val1(2'b0),
        .sel_val2(2'b0),
        // .inst_out(),
        // .pc_increase_result_out,
        .destReg_out(EXtoMEM_destReg),
        .MemWrite_out(EXtoMEM_memWrite),
        .memtoreg_out(EXtoMEM_memtoreg),
        .regWrite_out(EXtoMEM_regWrite),
        .is_byte_out(EXtoMEM_is_byte),
        // .add_result,
        .alu_out(alu_out),
        .next_pc(next_pc_mux_out),
        .operand_2_out(ExtoMEM_operand2),
        .b_or_j(b_or_j)
        // .z_flag
    );

    EX_MEM_reg EXtoMEM(
        .clk(clk),
        .hold(~cache_ready),
        .destReg(EXtoMEM_destReg),
        .MemWrite(EXtoMEM_memWrite),
        .memtoreg(EXtoMEM_memtoreg),
        .regWrite(EXtoMEM_regWrite),
        .is_byte(EXtoMEM_is_byte),
        .alu_out(alu_out),
        .operand_2(ExtoMEM_operand2),
        //next_pc,
        .destReg_out(MEM_destReg),
        .MemWrite_out(MEM_MemWrite),
        .memtoreg_out(MEM_memtoreg),
        .regWrite_out(MEM_regWrite),
        .is_byte_out(MEM_is_byte),
        .MEM_alu_out(MEM_alu_out),
        .operand_2_out(MEM_operand2)
        //,next_pc
    );

    
    MEM_stage MEM(
        .clk(clk),
        .rst(rst_b),
        .destReg(MEM_destReg),
        .MemWrite(final_memWrite),
        .memtoreg(final_memtoreg),
        .regWrite(MEM_regWrite),
        .is_byte(MEM_is_byte),
        .MEM_alu_out(final_cache_addr),
        .mem_data_out(mem_data_out),
        .in_data(in_data_final),
        .data_out(data_out),
        .mem_addr(mem_addr),
        .mem_data_in(mem_data_in),
        .mem_write_en(mem_write_en),
        .ready(cache_ready),
        .destReg_out(MEMtoWB_destReg),
        .regWrite_out(MEMtoWB_regWrite),
        .memtoreg_out(MEMtoWB_memtoreg),
        .WB_alu_out(MEMtoWB_alu_out)
        //,next_pc//,add_result
    );


    MEM_WB_reg MEMtoWB(
        .clk(clk),
        .data_out(data_out),
        .hold(~cache_ready),
        .destReg(MEMtoWB_destReg),
        .regWrite(MEMtoWB_regWrite),
        .memtoreg(MEMtoWB_memtoreg),
        .MEM_alu_out(MEMtoWB_alu_out),
        .data_out_WB(WB_data_out),
        // ready_out,
        .destReg_out(WB_destReg),
        .regWrite_out(WB_regWrite),
        .memtoreg_out(WB_memtoreg),
        .WB_alu_out(WB_alu_out)
    );



    WB_stage WB(
        .destReg(WB_destReg),
        .data_from_mem(WB_data_out),
        //  ready_out,
        .regWrite(WB_regWrite),
        .memtoreg(WB_memtoreg),
        .WB_alu_out(WB_alu_out),
        .destReg_out(from_WB_destReg),
        .regWrite_out(from_WB_regWrite),
        .to_reg_result(rd_data)
    );

    // always @(posedge clk)
    //   halted = from_wb_halted;

    // cache cache_core(
    //     .clk(clk),
    //     .reset(rst_b),
    //     .write_en(MemWrite),
    //     .read_en(memtoreg),
    //     .in_addr(alu_out),
    //     .in_from_mem(mem_data_out),
    //     .in_data(in_data),
    //     .is_byte(is_byte),
    //     .mem_write_en(mem_write_en),
    //     .data_out(data_out),
    //     .mem_data_out(mem_data_in),
    //     .out_addr(mem_addr),
    //     .ready(ready)
    //     );

    
    

//     regfile RegisterFile (
//     .rs_data(operand_1),
//     .rt_data(operand_2),
//     .rs_num(rs),
//     .rt_num(rt),
//     .rd_num(rd),
//     .rd_data(memtoreg_mux_out),
//     .rd_we(regWrite),
//     .clk(clk),
//     .rst_b(rst_b),
//     .halted(halted) 
// );

    // control control(
    //     .func(func),
    //     .opcode(opcode),
    //     .dstReg(cuDestReg),
    //     .jmp(jump),
    //     .branch(branch),
    //     .MemtoReg(memtoreg),
    //     .ALUop(aluOp),
    //     .MemWrite(MemWrite),
    //     .ALUSrc(alusrc),
    //     .RegWrite(regWrite),
    //     .halted(halted),
    //     .shift(shift),
    //     .i_sign(i_sign),
    //     .is_byte(is_byte)
    // );

    // alu_control alu_control(.func(func),
    //                         .alu_opcode(aluOp),
    //                         .alu_control(aluctrl)
    // );

    // alu alu(
    //    .reg1_data(sa_select_mux_out),
    //    .reg2_data(alu_src_mux_out),
    //    .alu_control(aluctrl),
    //    .result(alu_out),
    //    .z_flag(z_flag)
    // );
    

    // mux alu_src_mux(
    //    .in1(operand_2),
    //    .in2(sign_extended),
    //    .s(alusrc),
    //    .out(alu_src_mux_out) 
    // );

    // mux sa_select_mux(
    //     .in1(operand_1),
    //     .in2({27'b0 , sa}),
    //     .s(shift),
    //     .out(sa_select_mux_out)
    // );

    // singExtend sign_extend(
    //     .input_data(immAdd),
    //     .i_sign(i_sign),
    //     .out(sign_extended)
    // );

    // mux memtoreg_mux(
    //    .in1(alu_out),
    //    .in2({data_out[3], data_out[2], data_out[1],data_out[0]}),
    //    .s(memtoreg),
    //    .out(memtoreg_mux_out) 
    // );
    

    // singExtend adder_sign_extend(
    //     .input_data(immAdd),
    //     .i_sign(1'b1),
    //     .out(adder_sign_extend_result)
    // );

    // adder pc_adder(
    //     .in1(pc_increase_result),
    //     .in2( {adder_sign_extend_result[29:0]  ,2'b00}),
    //     .out(pc_add_result)
    // );

    // mux jump_mux(
    //    .in1(pc_add_result),
    //    .in2({pc_increase_result[31:28],inst[25:0],2'b00}),
    //    .s(jump),
    //    .out(jump_mux_out) 
    // );

    // mux next_pc_mux(
    //    .in1(pc_increase_result),
    //    .in2(jump_mux_out),
    //    .s((z_flag & branch) | jump),
    //    .out(next_pc_mux_out) 
    // );

endmodule
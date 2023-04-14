module coprocessor(
    inst,
    alu_out,
    data_out,
    in_data,
    MemWrite,
    memtoreg,
    halted,
    clk,
    rst_b,
    div_by_zero,underflow
            ,snan,overflow,qnan,inexact
);
    

    input   [31:0] inst;
    output [31:0] alu_out;
    input   [7:0]  data_out[0:3];
    output  [7:0]  in_data[0:3];
    output    MemWrite;
    output memtoreg;
    input          halted;
    input          clk;
    input          rst_b;
    output div_by_zero,underflow
            ,snan,overflow,qnan,inexact;
    wire [31:0] alu_out,operand_1,operand_2;
    wire [5:0] opcode,func;
    wire [4:0] rs,rt,rd,sa;
    wire [15:0] immAdd; //address offset / immediate 
    wire [31:0] alu_src_mux_out,sign_extended,memtoreg_mux_out;
    wire [3:0] alu_control;
    assign rs = inst[25:21];
    assign rt = inst[20:16];
    assign opcode = inst[31:26];
    assign immAdd = inst[15:0];
    assign func = inst[5:0];   
    reg [4:0] desreginst  = inst[15:11];
    wire cuDestReg,memtoreg,MemWrite,alusrc,regWrite,z_flag;
    assign rd = cuDestReg ?  desreginst : rt;  // in r type is rd 
    

    assign in_data[3] = operand_2[31:24];
    assign in_data[2] = operand_2[23:16];
    assign in_data[1] = operand_2[15:8];
    assign in_data[0] = operand_2[7:0];
    


    regfile RegisterFile (
        .rs_data(operand_1),
        .rt_data(operand_2),
        .rs_num(rs),
        .rt_num(rt),
        .rd_num(rd),
        .rd_data(memtoreg_mux_out),
        .rd_we(regWrite),
        .clk(clk),
        .rst_b(rst_b),
        .halted(halted) 
    );


    CU_f controlUnit_f (
        .func(func),
        .opcode(opcode),
        .dstReg(cuDestReg),
        .MemtoReg(memtoreg),
        .alu_control(alu_control),
        .MemWrite(MemWrite),
        .ALUSrc(alusrc),
        .RegWrite(regWrite)
    );


    aluf alu(
       .reg1_data(operand_1),
       .reg2_data(alu_src_mux_out),
       .alu_control(alu_control),
       .result(alu_out),
       .z_flag(z_flag),
       .div_by_zero(div_by_zero),
       .underflow(underflow),
       .snan(snan),
       .overflow(overflow),
       .qnan(qnan),
       .inexact(inexact)
    );
    

    mux alu_src_mux(
       .in1(operand_2),
       .in2(sign_extended),
       .s(alusrc),
       .out(alu_src_mux_out) 
    );

    singExtend sign_extend(
        .input_data(immAdd),
        .i_sign(1'b1),
        .out(sign_extended)
    );

    mux memtoreg_mux(
       .in1(alu_out),
       .in2({data_out[3], data_out[2], data_out[1],data_out[0]}),
       .s(memtoreg),
       .out(memtoreg_mux_out) 
    );

    // mux next_pc_mux(
    //    .in1(pc_increase_result),
    //    .in2(jump_mux_out),
    //    .s((z_flag & branch) | jump),
    //    .out(next_pc_mux_out) 
    // );

    // mux jump_mux(
    //    .in1(pc_add_result),
    //    .in2({pc_increase_result[31:28],address,2'b00}),
    //    .s(jump),
    //    .out(jump_mux_out) 
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

endmodule

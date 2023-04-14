module ID_stage(
    input clk,rst,
    input regWrite,
    input [31:0] inst,pc_increase_result,rd_data,
    // input ready,
    input [4:0] rd,
    output [31:0] inst_out,pc_increase_result_out,operand_1,operand_2,sign_extended,
    output [4:0] aluctrl,
    output MemWrite,memtoreg,branch,jump,shift,alusrc,is_byte,
    output [4:0] destReg,src1_out,src2_out,
    output regWrite_out,
    output halted
);
wire [4:0] rs ; 
wire [4:0] rt ;
wire [5:0] opcode;
wire [15:0] immAdd;
wire [5:0] func;
wire i_sign;
wire rs_is_src;
wire rt_is_src;
    assign inst_out = inst;
    assign pc_increase_result_out = pc_increase_result;
    assign rs = inst[25:21];
    assign rt = inst[20:16];
    assign opcode = inst[31:26];
    assign immAdd = inst[15:0];
    assign func = inst[5:0];    
    wire [3:0] aluOp;
    reg [4:0] desreginst  = inst[15:11];
    wire cuDestReg;
    assign destReg = cuDestReg ?  desreginst : rt;  // in r type is rd 

    regfile RegisterFile (
        .rs_data(operand_1),
        .rt_data(operand_2),
        .rs_num(rs),
        .rt_num(rt),
        .rd_num(rd),
        .rd_data(rd_data),
        .rd_we(regWrite),
        .clk(clk),
        .rst_b(rst),
        .halted(halted) 
    );

    control control(
        .func(func),
        .opcode(opcode),
        .dstReg(cuDestReg),
        .jmp(jump),
        .branch(branch),
        .MemtoReg(memtoreg),
        .ALUop(aluOp),
        .MemWrite(MemWrite),
        .ALUSrc(alusrc),
        .RegWrite(regWrite_out),
        .halted(halted),
        .shift(shift),
        .i_sign(i_sign),
        .is_byte(is_byte),
        .rs_is_src(rs_is_src),
        .rt_is_src(rt_is_src)
    );

    alu_control alu_control(.func(func),
                            .alu_opcode(aluOp),
                            .alu_control(aluctrl)
    );

    singExtend sign_extend(
        .input_data(immAdd),
        .i_sign(i_sign),
        .out(sign_extended)
    );

    mux src1_mux(
        5'b0,
        rs,
        rs_is_src,
        src1_out
    );
     defparam src1_mux.n = 5 ;

    mux src2_mux(
        5'b0,
        rt,
        rt_is_src,
        src2_out
    );
  defparam src2_mux.n = 5 ;
endmodule
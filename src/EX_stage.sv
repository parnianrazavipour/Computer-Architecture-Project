module EX_stage(
    input [31:0] inst,pc_increase_result,operand_1,operand_2,sign_extended,MEM_alu_out,WB_out,
    input [4:0] aluctrl,destReg,
    input MemWrite,memtoreg,branch,jump,shift,alusrc,regWrite,is_byte,
    input [1:0] sel_val1,
    input [1:0] sel_val2,
    output [4:0] destReg_out,
    output MemWrite_out,memtoreg_out,regWrite_out,is_byte_out,
    output [31:0] alu_out,next_pc,operand_2_out ,
    output b_or_j 
);
    wire z_flag;
    wire [31:0] alu_src_mux_out;
    wire [4:0] sa;
    wire [31:0] sa_select_mux_out;
    wire [31:0] src1,src2;
    assign b_or_j = (~z_flag & branch) | jump ; 
    // assign next_pc = jump_mux_out;
    assign MemWrite_out = MemWrite;
    assign  destReg_out = destReg;
    assign memtoreg_out = memtoreg;
    assign regWrite_out = regWrite;
    assign operand_2_out = src2;
    assign is_byte_out = is_byte;


    mux3in1 src1_mux(
       .in1(operand_1),
       .in2(MEM_alu_out),
       .in3(WB_out),
       .s(sel_val1),
       .out(src1) 
    );

    mux3in1 src2_mux(
       .in1(operand_2),
       .in2(MEM_alu_out),
       .in3(WB_out),
       .s(sel_val2),
       .out(src2) 
    );


    mux alu_src_mux(
       .in1(src2),
       .in2(sign_extended),
       .s(alusrc),
       .out(alu_src_mux_out) 
    );


    assign sa = inst[10:6];

    mux sa_select_mux(
        .in1(src1),
        .in2({27'b0 , sa}),
        .s(shift),
        .out(sa_select_mux_out)
    );

    alu alu(
       .reg1_data(sa_select_mux_out),
       .reg2_data(alu_src_mux_out),
       .alu_control(aluctrl),
       .result(alu_out),
       .z_flag(z_flag)
    );
    

    wire [15:0] immAdd ;
    assign immAdd = sign_extended[15:0];
    wire [31:0] adder_sign_extend_result,pc_add_result,jump_mux_out;
    assign next_pc = jump_mux_out;
    singExtend adder_sign_extend(
        .input_data(immAdd),
        .i_sign(1'b1),
        .out(adder_sign_extend_result)
    );

    adder pc_adder(
        .in1(pc_increase_result),
        .in2( {adder_sign_extend_result[29:0]  ,2'b00}),
        .out(pc_add_result)
    );

    mux jump_mux(
       .in1(pc_add_result),
       .in2({pc_increase_result[31:28],inst[25:0],2'b00}),
       .s(jump),
       .out(jump_mux_out) 
    );

endmodule
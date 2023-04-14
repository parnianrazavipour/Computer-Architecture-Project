module ID_EX_reg (
    input clk,regWrite,hold,
    input [31:0] inst,pc_increase_result,operand_1,operand_2,sign_extended,
    input [4:0] aluctrl,destReg,src1,src2,
    input MemWrite,memtoreg,branch,jump,shift,alu_src,is_byte,
    output reg regWrite_out,
    output reg [31:0] inst_out,pc_increase_result_out,operand_1_out,operand_2_out,sign_extended_out,
    output reg [4:0] aluctrl_out,destReg_out,src1_out,src2_out,
    output reg MemWrite_out,memtoreg_out,branch_out,jump_out,shift_out,alu_src_out,is_byte_out
);


always @(posedge clk) begin
    if (~hold) begin
        regWrite_out<=regWrite;
        inst_out<=inst;
        pc_increase_result_out<=pc_increase_result;
        operand_1_out<=operand_1;
        operand_2_out<=operand_2;
        sign_extended_out<=sign_extended;
        aluctrl_out<=aluctrl;
        destReg_out<=destReg;
        src1_out<=src1;
        src2_out<=src2;
        MemWrite_out<=MemWrite;
        memtoreg_out<=memtoreg;
        branch_out<=branch;
        jump_out<=jump;
        shift_out<=shift;
        alu_src_out<=alu_src;
        is_byte_out<=is_byte;
    end
end
    
endmodule
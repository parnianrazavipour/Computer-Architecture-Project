module EX_MEM_reg (
    input clk,hold,
    input [4:0] destReg,
    input MemWrite,memtoreg,regWrite,is_byte,
    input [31:0] alu_out,operand_2,//next_pc,
    output reg [4:0] destReg_out,
    output reg MemWrite_out,memtoreg_out,regWrite_out,is_byte_out,
    output reg [31:0] MEM_alu_out,operand_2_out//,next_pc
);

 always @(posedge clk) begin
     if(~hold) begin
        destReg_out<=destReg;
        MemWrite_out<=MemWrite;
        memtoreg_out<=memtoreg;
        regWrite_out<=regWrite;
        MEM_alu_out<=alu_out;
        operand_2_out<=operand_2;
        is_byte_out<=is_byte;
    end
end
    
endmodule
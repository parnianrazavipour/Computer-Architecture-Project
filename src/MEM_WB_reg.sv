module MEM_WB_reg (
    input clk,
    input [7:0] data_out[0:3],
    input hold,
    input [4:0] destReg,
    input regWrite,memtoreg,
    input [31:0] MEM_alu_out,
    output reg [7:0] data_out_WB [0:3],
    output reg [4:0] destReg_out,
    output reg regWrite_out,memtoreg_out,
    output reg [31:0] WB_alu_out
);

always @(posedge clk) begin
    if(hold == 0) begin
        data_out_WB<=data_out;
        destReg_out<=destReg;
        regWrite_out<=regWrite;
        memtoreg_out<=memtoreg;
        WB_alu_out<=MEM_alu_out;
    end
end
    
endmodule
module WB_stage(
    input [4:0] destReg,
    input [7:0] data_from_mem [0:3],
    input regWrite,memtoreg,
    input [31:0] WB_alu_out,
    output [4:0] destReg_out,
    output regWrite_out,
    output [31:0] to_reg_result
);
    assign destReg_out = destReg;
    assign regWrite_out = regWrite;

    mux memtoreg_mux(
       .in1(WB_alu_out),
       .in2({data_from_mem[3], data_from_mem[2], data_from_mem[1],data_from_mem[0]}),
       .s(memtoreg),
       .out(to_reg_result) 
    );
endmodule
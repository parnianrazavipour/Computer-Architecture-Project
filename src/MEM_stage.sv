module MEM_stage(
    input clk,rst,
    input [4:0] destReg,
    input MemWrite,memtoreg,regWrite,is_byte,
    input [31:0] MEM_alu_out,
    input [7:0] mem_data_out [0:3],
    input [7:0]  in_data[0:3],
    output [7:0]  data_out[0:3],
    output [31:0] mem_addr,
    output [7:0] mem_data_in [0:3],
    output mem_write_en,ready,
    output [4:0] destReg_out,
    output regWrite_out,memtoreg_out,
    output [31:0] WB_alu_out//,next_pc//,add_result,
);

    assign destReg_out = destReg;
    assign regWrite_out = regWrite;
    assign WB_alu_out = MEM_alu_out;
    assign memtoreg_out = memtoreg;

    cache cache_core(
        .clk(clk),
        .reset(rst),
        .write_en(MemWrite),
        .read_en(memtoreg),
        .in_addr(MEM_alu_out),
        .in_from_mem(mem_data_out),
        .in_data(in_data),
        .is_byte(is_byte),
        .mem_write_en(mem_write_en),
        .data_out(data_out),
        .mem_data_out(mem_data_in),
        .out_addr(mem_addr),
        .ready(ready)
        );
        
endmodule
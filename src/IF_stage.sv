module IF_stage(
    input clk,
    input rst,
    input [31:0] next_pc,
    input branch,
    input hold,
    output [31:0] pc,pc_increase_result
);
wire [31:0] next_pc_mux_out;

    mux next_pc_mux(
       .in1(pc_increase_result),
       .in2(next_pc),
       .s(branch),
       .out(next_pc_mux_out) 
    );

    pc  pc_core(.clk(clk),
                .in(next_pc_mux_out),
                .out(pc),
                .ready(hold)
    );

    adder  pc_inc(.in1(pc),
                  .in2(32'd4),
                  .out(pc_increase_result)
    );



endmodule
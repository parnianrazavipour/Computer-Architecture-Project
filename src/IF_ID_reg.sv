module IF_ID_reg (
    input [31:0] pc_increase_result,
    inst,
    input clk,hold,IF_flush,
    output reg [31:0] inst_out,pc_increase_result_out
);

always @(posedge clk) begin
    if (hold == 0) begin
        pc_increase_result_out<=pc_increase_result;
        inst_out<=inst; 
    end
    else if (IF_flush == 1) begin
        pc_increase_result_out<=pc_increase_result;
        inst_out<=32'b0;
    end
end
    
endmodule
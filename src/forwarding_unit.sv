module forwarding_unit (
    input [4:0] EX_src1,EX_src2,
    MEM_dest,WB_dest,
    input MEM_regWrite,WB_regWrite,
    output reg [1:0] sel_val1,sel_val2
);
    always @(*) begin
        sel_val1 = 0;
        sel_val2 = 0;

        if(MEM_regWrite == 1 && EX_src1 == MEM_dest) begin
            sel_val1 = 1;
        end
        else if(WB_regWrite == 1 && EX_src1 == WB_dest) begin
            sel_val1 = 2;
        end

        if(MEM_regWrite == 1 && EX_src2 == MEM_dest) begin
            sel_val2 = 1;
        end
        else if(WB_regWrite == 1 && EX_src2 == WB_dest) begin
            sel_val2 = 2;
        end
    end
endmodule
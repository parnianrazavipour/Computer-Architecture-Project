module multiplier(a,b,low);
input [31:0] a,b;
wire [63:0] sum;
output [31:0] low;
assign sum = $signed(a)*$signed(b); 
assign low = sum[31:0];
endmodule
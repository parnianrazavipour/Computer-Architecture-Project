module pc (
    clk,in,out,ready
);
  input clk,ready;
  input [31:0] in;
  output reg [31:0] out;
  always @(posedge clk) begin
        if(ready==1)
          out <= in;
  end  
endmodule
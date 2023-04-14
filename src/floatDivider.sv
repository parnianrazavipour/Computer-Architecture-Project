
module floatDivider(input [31:0]A,
                         input [31:0]B,
                         output [31:0] result);
wire excp_1 , excp_2 , excp_3 , excp_4;                         
wire overflow, underflow, exception;            
wire [7:0] exp;
reg [23:0] mantissa_temp,mantissa_A,mantissa_B;
wire [7:0] exp,exp_A,exp_B,exp_temp;
reg sign_A,sign_B;
wire [31:0] temp1,temp2,temp3,temp4,temp5,temp6,temp7,debug,inverse_B,x0,x1,x2,x3;
wire temp8,temp9,temp10;
assign temp8 = !temp2[31];
assign temp9 = !temp4[31];
assign temp10 = !temp6[31];
assign debug = {1'b1,temp1[30:0]};
assign exp = x3[30:23]+8'd126-B[30:23];
assign inverse_B = {B[31],exp,x3[22:0]};

floatMultilier multiplier1({1'b0,8'd126,B[22:0]},32'h3ff0f0f1,temp1);
floatMultilier multiplier2({1'b0,8'd126,B[22:0]},x0,temp2);
floatMultilier multiplier3(x0,temp3,x1);
floatMultilier multiplier5(x1,temp5,x2);
floatMultilier multiplier4({1'b0,8'd126,B[22:0]},x1,temp4);
floatMultilier multiplier6({1'b0,8'd126,B[22:0]},x2,temp6);
floatMultilier multiplier7(x2,temp7,x3);
floatMultilier multiplier8(A,inverse_B,result);

floatAdder adder1(32'h4034b4b5,{1'b1,temp1[30:0]}, excp_1,x0);
floatAdder adder2(32'h40000000,{temp8,temp2[30:0]}, excp_2,temp3);
floatAdder adder3(32'h40000000,{temp9,temp4[30:0]}, excp_3,temp5);
floatAdder adder4(32'h40000000,{temp10,temp6[30:0]}, excp_4,temp7);

endmodule

module floatMultilier (input [31:0]A,
                                 input [31:0]B,
                                 output reg  [31:0] result);
wire overflow, underflow, exception;
reg [23:0] mantissa_A,mantissa_B;
reg [22:0] mantissa;
reg [47:0] mantissa_temp;
reg [7:0] exp_A,exp_B,exp_temp,exp;
reg sign_A,sign_B,sign;
always@(*) begin
    mantissa_A = {1'b1,A[22:0]};
    exp_A = A[30:23];
    sign_A = A[31];
    mantissa_B = {1'b1,B[22:0]};
    exp_B = B[30:23];
    sign_B = B[31];
    exp_temp = exp_A+exp_B-127;
    mantissa_temp = mantissa_A*mantissa_B;
    if(mantissa_temp[47] == 1'b1) begin
        mantissa = mantissa_temp[46:24];
        exp = exp_temp+1'b1;
    end
    else begin
        mantissa = mantissa_temp[45:23];
        exp = exp_temp;
    end
    sign = sign_A^sign_B;
    result = {sign,exp,mantissa};
end
endmodule

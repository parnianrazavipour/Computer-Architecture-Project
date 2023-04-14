module floatAdder (input [31:0]A,
                         input [31:0]B,
                         output exception,
                         output reg  [31:0] result);
wire overflow, underflow;
reg [23:0] mantissa_A,mantissa_B,mantissa_temp;
reg [22:0] mantissa;
reg [7:0] exp;
reg sign,sign_A,sign_B,sign_temp,carry,A_greater_than_B;
reg [7:0] exp_A,exp_B,exp_temp,exp_sub;
assign exception = (exp_A == 8'b11111111 & exp_B == 8'b11111111 & result[30:23] == 8'b11111111);
always @(*) begin
    if(A[30:23] >= B[30:23]) 
        A_greater_than_B = 1'b1;
    else
        A_greater_than_B = 1'b0;
    if(A_greater_than_B) begin
        mantissa_A = {1'b1,A[22:0]};
        mantissa_B =  {1'b1,B[22:0]};
        exp_A = A[30:23];
        exp_B = B[30:23];
        sign_A = A[31];
        sign_B = B[31];
    end
    else begin
        mantissa_A = {1'b1,B[22:0]};
        mantissa_B =  {1'b1,A[22:0]};
        exp_A = B[30:23];
        exp_B = A[30:23];
        sign_A = B[31];
        sign_B = A[31];
    end
    exp_sub = exp_A-exp_B;
    mantissa_B = (mantissa_B >> exp_sub);
    {carry,mantissa_temp} =  (sign_A ~^ sign_B)? mantissa_A + mantissa_B : mantissa_A-mantissa_B ; 
    exp = exp_A;
    if(carry)
        begin
            mantissa_temp = mantissa_temp>>1;
            exp = exp+1'b1;
        end
    else
        begin
        while(!mantissa_temp[23])begin
                mantissa_temp = mantissa_temp<<1;
                exp =  exp-1'b1;
            end
        end
    sign = sign_A;
    mantissa = mantissa_temp[22:0];
    result = {sign,exp,mantissa};

end
endmodule

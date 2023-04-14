module aluf(reg1_data,reg2_data,alu_control,result,z_flag,div_by_zero,underflow
            ,snan,overflow,qnan,inexact);

//input r_i_select;//0:R-Type 1:I-Type
input signed [31:0] reg1_data,reg2_data;
input [3:0] alu_control;
output reg [31:0] result;
output div_by_zero,underflow,snan,overflow,qnan,inexact;
//output Overflow,Underflow,Exception;
output z_flag;
assign z_flag = (result == 32'b0) ? 1 : 0;
wire sign_1,sign_2;
wire [22:0] mantissa_1,mantissa_2;
wire [7:0] exp_1,exp_2;
assign sign_1 = reg1_data[31];
assign mantissa_1 = reg1_data[22:0];
assign exp_1 = reg1_data[30:23];
assign sign_2 = reg2_data[31];
assign mantissa_2 = reg2_data[22:0];
assign exp_2 = reg2_data[30:23];
reg [31:0] result_temp;
reg sign_temp;
reg[15:0] luiTemp;
wire [31:0] add_result ;
assign div_by_zero = (alu_control == 4'b011 & reg2_data == 32'b0 & ~(reg1_data == 32'b0));
assign underflow = (result[30:23] == 8'b0 & (|result[22:0] == 1'b1));
assign snan = (result[30:23] == 8'b11111111 & result[22] == 1'b0 & (|result[21:0] == 1'b1));
assign overflow = (result[30:23] == 8'b11111111);
assign qnan = (result[30:22] == 9'b111111111);
assign inexact = (underflow | overflow | (alu_control==4'b0000 & exception));
wire [31:0] sub_result ;
wire [31:0] mul_result;
wire [31:0] div_result;
reg signed [7:0] exp_1_real;
reg [31:0] reg2_data_temp ; 
reg [1:0] op;
wire Overflow , Underflow , exception;

floatAdder adder (reg1_data,
                         reg2_data_temp,

                          exception,
                         add_result);
floatMultilier muler(reg1_data,
                                 reg2_data,
                               
                                 mul_result);
floatDivider diver(reg1_data,
                         reg2_data,

                         div_result);

/* verilator lint_off LATCH */
always @(alu_control or reg1_data or reg2_data) begin
    case (alu_control)
        4'b0000: begin
            op = 2'b00;
            reg2_data_temp = reg2_data;
            result  = add_result;
        end    
        4'b0001: begin
            op = 2'b01;
            reg2_data_temp = reg2_data;
            if(reg2_data[31]==1)
                reg2_data_temp[31] = 0;
            else if(reg2_data[31]==0)
                reg2_data_temp[31] = 1;
            result = add_result;
        end
        4'b0010: begin
            op = 2'b10;
            result = mul_result;
        end
        4'b0011: begin
            op = 2'b11;
            result = div_result;
        end
        4'b0100: begin
            if((sign_1 == sign_2) && (exp_1 == exp_2) && (mantissa_1 == mantissa_2))
                result = 1;
            else
                result = 0;
        end
        4'b0101: begin
            if(sign_1 > sign_2)
                result = 1;
            else if(sign_1 < sign_2)
                result = 0;
            else begin
                if(sign_1 == 0) begin
                    if(exp_1 < exp_2)
                        result = 1;
                    else if(exp_1 > exp_2)
                        result = 0;
                    else if(mantissa_1 < mantissa_2)
                        result = 1;
                    else if(mantissa_1 > mantissa_2)
                        result = 0;
                    else result = 1;
                end
                else begin
                    if(exp_1 > exp_2)
                        result = 1;
                    else if(exp_1 < exp_2)
                        result = 0;
                    else if(mantissa_1 > mantissa_2)
                        result = 1;
                    else if(mantissa_1 < mantissa_2)
                        result = 0;
                    else result = 1;
                end
            end
        end

        4'b0110: begin
            if(sign_1 > sign_2)
                result = 1;
            else if(sign_1 < sign_2)
                result = 0;
            else begin
                if(sign_1 == 0) begin
                    if(exp_1 < exp_2)
                        result = 1;
                    else if(exp_1 > exp_2)
                        result = 0;
                    else if(mantissa_1 < mantissa_2)
                        result = 1;
                    else if(mantissa_1 > mantissa_2)
                        result = 0;
                    else result = 0;
                end
                else begin
                    if(exp_1 > exp_2)
                        result = 1;
                    else if(exp_1 < exp_2)
                        result = 0;
                    else if(mantissa_1 > mantissa_2)
                        result = 1;
                    else if(mantissa_1 < mantissa_2)
                        result = 0;
                    else result = 0;
                end
            end
        end
        
        4'b0111: begin
            if(sign_1 == 1)
                result = {1'b0,exp_1,mantissa_1};
            else if(sign_1 == 0)
                result = {1'b1,exp_1,mantissa_1};
            else 
                result = {1'b1,exp_1,mantissa_1};
        end
        4'b1000:begin
          
            exp_1_real = exp_1 - 127;
            if(exp_1_real < -1) begin
                result_temp = 0;
            end
            else if(exp_1_real == -1) begin
                result_temp = 1;
            end
            else if(exp_1_real == 0) begin
                result_temp = 1;
                if(mantissa_1[22] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 1) begin
                result_temp = {30'b0, 1'b1,mantissa_1[22]};
                if(mantissa_1[21] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 2) begin
                result_temp = {29'b0,1'b1,mantissa_1[22:21]};
                if(mantissa_1[20] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 3) begin
                result_temp = {28'b0,1'b1,mantissa_1[22:20]};
                if(mantissa_1[19] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 4) begin
                result_temp = {27'b0 , 1'b1,mantissa_1[22:19]};
                if(mantissa_1[18] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 5) begin
                result_temp = {26'b0 , 1'b1,mantissa_1[22:18]};
                if(mantissa_1[17] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 6) begin
                result_temp = {25'b0 , 1'b1,mantissa_1[22:17]};
                if(mantissa_1[16] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 7) begin
                result_temp = {24'b0 , 1'b1,mantissa_1[22:16]};
                if(mantissa_1[15] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 8) begin
                result_temp = {23'b0 , 1'b1,mantissa_1[22:15]};
                if(mantissa_1[14] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 9) begin
                result_temp = {22'b0 , 1'b1,mantissa_1[22:14]};
                if(mantissa_1[13] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 10) begin
                result_temp = {21'b0 , 1'b1,mantissa_1[22:13]};
                if(mantissa_1[12] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 11) begin
                result_temp = {20'b0 , 1'b1,mantissa_1[22:12]};
                if(mantissa_1[11] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 12) begin
                result_temp = {19'b0 , 1'b1,mantissa_1[22:11]};
                if(mantissa_1[10] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 13) begin
                result_temp = {18'b0 , 1'b1,mantissa_1[22:10]};
                if(mantissa_1[9] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 14) begin
                result_temp = {17'b0 , 1'b1,mantissa_1[22:9]};
                if(mantissa_1[8] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 15) begin
                result_temp = {16'b0 , 1'b1,mantissa_1[22:8]};
                if(mantissa_1[7] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 16) begin
                result_temp = {15'b0 , 1'b1,mantissa_1[22:7]};
                if(mantissa_1[6] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 17) begin
                result_temp = {14'b0 , 1'b1,mantissa_1[22:6]};
                if(mantissa_1[5] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 18) begin

                result_temp = {13'b0 , 1'b1,mantissa_1[22:5]};
                if(mantissa_1[4] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 19) begin
                result_temp = {12'b0 , 1'b1,mantissa_1[22:4]};
                if(mantissa_1[3] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 20) begin
                result_temp = {11'b0 , 1'b1,mantissa_1[22:3]};
                if(mantissa_1[2] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 21) begin
                result_temp = {10'b0 , 1'b1,mantissa_1[22:2]};
                if(mantissa_1[1] == 1)
                    result_temp = result_temp + 1;
            end
            else if(exp_1_real == 22) begin
                result_temp = {9'b0 , 1'b1,mantissa_1[22:1]};
                if(mantissa_1[0] == 1)
                    result_temp = result_temp + 1;
            end
            else  begin
                result_temp = {1'b1,mantissa_1} * (2**(exp_1_real-23));
            end


            if(result_temp[23] == 1) begin
                result = {sign_1,8'b00010111,result_temp[22:0]};
            end
            else if(result_temp[22] == 1) begin
                result = {sign_1,8'b00010110,result_temp[21:0], 1'b0};
            end
            else if(result_temp[21] == 1) begin
                result = {sign_1,8'b00010101,result_temp[20:0] ,2'b0};
            end
            else if(result_temp[20] == 1) begin
                result = {sign_1,8'b00010100,result_temp[19:0], 3'b0};
            end
            else if(result_temp[19] == 1) begin
                result = {sign_1,8'b00010011,result_temp[18:0],4'b0};
            end
            else if(result_temp[18] == 1) begin
                result = {sign_1,8'b00010010,result_temp[17:0],5'b0};
            end
            else if(result_temp[17] == 1) begin
                result = {sign_1,8'b00010001,result_temp[16:0],6'b0};
            end
            else if(result_temp[16] == 1) begin
                result = {sign_1,8'b00010000,result_temp[15:0],7'b0};
            end
            else if(result_temp[15] == 1) begin
                result = {sign_1,8'b00001111,result_temp[14:0],8'b0};
            end
            else if(result_temp[14] == 1) begin
                result = {sign_1,8'b00001110,result_temp[13:0],9'b0};
            end
            else if(result_temp[13] == 1) begin
                result = {sign_1,8'b00001101,result_temp[12:0],10'b0};
            end
            else if(result_temp[12] == 1) begin
                result = {sign_1,8'b00001100,result_temp[11:0],11'b0};
            end
            else if(result_temp[11] == 1) begin
                result = {sign_1,8'b00001011,result_temp[10:0],12'b0};
            end
            else if(result_temp[10] == 1) begin
                result = {sign_1,8'b00001010,result_temp[9:0],13'b0};
            end
            else if(result_temp[9] == 1) begin
                result = {sign_1,8'b00001001,result_temp[8:0],14'b0};
            end
            else if(result_temp[8] == 1) begin
                result = {sign_1,8'b00001000,result_temp[7:0],15'b0};
            end
            else if(result_temp[7] == 1) begin
                result = {sign_1,8'b00000111,result_temp[6:0],16'b0};
            end
            else if(result_temp[6] == 1) begin
                result = {sign_1,8'b00000110,result_temp[5:0],17'b0};
            end
            else if(result_temp[5] == 1) begin
                result = {sign_1,8'b00000101,result_temp[4:0],18'b0};
            end
            else if(result_temp[4] == 1) begin
                result = {sign_1,8'b00000100,result_temp[3:0],19'b0};
            end
            else if(result_temp[3] == 1) begin
                result = {sign_1,8'b00000011,result_temp[2:0],20'b0};
            end
            else if(result_temp[2] == 1) begin
                result = {sign_1,8'b00000010,result_temp[1:0],21'b0};
            end

            else if(result_temp[2] == 1) begin
                result = {sign_1,8'b00000001,result_temp[0],22'b0};
            end
            else begin
                result = {sign_1,31'b0};
            end
            result = result + {9'b01111111,23'b0};
        end
        4'b1001: begin
            // result = src2;
            result = reg2_data;
        end
        4'b1010: begin
            // result = src2;
            result = reg2_data;
        end
        4'b1011: begin
            luiTemp = reg2_data[15:0];
            result = {luiTemp,16'b0};
        end
        default: result = 32'b0;
    endcase 
    
end
/* verilator lint_on LATCH */
/*
instructions code help in alu_control:
    0 ADD 0000
    1 SUB 0001
    2 MULT 0010 
    3 DIV 0011
    4 C.EQ 0100
    5 C.LE 0101
    6 C.LT 0110
    7 NEG 0111
    8 ROUND 1000 
    9 LW 1001
    10 SW 1010
    11 LUI 1011

*/
endmodule

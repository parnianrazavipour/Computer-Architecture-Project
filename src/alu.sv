module alu(reg1_data,reg2_data,alu_control,result,z_flag);
//input r_i_select;//0:R-Type 1:I-Type
input signed [31:0] reg1_data,reg2_data;
input [4:0] alu_control;
output reg [31:0] result;
output z_flag;
assign z_flag = (result == 32'b0) ? 1 : 0;
wire carry;
wire [31:0] mul_result,div_result;
multiplier mul(reg1_data,reg2_data,mul_result);
divider div(reg1_data,reg2_data,div_result);

always @(alu_control or reg1_data or reg2_data) begin
    case (alu_control)
        5'b00000 : result = reg1_data ^ reg2_data;
        5'b00001 : begin 
            result = reg2_data << reg1_data;
           end  
        5'b00010 : result = reg2_data << reg1_data;
        5'b00011 : result = reg2_data >> reg1_data;
        5'b00100 : result = reg1_data - reg2_data;
        5'b00101 : result = reg2_data >> reg1_data;
        5'b00110 : 
            begin
                if (reg1_data < reg2_data)
                    result = 1;
                else
                    result = 0;
            end
        5'b00111 : result = 0;
        5'b01000 : result =  reg1_data - reg2_data;
        5'b01001 : result = reg1_data | reg2_data;
        5'b01010 : result = ~(reg1_data | reg2_data);
        5'b01011 : result =  reg1_data + reg2_data;
        5'b01100 : result = mul_result;
        5'b01101 : result = div_result;
        5'b01110 : result = reg1_data & reg2_data;
        5'b01111 : result =  reg1_data + reg2_data;
        5'b10000 : result = reg2_data >>> reg1_data;
        5'b10001 :
            begin
                if (reg1_data == reg2_data) 
                    result = 1;
                else
                    result = 0;
            end
        5'b10010 :
            begin
                if (reg1_data != reg2_data) 
                    result = 1;
                else
                    result = 0;
            end
        5'b10011 : 
            begin
                if (reg1_data <= 0) 
                    result = 1;
                else
                    result = 0;
            end          
        5'b10100 : 
            begin
                if (reg1_data > 0) 
                    result = 1;
                else
                    result = 0;
            end                    
        5'b10101 : 
            begin
                if (reg1_data >= 0) 
                    result = 1;
                else
                    result = 0;
            end
        5'b10110 : result = reg2_data << 16;
        default: result = 32'b0;
    endcase 
end
/*
instructions code help in alu_control:
R-Types:
0 XOR
1 SLL(Shift left logical)
2 SLLV(shift left logical variable)
3 SRL (Shift right logical) Unsigned right shift
4 SUB
5 SRLV(shift right logical variable)
6 SLT (signed comparison)
7 Syscall
8 SUBU(Subtract unsigned)
9 OR
10 NOR
11 ADDu (Add unsigned)
12 MULT
13 DIV
14 AND
15 ADD
16 SRA (signed right shift)
I-Types:
17 BEQ
18 BNE
19 BLEZ
20 BGTZ
21 BGEZ
22 Lui(load upper immediate)
*/
endmodule

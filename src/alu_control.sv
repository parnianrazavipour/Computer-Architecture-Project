
module alu_control (func, alu_opcode, alu_control);

input [5:0] func;
input [3:0] alu_opcode;
output reg [4:0] alu_control; 

// R-Type:
parameter XOR = 6'b100110;
parameter SLL = 6'b000000;
parameter SLLV = 6'b000100;
parameter SRL = 6'b000010;
parameter SUB = 6'b100010;
parameter SRLV = 6'b000110;
parameter SLT = 6'b101010;
parameter Syscall = 6'b001100;
parameter SUBU = 6'b100011;
parameter OR = 6'b100101;
parameter NOR = 6'b100111;
parameter ADDu = 6'b100001;
parameter MULT = 6'b011000;
parameter DIV = 6'b011010;
parameter AND = 6'b100100;
parameter ADD = 6'b100000;
parameter SRA = 6'b000011;

 /* alu_opcode: 
  0 : R-Type
  I-Types:
  1 : addi - addui - lw - sw - lb - sb
  2 : andi
  3 : xori
  4 : ori
  5 : BEQ
  6 : 19 BNE
  7 : 20 BLEZ
  8 : 21 BGTZ
  9 : 22 BGEZ
  10 : SlTi
  11 : 23 Lui(load upper immediate)
*/
// verilator lint_off LATCH
always @* begin
    // verilator lint_on LATCH
    case (alu_opcode)
        4'b0000: 
            case(func)
             XOR: alu_control <= 5'b00000;
             SLL: alu_control <= 5'b00001;
             SLLV: alu_control <= 5'b00010;
             SRL: alu_control <= 5'b00011;
             SUB: alu_control <= 5'b00100;
             SRLV: alu_control <= 5'b00101;
             SLT: alu_control <= 5'b00110;
             Syscall: alu_control <= 5'b00111;
             SUBU: alu_control <= 5'b01000;
             OR: alu_control <= 5'b01001;
             NOR: alu_control <= 5'b01010;
             ADDu: alu_control <= 5'b01011;
             MULT: alu_control <= 5'b01100; 
             DIV: alu_control <= 5'b01101;
             AND: alu_control <= 5'b01110; 
             ADD: alu_control <= 5'b01111;
             SRA: alu_control <= 5'b10000;
            default: alu_control <= 5'b00000;
            endcase
        4'b0001: alu_control <= 5'b01111;//addi - addui - lw - sw - lb - sb
        4'b0010: alu_control <= 5'b01110;//andi
        4'b0011: alu_control <= 5'b00000;//xori
        4'b0100: alu_control <= 5'b01001;//ori
        4'b0101: alu_control <= 5'b10001;//BEQ
        4'b0110: alu_control <= 5'b10010;//BNE
        4'b0111: alu_control <= 5'b10011;//BLEZ
        4'b1000: alu_control <= 5'b10100;//BGTZ
        4'b1001: alu_control <= 5'b10101;//BGEZ
        4'b1010: alu_control <= 5'b00110;//SLTi
        4'b1011: alu_control <= 5'b10110;//Lui
        4'b1100: alu_control <= 5'b00000;
        4'b1101: alu_control <= 5'b00000;
        default: alu_control <<= 5'b00000;
    endcase
    
end

endmodule
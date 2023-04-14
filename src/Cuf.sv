
module CU_f (
    func,
    opcode,
    dstReg,
    MemtoReg,
    alu_control,
    MemWrite,
    ALUSrc,
    RegWrite
);

  // output reg i_sign;

  input wire [5:0] opcode;
  input wire [5:0] func;
  output reg [3:0] alu_control;
  output reg dstReg;  // 0 rt, 1 rd 
  output reg MemWrite;
  output reg MemtoReg;
  output reg ALUSrc;
  output reg RegWrite;
// verilator lint_off LATCH

  always @(opcode) begin
    case (opcode)
      6'b110000: begin
        case(func)
            6'b000000: //ADD
            begin
                ALUSrc = 0;
                alu_control = 4'b0000;
                dstReg = 1;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 1;
                end
            6'b000001: //SUB
            begin
                ALUSrc = 0;
                alu_control = 4'b0001;
                dstReg = 1;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 1;
                end
            6'b000010: //MULT
            begin
                ALUSrc = 0;
                alu_control = 4'b0010;
                dstReg = 1;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 1;
                end
            6'b000011: //DIV
            begin
                ALUSrc = 0;
                alu_control = 4'b0011;
                dstReg = 1;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 1;
                end
            6'b000100: //C.EQ
            begin
                ALUSrc = 0;
                alu_control = 4'b0100;
                dstReg = 1;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 1;
                end
            6'b000101: //C.LE
            begin
                ALUSrc = 0;
                alu_control = 4'b0101;
                dstReg = 1;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 1;
                end
            6'b000110: //C.LT
            begin
                ALUSrc = 0;
                alu_control = 4'b0110;
                dstReg = 1;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 1;
                end
            6'b000111: //NEG
            begin
                ALUSrc = 0;
                alu_control = 4'b0111;
                dstReg = 1;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 1;
                end
            6'b001000: //ROUND
            begin
                ALUSrc = 0;
                alu_control = 4'b1000;
                dstReg = 1;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 1;
            end
            default:
            begin
                ALUSrc = 0;
                alu_control = 4'b0000;
                dstReg = 0;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 0;
            end
        endcase   
      end
      6'b110001: begin //LW
        ALUSrc = 1;
        alu_control = 4'b1001;
        dstReg = 0;
        MemtoReg = 1;
        MemWrite = 0;
        RegWrite = 1;
      end
       6'b110010: begin //SW
        ALUSrc = 1;
        alu_control = 4'b1010;
        dstReg = 0;
        MemtoReg = 0;
        MemWrite = 1;
        RegWrite = 0;
      end
      6'b110011: begin //ADDI
        ALUSrc = 1;
        alu_control = 4'b0000;
        dstReg = 0;
        MemtoReg = 0;
        MemWrite = 0;
        RegWrite = 1;
      end
      6'b110100: begin //LUI
        ALUSrc = 1;
        alu_control = 4'b1011;
        dstReg = 0;
        MemtoReg = 0;
        MemWrite = 0;
        RegWrite = 1;
      end
      default: begin
        ALUSrc = 0;
        alu_control = 4'b0000;
        dstReg = 0;
        MemtoReg = 0;
        MemWrite = 0;
        RegWrite = 0;
      end
    endcase
  end

  // verilator lint_on LATCH

endmodule
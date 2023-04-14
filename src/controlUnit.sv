
module control (
    func,
    opcode,
    dstReg,
    jmp,
    branch,
    MemtoReg,
    ALUop,
    MemWrite,
    ALUSrc,
    RegWrite,
    halted,
    shift,
    i_sign, 
    is_byte,
    rs_is_src,
    rt_is_src
);
  // opcodes :
  reg MemRead;
  output reg i_sign;

 
  // R-type
  parameter aluopADD = 4'b0000;
  parameter aluopADDU = 4'b0000;
  parameter aluopSUB = 4'b0000;
  parameter aluopSUBU = 4'b0000;
  parameter aluopJR = 4'b0000;
  parameter aluopMULT = 4'b0000;
  parameter aluopDIV = 4'b0000;
  parameter aluopAND = 4'b0000;
  parameter aluopOR = 4'b0000;
  parameter aluopNOR = 4'b0000;
  parameter aluopXOR = 4'b0000;
  parameter aluopSLLV = 4'b0000;
  parameter aluopSRLV = 4'b0000;
  parameter aluopSYSCALL = 4'b0000;
  parameter aluopSLL = 4'b0000;
  parameter aluopSRL = 4'b0000;
  parameter aluopSLT = 4'b0000;
  parameter aluopSRA = 4'b0000;
  // I-type
  parameter aluopADDI = 4'b0001;
  parameter aluopADDIU = 4'b0001;
  parameter aluopLW = 4'b0001;
  parameter aluopSW = 4'b0001;
  parameter aluopSB = 4'b0001;
  parameter aluopLB = 4'b0001;
  parameter aluopANDI = 4'b0010;
  parameter aluopXORI = 4'b0011;
  parameter aluopORI = 4'b0100;
  parameter aluopBEQ = 4'b0101;
  parameter aluopBNE = 4'b0110;
  parameter aluopBLEZ = 4'b0111;
  parameter aluopBGTZ = 4'b1000;
  parameter aluopBGEZ = 4'b1001;
  parameter aluopSLTI = 4'b1010;
  parameter aluopLUI = 4'b1011;
  parameter aluopJ = 4'b1100;
  parameter aluopJAL = 4'b1101;
  /* alu_opcode: 
  0 : R-Type
  I-Types:
  1 : addi - addui - lw - sw - lb - sb
  2 : andi
  3 : xori
  4 : ori
  5 : BEQ
  6 : BNE
  7 : BLEZ
  8 : BGTZ
  9 : BGEZ
  10 : SlTi
  11 : Lui(load upper immediate)
  12 : J
  13 : JAL
*/
  parameter ADD = 6'b000000;
  parameter ADDU = 6'b000000;
  parameter SUB = 6'b000000;
  parameter SUBU = 6'b000000;
  parameter JR = 6'b000000;
  parameter MULT = 6'b000000;
  parameter DIV = 6'b000000;
  parameter AND = 6'b000000;
  parameter OR = 6'b000000;
  parameter NOR = 6'b000000;
  parameter XOR = 6'b000000;
  parameter SLLV = 6'b000000;
  parameter SRLV = 6'b000000;
  parameter SYSCALL = 6'b000000;
  parameter SLL = 6'b000000;
  parameter SRL = 6'b000000;
  parameter SLT = 6'b000000;
  parameter SRA = 6'b000000;
  // I-type
  parameter ADDI = 6'b001000;
  parameter ADDIU = 6'b001001;
  parameter LW = 6'b100011;
  parameter SW = 6'b101011;
  parameter SB = 6'b101000;
  parameter LB = 6'b100000;
  parameter ANDI = 6'b001100;
  parameter XORI = 6'b001110;
  parameter ORI = 6'b001101;
  parameter BEQ = 6'b000100;
  parameter BNE = 6'b000101;
  parameter BLEZ = 6'b000110;
  parameter BGTZ = 6'b000111;
  parameter BGEZ = 6'b000001;
  parameter SLTI = 6'b001010;
  parameter LUI = 6'b001111;
  /* J-type
  12 : J
  13 : JAL
*/
  parameter J = 6'b000010;
  parameter JAL = 6'b000011;

  input wire [5:0] opcode;
  input wire [5:0] func;
  output reg [3:0] ALUop;
  output reg dstReg;  // 0 rt, 1 rd 
  output reg jmp;
  output reg branch;
  //output reg MemRead;
  output reg MemWrite;
  output reg MemtoReg;
  output reg ALUSrc;
  output reg RegWrite;
  output reg halted = 1'b0;
  output reg shift = 1'b0;
  output reg is_byte  = 1'b0;
  output reg rs_is_src=0,rt_is_src=0;
// verilator lint_off LATCH

  always @(opcode) begin
    case (opcode)
      ADD: begin
        case(func)
            6'b001100: //SYSCALL
            begin
                ALUSrc = 0;
                ALUop = aluopSYSCALL;
                jmp = 0;
                dstReg = 0;  //don't care 
                branch = 0;
                MemRead = 0;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 0;
                halted = 1;
                shift = 0;
                i_sign = 1;
                end
            6'b001000: //JR
              begin
                ALUSrc = 0;
                ALUop = aluopJR;
                jmp = 1;
                dstReg = 0;  //don't care 
                branch = 0;
                MemRead = 0;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 0;
                shift = 0;
                i_sign = 1;
                is_byte  = 1'b0;
                rs_is_src = 1;
                end
            6'b000000: //SLL
              begin
                ALUSrc = 0;
                ALUop = aluopSLL;
                jmp = 0;
                dstReg = 1;  //rd
                branch = 0;
                MemRead = 0;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 1;
                shift = 1;
                i_sign = 1;
                is_byte  = 1'b0;
                rt_is_src = 1;
                end
            6'b000010: //SRL
              begin
                ALUSrc = 0;
                ALUop = aluopSRL;
                jmp = 0;
                dstReg = 1;  //rd 
                branch = 0;
                MemRead = 0;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 1;
                shift = 1;
                i_sign = 1;
                is_byte  = 1'b0;
                rt_is_src = 1;
                end
            6'b000011: //SRA
              begin
                ALUSrc = 0;
                ALUop = aluopSRA;
                jmp = 0;
                dstReg = 1;  //rd 
                branch = 0;
                MemRead = 0;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 1;
                shift = 1;
                i_sign = 1;
                is_byte  = 1'b0;
                rt_is_src = 1;
                end
            default:
                begin
                ALUSrc = 0; //ALL OTHERS
                ALUop = aluopADD;
                jmp = 0;
                dstReg = 1;  //rd 
                branch = 0;
                MemRead = 0;
                MemtoReg = 0;
                MemWrite = 0;
                RegWrite = 1;
                shift = 0 ;
                i_sign = 1;
                is_byte  = 1'b0;
                rt_is_src = 1;
                rs_is_src = 1;
                end
        endcase
        
      end
      ADDI: begin
        ALUSrc = 1;
        ALUop = aluopADDI;
        jmp = 0;
        dstReg = 0;  //rt 
        branch = 0;
        MemRead = 0;
        MemtoReg = 0;
        MemWrite = 0;
        RegWrite = 1;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b0;
        rs_is_src = 1;
      end
      ADDIU: begin
        ALUSrc = 1;
        ALUop = aluopADDIU;
        jmp = 0;
        dstReg = 0;  //rt 
        branch = 0;
        MemRead = 0;
        MemtoReg = 0;
        MemWrite = 0;
        RegWrite = 1;
         shift = 0;
         i_sign = 0;
         is_byte  = 1'b0;
         rs_is_src = 1;
      end

      ANDI: begin
        ALUSrc = 1;
        ALUop = aluopANDI;
        jmp = 0;
        branch = 0;
        dstReg = 0;  //rt 
        MemRead = 0;
        MemtoReg = 0;
        MemWrite = 0;
        RegWrite = 1;
         shift = 0;
         i_sign = 0;
         is_byte  = 1'b0;
         rs_is_src = 1;
      end

      ORI: begin
        ALUSrc = 1;
        ALUop = aluopORI;
        jmp = 0;
        branch = 0;
        dstReg = 0;  //rt 
        MemRead = 0;
        MemtoReg = 0;
        MemWrite = 0;
        RegWrite = 1;
         shift = 0;
         i_sign = 0;
         is_byte  = 1'b0;
         rs_is_src = 1;
      end

      XORI: begin
        ALUSrc = 1;
        ALUop = aluopXORI;
        jmp = 0;
        branch = 0;
        dstReg = 0;  //rt 
        MemRead = 0;
        MemtoReg = 0;
        MemWrite = 0;
        RegWrite = 1;
         shift = 0;
         i_sign = 0;
         is_byte  = 1'b0;
         rs_is_src = 1;
      end
      LUI: begin
        ALUSrc = 1;
        ALUop = aluopLUI;
        jmp = 0;
        branch = 0;
        MemRead = 0;
        MemtoReg = 0;
        dstReg = 0;  //rt 
        MemWrite = 0;
        RegWrite = 1;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b0;
      end
      LW: begin
        ALUSrc = 1;
        ALUop = aluopLW;
        jmp = 0;
        branch = 0;
        MemRead = 1;
        dstReg = 0;  //rt 
        MemtoReg = 1;
        MemWrite = 0;
        RegWrite = 1;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b0;
         rs_is_src = 1;
      end

      SW: begin
        ALUSrc = 1;
        ALUop = aluopSW;
        dstReg = 0;  //don't care  
        jmp = 0;
        branch = 0;
        MemRead = 0;
        MemtoReg = 0;
        MemWrite = 1;
        RegWrite = 0;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b0;
         rt_is_src = 1;
         rs_is_src = 1;
      end
      LB: begin
        ALUSrc = 1;
        ALUop = aluopLB;
        jmp = 0;
        branch = 0;
        MemRead = 1;
        dstReg = 0;  //rt 
        MemtoReg = 1;
        MemWrite = 0;
        RegWrite = 1;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b1;
         rs_is_src = 1;
         //TODO maybe not rt_is_src = 1;
         rt_is_src = 1;
      end
      SB: begin
        ALUSrc = 1;
        ALUop = aluopSB;
        dstReg = 0;  //don't care  
        jmp = 0;
        branch = 0;
        MemRead = 0;
        MemtoReg = 0;
        MemWrite = 1;
        RegWrite = 0;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b1;
         rs_is_src = 1;
         rt_is_src = 1;
      end
      SLTI: begin
        ALUSrc = 1;
        ALUop = aluopSLTI;
        jmp = 0;
        branch = 0;
        MemRead = 0;
        MemtoReg = 0;
        dstReg = 0;  //rt 
        MemWrite = 0;
        RegWrite = 1;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b0;
         rs_is_src = 1;
      end
      BEQ: begin
        ALUSrc = 0;
        ALUop = aluopBEQ;
        jmp = 0;
        dstReg = 0;  //don't care 
        branch = 1;
        MemRead = 0;
        MemtoReg = 0;
        MemWrite = 0;
        RegWrite = 0;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b0;
         rs_is_src = 1;
         rt_is_src = 1;
      end
      BNE: begin
        ALUSrc = 0;
        ALUop = aluopBNE;
        jmp = 0;
        branch = 1;
        MemRead = 0;
        MemtoReg = 0;
        MemWrite = 0;
        dstReg = 0;  //don't care  
        RegWrite = 0;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b0;
         rs_is_src = 1;
         rt_is_src = 1;
      end
      BGEZ: begin
        ALUSrc = 1;
        ALUop = aluopBGEZ;
        jmp = 0;
        branch = 1;
        MemRead = 0;
        MemtoReg = 0;
        MemWrite = 0;
        dstReg = 0;  //don't care  
        RegWrite = 0;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b0;
         rs_is_src = 1;
      end
      BGTZ: begin
        ALUSrc = 1;
        ALUop = aluopBGTZ;
        jmp = 0;
        branch = 1;
        MemRead = 0;
        MemtoReg = 0;
        MemWrite = 0;
        dstReg = 0;  //don't care  
        RegWrite = 0;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b0;
         rs_is_src = 1;
      end
      BLEZ: begin
        ALUSrc = 1;
        ALUop = aluopBLEZ;
        jmp = 0;
        branch = 1;
        MemRead = 0;
        MemtoReg = 0;
        MemWrite = 0;
        dstReg = 0;  //don't care  
        RegWrite = 0;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b0;
         rs_is_src = 1;
      end
      J: begin
        ALUSrc = 1;
        ALUop = aluopJ;
        jmp = 1;
        branch = 0;
        MemRead = 0;
        MemtoReg = 0;
        dstReg = 0;  //don't care  
        MemWrite = 0;
        RegWrite = 0;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b0;
      end
      JAL: begin
        ALUSrc = 1;
        ALUop = aluopJAL;
        jmp = 1;
        branch = 0;
        MemRead = 0;
        MemtoReg = 0;
        dstReg = 0;  //??
        MemWrite = 0;
        RegWrite = 1;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b0;
      end

      default: begin
        ALUSrc = 0;
        ALUop = 4'b1111;
        jmp = 0;
        branch = 0;
        MemRead = 0;
        MemtoReg = 0;
        MemWrite = 0;
        dstReg = 0;  //don't care  
        RegWrite = 0;
         shift = 0;
         i_sign = 1;
         is_byte  = 1'b0;
      end
    endcase
  end

  // verilator lint_on LATCH

endmodule
module mux3in1 (
    in1,in2,in3,s,out
);
    input [31:0] in1,in2,in3;
    input [1:0] s;
    output [31:0] out;
    assign out = (s==2'b10) ? in3 : (s==2'b01) ? in2 : in1;
endmodule
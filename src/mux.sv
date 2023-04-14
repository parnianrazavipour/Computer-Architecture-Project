module mux (
    in1,in2,s,out
);
     parameter n  = 32 ; 
    input [n-1:0] in1,in2;
    input s;
    output [n-1:0] out;
    assign out = s ? in2 : in1;
endmodule
module singExtend (
    input_data//,input_sign
    , i_sign//,i_sign_sign
    ,out
);
    input i_sign;
    input [15:0] input_data;
    output [31:0] out;
    assign out[15:0] = input_data;
    assign out[31:16] = ((input_data[15] && i_sign ) ? 16'hFFFF : 16'h0);
endmodule
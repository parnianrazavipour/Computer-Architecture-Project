module divider (a,b,quotient);
input logic signed[31:0] a,b;
output logic signed[31:0] quotient;//,remainder;
initial begin
	quotient = a / b;
	//remainder = a % b;
end	
endmodule
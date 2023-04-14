module cache(clk,reset,write_en,read_en,in_addr,in_from_mem,in_data,is_byte,
            mem_write_en,data_out,mem_data_out,out_addr,ready);

    parameter b = 11;
    parameter w = 0;
    parameter block_lenght = 1 << w;    // 8 words next to each other
    parameter block_height = 1 << b;     // 64 blocks under each otherinput reset,write_en,read_en;
    parameter c = 30 - w - b;
    reg [32*(block_lenght)-1:0] cache [0:block_height-1];
    input clk,reset,write_en,read_en,is_byte;
    input [31:0] in_addr;
    wire [31 : 0 ]in_d ;
    input [7:0] in_from_mem[0:3],in_data[0:3];
    assign in_d = {in_data[3], in_data[2], in_data[1] , in_data[0] };
    output reg mem_write_en=0,ready;
    output reg [7:0] data_out[0:3];
    output reg [7:0] mem_data_out[0:3];
    output reg [31:0] out_addr;
    wire [c-1:0] tag_addr;
    wire [b-1:0] block_addr;
    wire word_addr;
    wire [1:0] byte_addr;
    assign tag_addr = in_addr[31:32-c];
    assign block_addr = in_addr[31-c:2];
    assign word_addr=0;
    assign byte_addr = 3-(in_addr[1:0]);
    reg  [c-1:0] tag_array [0:block_height-1];
    reg [block_height-1:0] valid_array=0;
    reg  [block_height-1:0] dirty_array=0;
    reg [3:0] clock_counter=0;

    always @(negedge clk or negedge reset) begin
        ready=1;
        if ((reset == 0)) begin
            integer i;
            for(i = 0; i <= block_height-1;i++) begin
                        valid_array[i] = 0;
                        dirty_array[i] = 0;
                        cache[i] = 0;
            end
        end
        else if (read_en == 1) begin
            ready=0;
            if (tag_addr == tag_array[block_addr] && valid_array[block_addr]==1) //hit
            begin
                if(is_byte==0) begin
                    data_out[3] = cache[block_addr][31 : 24];
                    data_out[2] = cache[block_addr][23 : 16];
                    data_out[1] = cache[block_addr][15 : 8];
                    data_out[0] = cache[block_addr][7 : 0];
                end
                else begin
                    data_out[3]=0;
                    data_out[2]=0;
                    data_out[1]=0;
                    data_out[0]=cache[block_addr][8*(byte_addr) + 7 -: 8];
                end 
                ready=1;
                clock_counter=-1;
            end
            else begin //miss but not dirty
                if ((valid_array[block_addr]==1 && dirty_array[block_addr]==0) || valid_array[block_addr]==0) begin
                    case (clock_counter)
                    0: out_addr=in_addr;
                    4: begin
                        cache[block_addr] = {in_from_mem[3],in_from_mem[2],in_from_mem[1],in_from_mem[0]};
                        tag_array[block_addr] = tag_addr;
                        valid_array[block_addr] = 1'b1;
                        dirty_array[block_addr] = 1'b0;
                    end
                    5: begin
                        if(is_byte==0) begin
                            data_out[3] = cache[block_addr][31 : 24];
                            data_out[2] = cache[block_addr][23 : 16];
                            data_out[1] = cache[block_addr][15 : 8];
                            data_out[0] = cache[block_addr][ 7 : 0];
                        end
                        else begin
                            data_out[3]=0;
                            data_out[2]=0;
                            data_out[1]=0;
                            data_out[0]=cache[block_addr][8*(byte_addr) + 7 -:8 ];
                        end 
                        ready=1;
                        clock_counter=-1;
                    end  
                    default: begin
                        end
                endcase
                end
                else begin //miss dirty
                    case (clock_counter)
                    0: begin 
                        mem_data_out[3] = cache[block_addr][31 : 24];
                        mem_data_out[2] = cache[block_addr][23 : 16];
                        mem_data_out[1] = cache[block_addr][15 : 8];
                        mem_data_out[0] = cache[block_addr][7 : 0];
                        out_addr = {tag_array[block_addr],block_addr,2'b00};
                        mem_write_en=1;
                    end
                    5: out_addr=in_addr;
                    9: begin
                        cache[block_addr]= {in_from_mem[3],in_from_mem[2],in_from_mem[1],in_from_mem[0]};
                        tag_array[block_addr] = tag_addr;
                        valid_array[block_addr] = 1'b1;
                        dirty_array[block_addr] = 1'b0;
                    end
                    10: begin
                        if(is_byte==0) begin
                            data_out[3] = cache[block_addr][31 : 24];
                            data_out[2] = cache[block_addr][23 : 16];
                            data_out[1] = cache[block_addr][15 : 8];
                            data_out[0] = cache[block_addr][7 : 0];
                        end
                        else begin
                            data_out[3]=0;
                            data_out[2]=0;
                            data_out[1]=0;
                            data_out[0]=cache[block_addr][8*(byte_addr) + 7 -:8 ];
                        end 
                        ready=1;
                        clock_counter=-1;
                    end  
                    default: begin 
                        end
                endcase    
                end
            end
            clock_counter = clock_counter+1;
        end
        else if (write_en == 1) begin
            ready=0;
            if(valid_array[block_addr] == 1 &&  tag_addr == tag_array[block_addr]) //hit
            begin
                if(is_byte==0)
                    cache[block_addr] = {in_data[3],in_data[2],in_data[1],in_data[0]};
                else begin
                    cache[block_addr][8*(byte_addr) + 7 -:8 ] = in_data[0];
                end
                dirty_array[block_addr] = 1'b1;
                clock_counter=-1;
                ready=1;
            end
            else if(valid_array[block_addr] ==0 || dirty_array[block_addr] == 0) begin //miss but not dirty
                case (clock_counter)
                    0: out_addr=in_addr;
                    5: begin
                        if(is_byte==0)
                            cache[block_addr] = {in_data[3],in_data[2],in_data[1],in_data[0]};
                        else begin
                            cache[block_addr][8*(byte_addr) + 7 -:8 ] = in_data[0];
                        end
                        tag_array[block_addr] = tag_addr;
                        valid_array[block_addr] = 1'b1;
                        dirty_array[block_addr] = 1'b1;
                        clock_counter=-1;
                        ready=1;
                    end  
                    default: begin 
                        end
                endcase
            end
            else begin //miss dirty
                case (clock_counter)
                    0: begin 
                        mem_data_out[3] = cache[block_addr][31 : 24];
                        mem_data_out[2] = cache[block_addr][ 23 : 16];
                        mem_data_out[1] = cache[block_addr][ 15 : 8];
                        mem_data_out[0] = cache[block_addr][ 7 : 0];
                        out_addr = {tag_array[block_addr],block_addr,2'b00};
                        mem_write_en=1;
                    end
                    5: out_addr=in_addr;
                    9: begin
                        cache[block_addr] =  {in_from_mem[3],in_from_mem[2],in_from_mem[1],in_from_mem[0]};
                        tag_array[block_addr] = tag_addr;
                        valid_array[block_addr] = 1'b1;
                        dirty_array[block_addr] = 1'b1;
 
                    end
                    10: begin
                        if(is_byte==0)
                            cache[block_addr] = {in_data[3],in_data[2],in_data[1],in_data[0]};
                        else begin

                            cache[block_addr][8*(byte_addr)+7 -: 8] = in_data[0];
                        end                        
                        tag_array[block_addr] = tag_addr;
                        valid_array[block_addr] = 1'b1;
                        dirty_array[block_addr] = 1'b1;
                        clock_counter=-1;
                        ready=1;
                    end  
                    default: 
                    begin
                        end
                endcase 
            end
            clock_counter = clock_counter+1;
        end
    end



endmodule
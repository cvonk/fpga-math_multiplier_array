`timescale 1ns / 1ps

module ma_row #( parameter N = 4)
               ( input [N-1:0] x,    //
                 input y,            //
					  input [N-1:0] si,   // sum in
					  output [N:0] so );	 // sum out

   wire [N-2:0] c; // internal carries

   // array instantiation
   ma ma_inst [N-1:0] ( .x  ( x ),
	                     .y  ( y ),
								.si ( si[N-1:0] ),
					  	  	   .ci ( {c, 1'b0} ),
                        .so ( so[N-1:0] ),
								.co ( {so[N], c}) );

endmodule

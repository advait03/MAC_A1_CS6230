//
// Generated by Bluespec Compiler, version 2021.12.1 (build fd501401)
//
// On Sun Nov 24 10:37:47 IST 2024
//
//
// Ports:
// Name                         I/O  size props
// RDY_putA                       O     1 const
// RDY_putB                       O     1 const
// RDY_putC                       O     1 const
// RDY_putS                       O     1 const
// getA                           O    16 reg
// RDY_getA                       O     1 reg
// getB                           O    16 reg
// RDY_getB                       O     1 reg
// getC                           O    32 reg
// RDY_getC                       O     1 reg
// getS                           O     1 reg
// RDY_getS                       O     1 reg
// CLK                            I     1 clock
// RST_N                          I     1 reset
// putA_a                         I    16 reg
// putB_b                         I    16 reg
// putC_c                         I    32 reg
// putS_s                         I     1 reg
// EN_putA                        I     1
// EN_putB                        I     1
// EN_putC                        I     1
// EN_putS                        I     1
//
// No combinational paths from inputs to outputs
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
  `define BSV_ASSIGNMENT_DELAY
`endif

`ifdef BSV_POSITIVE_RESET
  `define BSV_RESET_VALUE 1'b1
  `define BSV_RESET_EDGE posedge
`else
  `define BSV_RESET_VALUE 1'b0
  `define BSV_RESET_EDGE negedge
`endif

module mkSystolicCell(CLK,
		      RST_N,

		      putA_a,
		      EN_putA,
		      RDY_putA,

		      putB_b,
		      EN_putB,
		      RDY_putB,

		      putC_c,
		      EN_putC,
		      RDY_putC,

		      putS_s,
		      EN_putS,
		      RDY_putS,

		      getA,
		      RDY_getA,

		      getB,
		      RDY_getB,

		      getC,
		      RDY_getC,

		      getS,
		      RDY_getS);
  input  CLK;
  input  RST_N;

  // action method putA
  input  [15 : 0] putA_a;
  input  EN_putA;
  output RDY_putA;

  // action method putB
  input  [15 : 0] putB_b;
  input  EN_putB;
  output RDY_putB;

  // action method putC
  input  [31 : 0] putC_c;
  input  EN_putC;
  output RDY_putC;

  // action method putS
  input  putS_s;
  input  EN_putS;
  output RDY_putS;

  // value method getA
  output [15 : 0] getA;
  output RDY_getA;

  // value method getB
  output [15 : 0] getB;
  output RDY_getB;

  // value method getC
  output [31 : 0] getC;
  output RDY_getC;

  // value method getS
  output getS;
  output RDY_getS;

  // signals for module outputs
  wire [31 : 0] getC;
  wire [15 : 0] getA, getB;
  wire RDY_getA,
       RDY_getB,
       RDY_getC,
       RDY_getS,
       RDY_putA,
       RDY_putB,
       RDY_putC,
       RDY_putS,
       getS;

  // register regA
  reg [15 : 0] regA;
  wire [15 : 0] regA_D_IN;
  wire regA_EN;

  // register regB
  reg [15 : 0] regB;
  wire [15 : 0] regB_D_IN;
  wire regB_EN;

  // register regC
  reg [31 : 0] regC;
  wire [31 : 0] regC_D_IN;
  wire regC_EN;

  // register regCOut
  reg [31 : 0] regCOut;
  wire [31 : 0] regCOut_D_IN;
  wire regCOut_EN;

  // register regS
  reg regS;
  wire regS_D_IN, regS_EN;

  // register validA
  reg validA;
  wire validA_D_IN, validA_EN;

  // register validB
  reg validB;
  wire validB_D_IN, validB_EN;

  // register validC
  reg validC;
  wire validC_D_IN, validC_EN;

  // register validOuts
  reg validOuts;
  wire validOuts_D_IN, validOuts_EN;

  // register validS
  reg validS;
  wire validS_D_IN, validS_EN;

  // ports of submodule mac
  wire [31 : 0] mac_get_inputs_c, mac_macop;
  wire [15 : 0] mac_get_inputs_a, mac_get_inputs_b;
  wire mac_EN_get_inputs, mac_RDY_macop, mac_get_inputs_s, mac_validflag;

  // rule scheduling signals
  wire CAN_FIRE_RL_compute,
       CAN_FIRE_RL_getmac,
       CAN_FIRE_RL_validA__dreg_update,
       CAN_FIRE_RL_validB__dreg_update,
       CAN_FIRE_RL_validC__dreg_update,
       CAN_FIRE_RL_validOuts__dreg_update,
       CAN_FIRE_RL_validS__dreg_update,
       CAN_FIRE_putA,
       CAN_FIRE_putB,
       CAN_FIRE_putC,
       CAN_FIRE_putS,
       WILL_FIRE_RL_compute,
       WILL_FIRE_RL_getmac,
       WILL_FIRE_RL_validA__dreg_update,
       WILL_FIRE_RL_validB__dreg_update,
       WILL_FIRE_RL_validC__dreg_update,
       WILL_FIRE_RL_validOuts__dreg_update,
       WILL_FIRE_RL_validS__dreg_update,
       WILL_FIRE_putA,
       WILL_FIRE_putB,
       WILL_FIRE_putC,
       WILL_FIRE_putS;

  // action method putA
  assign RDY_putA = 1'd1 ;
  assign CAN_FIRE_putA = 1'd1 ;
  assign WILL_FIRE_putA = EN_putA ;

  // action method putB
  assign RDY_putB = 1'd1 ;
  assign CAN_FIRE_putB = 1'd1 ;
  assign WILL_FIRE_putB = EN_putB ;

  // action method putC
  assign RDY_putC = 1'd1 ;
  assign CAN_FIRE_putC = 1'd1 ;
  assign WILL_FIRE_putC = EN_putC ;

  // action method putS
  assign RDY_putS = 1'd1 ;
  assign CAN_FIRE_putS = 1'd1 ;
  assign WILL_FIRE_putS = EN_putS ;

  // value method getA
  assign getA = regA ;
  assign RDY_getA = validOuts ;

  // value method getB
  assign getB = regB ;
  assign RDY_getB = validOuts ;

  // value method getC
  assign getC = regCOut ;
  assign RDY_getC = validOuts ;

  // value method getS
  assign getS = regS ;
  assign RDY_getS = validOuts ;

  // submodule mac
  mkMac mac(.CLK(CLK),
	    .RST_N(RST_N),
	    .get_inputs_a(mac_get_inputs_a),
	    .get_inputs_b(mac_get_inputs_b),
	    .get_inputs_c(mac_get_inputs_c),
	    .get_inputs_s(mac_get_inputs_s),
	    .EN_get_inputs(mac_EN_get_inputs),
	    .RDY_get_inputs(),
	    .macop(mac_macop),
	    .RDY_macop(mac_RDY_macop),
	    .validflag(mac_validflag),
	    .RDY_validflag());

  // rule RL_getmac
  assign CAN_FIRE_RL_getmac = mac_RDY_macop && mac_validflag ;
  assign WILL_FIRE_RL_getmac = CAN_FIRE_RL_getmac ;

  // rule RL_compute
  assign CAN_FIRE_RL_compute = validA && validB && validC && validS ;
  assign WILL_FIRE_RL_compute = CAN_FIRE_RL_compute ;

  // rule RL_validA__dreg_update
  assign CAN_FIRE_RL_validA__dreg_update = 1'd1 ;
  assign WILL_FIRE_RL_validA__dreg_update = 1'd1 ;

  // rule RL_validB__dreg_update
  assign CAN_FIRE_RL_validB__dreg_update = 1'd1 ;
  assign WILL_FIRE_RL_validB__dreg_update = 1'd1 ;

  // rule RL_validC__dreg_update
  assign CAN_FIRE_RL_validC__dreg_update = 1'd1 ;
  assign WILL_FIRE_RL_validC__dreg_update = 1'd1 ;

  // rule RL_validS__dreg_update
  assign CAN_FIRE_RL_validS__dreg_update = 1'd1 ;
  assign WILL_FIRE_RL_validS__dreg_update = 1'd1 ;

  // rule RL_validOuts__dreg_update
  assign CAN_FIRE_RL_validOuts__dreg_update = 1'd1 ;
  assign WILL_FIRE_RL_validOuts__dreg_update = 1'd1 ;

  // register regA
  assign regA_D_IN = putA_a ;
  assign regA_EN = EN_putA ;

  // register regB
  assign regB_D_IN = putB_b ;
  assign regB_EN = EN_putB ;

  // register regC
  assign regC_D_IN = putC_c ;
  assign regC_EN = EN_putC ;

  // register regCOut
  assign regCOut_D_IN = mac_macop ;
  assign regCOut_EN = CAN_FIRE_RL_getmac ;

  // register regS
  assign regS_D_IN = putS_s ;
  assign regS_EN = EN_putS ;

  // register validA
  assign validA_D_IN = EN_putA ;
  assign validA_EN = 1'd1 ;

  // register validB
  assign validB_D_IN = EN_putB ;
  assign validB_EN = 1'd1 ;

  // register validC
  assign validC_D_IN = EN_putC ;
  assign validC_EN = 1'd1 ;

  // register validOuts
  assign validOuts_D_IN = CAN_FIRE_RL_getmac ;
  assign validOuts_EN = 1'd1 ;

  // register validS
  assign validS_D_IN = EN_putS ;
  assign validS_EN = 1'd1 ;

  // submodule mac
  assign mac_get_inputs_a = regA ;
  assign mac_get_inputs_b = regB ;
  assign mac_get_inputs_c = regC ;
  assign mac_get_inputs_s = regS ;
  assign mac_EN_get_inputs = CAN_FIRE_RL_compute ;

  // handling of inlined registers

  always@(posedge CLK)
  begin
    if (RST_N == `BSV_RESET_VALUE)
      begin
        regA <= `BSV_ASSIGNMENT_DELAY 16'd0;
	regB <= `BSV_ASSIGNMENT_DELAY 16'd0;
	regC <= `BSV_ASSIGNMENT_DELAY 32'd0;
	regCOut <= `BSV_ASSIGNMENT_DELAY 32'd0;
	regS <= `BSV_ASSIGNMENT_DELAY 1'd0;
	validA <= `BSV_ASSIGNMENT_DELAY 1'd0;
	validB <= `BSV_ASSIGNMENT_DELAY 1'd0;
	validC <= `BSV_ASSIGNMENT_DELAY 1'd0;
	validOuts <= `BSV_ASSIGNMENT_DELAY 1'd0;
	validS <= `BSV_ASSIGNMENT_DELAY 1'd0;
      end
    else
      begin
        if (regA_EN) regA <= `BSV_ASSIGNMENT_DELAY regA_D_IN;
	if (regB_EN) regB <= `BSV_ASSIGNMENT_DELAY regB_D_IN;
	if (regC_EN) regC <= `BSV_ASSIGNMENT_DELAY regC_D_IN;
	if (regCOut_EN) regCOut <= `BSV_ASSIGNMENT_DELAY regCOut_D_IN;
	if (regS_EN) regS <= `BSV_ASSIGNMENT_DELAY regS_D_IN;
	if (validA_EN) validA <= `BSV_ASSIGNMENT_DELAY validA_D_IN;
	if (validB_EN) validB <= `BSV_ASSIGNMENT_DELAY validB_D_IN;
	if (validC_EN) validC <= `BSV_ASSIGNMENT_DELAY validC_D_IN;
	if (validOuts_EN) validOuts <= `BSV_ASSIGNMENT_DELAY validOuts_D_IN;
	if (validS_EN) validS <= `BSV_ASSIGNMENT_DELAY validS_D_IN;
      end
  end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    regA = 16'hAAAA;
    regB = 16'hAAAA;
    regC = 32'hAAAAAAAA;
    regCOut = 32'hAAAAAAAA;
    regS = 1'h0;
    validA = 1'h0;
    validB = 1'h0;
    validC = 1'h0;
    validOuts = 1'h0;
    validS = 1'h0;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on
endmodule  // mkSystolicCell


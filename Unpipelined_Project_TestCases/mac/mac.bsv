package mac;

// Package imports
 import DReg :: *;

interface Mac;
  method Action get_inputs(Bit#(16) a,Bit#(16) b,Bit#(32) c,Bit#(1) s);
  method Bit#(32) macop();  //Getting MacOp output
endinterface: Mac

// CLA function for 32-bit inputs
function Bit#(32) cla(Bit#(32) x, Bit#(32) y);
  Bit#(32) sum_bits;
  Bit#(33) carry = 0;  // Extra bit for carry-out

  // Step 1: Calculate generate (G) and propagate (P) signals in parallel
  Bit#(32) generate1 = x & y;  // G[i] = X[i] AND Y[i]
  Bit#(32) propagate = x ^ y;  // P[i] = X[i] XOR Y[i]

  // Step 2: Calculate carry bits using CLA logic
  for (Integer i = 0; i < 32; i = i + 1) begin
    carry[i+1] = generate1[i] | (propagate[i] & carry[i]);
  end

  // Step 3: Calculate sum bits
  sum_bits = propagate ^ carry[31:0];  // Sum[i] = P[i] XOR Carry[i]

  return sum_bits;
endfunction : cla

// Multiplier function with CLA for addition
function Bit#(32) multiplier(Bit#(8) a, Bit#(8) b);

  // Sign of result is xor
  Bit#(1) sign = a[7] ^ b[7]; 
  Bit#(32) product = 0;
    
  //taking 2s complement if the input number is negative
  if(a[7] == 1) a = cla(signExtend(~a),32'b1)[7:0];
  if(b[7] == 1) b = cla(signExtend(~b),32'b1)[7:0];
    
  //Make a 32 bit number
  Bit#(32) a_ext = {Bit#(24)'(0), a};
    
  // Perform multiplication using the Shift-and-Add method
  for (Integer i = 0; i < 8; i = i + 1) begin // Loop through the 8 bits of b
    if (b[i] == 1)  // Check if bit i of b is set
      product = cla(product, a_ext << i); // Shift and add to the product
  end

  // Apply sign to the product
  if (sign == 1) begin
    product = cla(~product,32'b1); // Negate the product if the result should be negative
  end
  Bit#(32) p = signExtend(product); 
  return p; // Return the signed 32-bit product
endfunction

//Function to compute multiplication of fraction part of bf16
function Bit#(32) bf16_inter_mult(Bit#(8) a, Bit#(8) b);

  // Sign of result is xor
  Bit#(32) product = 0;
    
  //Make a 32 bit number
  Bit#(32) a_ext = {Bit#(24)'(0), a};
    
  // Perform multiplication using the Shift-and-Add method
  for (Integer i = 0; i < 8; i = i + 1) begin // Loop through the 8 bits of b
    if (b[i] == 1)  // Check if bit i of b is set
      product = cla(product, a_ext << i); // Shift and add to the product
  end

  Bit#(32) p = zeroExtend(product); 
  return p; // Return the signed 32-bit product
endfunction

//Function to perform bf16 multiplication and return fp32 product
function Bit#(32) bf16_multiplier(Bit#(16) a, Bit#(16) b);

  //declaration of sign bit of inputs
  Bit#(1) sgn_a = a[15];
  Bit#(1) sgn_b = b[15];
  
  //declaration of exp bits of inputs
  Bit#(8) exp_a = a[14:7];
  Bit#(8) exp_b = b[14:7];
  
  //declaration of fraction bits and including it as 1.fraction
  Bit#(8) fra_a = {1'b1,a[6:0]};
  Bit#(8) fra_b = {1'b1,b[6:0]};
  
  //Calculating the resultant fraction
  Bit#(16) inter_product = bf16_inter_mult(fra_a, fra_b)[15:0];
  Bit#(23) fraction = 23'b0;
  Bit#(32) mantissa = 32'b0;  // Bits we want to keep
  Bit#(1) rounding_bit = 1'b0;  // Bit to decide rounding
  Bit#(1) round_carry = 1'b0;
  
  if(inter_product[15] == 1) begin 
    mantissa = zeroExtend(inter_product[14:8]);  
    rounding_bit = inter_product[7];
    if (rounding_bit == 1 && inter_product[8:0] != 9'b010000000) begin
      mantissa = cla(mantissa, 32'b1);
    end	
    fraction = {mantissa[6:0], 16'b0};
  end
  
  else if(inter_product[15] == 0) begin
    mantissa = zeroExtend(inter_product[14:7]);  
    rounding_bit = inter_product[6];  	
    if (rounding_bit == 1 && inter_product[7:0] != 8'b01000000) begin
      mantissa = cla(mantissa, 32'b1);
      if(mantissa[8] == 1) begin
        mantissa = cla((mantissa >> 1),{31'b0,mantissa[0]});
        round_carry = 1'b1;
      end
    end		
    fraction = {mantissa[6:0], 16'b0};
  end
  
  //Calculating the sign bit
  Bit#(1) sgn = sgn_a ^ sgn_b;
  
  //Calculating exponent
  Bit#(8) exponent = 8'b0;
  Bit#(8) bias = 8'b0;
  if((inter_product[15] == 1)||(round_carry == 1)) bias = 8'b10000010;
  else if(inter_product[15] == 0) bias = 8'b10000001;
  Bit#(32) midval = cla({24'b0,exp_a},{24'b0,exp_b});
  exponent = cla(midval,{24'b1,bias})[7:0];
  
  //Returning the 32 bit fp32 product of bf16 a and bf16 b
  Bit#(32) result = {sgn,exponent,fraction};
  return result;
endfunction


function Bit#(32) fp32_adder(Bit#(32) a, Bit#(32) b);
  Bit#(1) sign_a = a[31];
  Bit#(32) exp_a = zeroExtend(a[30:23]);
  Bit#(32) exp_a_ = cla(~exp_a,32'b1);
  Bit#(32) mant_a = zeroExtend(a[22:0]);
  mant_a[23]=1;

  Bit#(1) sign_b = b[31];
  Bit#(32) exp_b = zeroExtend(b[30:23]);
  Bit#(32) exp_b_ = cla(~exp_b, 32'b1);
  Bit#(32) mant_b = zeroExtend(b[22:0]);
  mant_b[23]=1;

  Bit#(32) exp_diff = 32'b0;
  Bit#(32) mant_shifted_a = 32'b0;
  Bit#(32) mant_shifted_b = 32'b0;
  Bit#(32) final_exp = 32'b0;
  Bit#(32) mant_sum = 32'b0;
  Bit#(1) result_sign = 1'b0;
  Bit#(32) mant_interim = 32'b0;
  Bit#(32) final_mant = 32'b0;
  Bit#(32) mask = 32'b1;
  Bit#(32) mask_ = cla(~mask, 32'b1);

  // Align exponents by shifting mantissas
  if (exp_a > exp_b) begin
    exp_diff = cla(exp_a, exp_b_);
    mant_shifted_a = mant_a;
    Bit#(32) exp_diff_decr = cla(exp_diff, mask_);
    mask = cla(mask << exp_diff_decr, mask_);
    if(mant_b[exp_diff] == 0 && (mask & mant_b)==0) begin
      mant_shifted_b = mant_b >> exp_diff; 
    end
    else begin
      mant_shifted_b = cla(mant_b >> exp_diff, {31'b0,mant_b[exp_diff_decr]});
    end
    final_exp = exp_a;
  end 
  else begin
    exp_diff = cla(exp_b, exp_a_);
    mant_shifted_b = mant_b;
    Bit#(32) exp_diff_decr = cla(exp_diff, mask_); 
    mask = cla(mask << exp_diff_decr, mask_);  
    if(mant_a[exp_diff] != 0 && (mask & mant_a)==0) begin
      mant_shifted_a = mant_a >> exp_diff; 
    end
    else begin
      mant_shifted_a = cla(mant_a >> exp_diff, {31'b0,mant_a[exp_diff_decr]});
    end
    final_exp = exp_b;
  end
  Bit#(32) mant_shifted_a_ = cla(~mant_shifted_a, 32'b1);
  Bit#(32) mant_shifted_b_ = cla(~mant_shifted_b, 32'b1);
  // Add or subtract mantissas based on signs
  if (sign_a == sign_b) begin
    mant_sum = cla(mant_shifted_a, mant_shifted_b);
    result_sign = sign_a;
  end 
  else begin
    if (mant_shifted_a >= mant_shifted_b) begin
      mant_sum = cla(mant_shifted_a, mant_shifted_b_);
      result_sign = sign_a;
    end
    else begin
      mant_sum = cla(mant_shifted_b, mant_shifted_a_);
      result_sign = sign_b;
    end
  end

  // Normalize the result
  if (mant_sum[24]==1) begin  // Overflow case, shift right
    mant_interim = zeroExtend(mant_sum[23:1]);
    if(mant_sum[1] != 0) begin
      final_mant = cla(mant_interim, {31'b0,mant_sum[0]});
    end
    else begin
      final_mant = mant_interim;
    end
    final_exp = cla(final_exp, 32'b1);
    if (final_mant[23] ==1) begin 
    	final_exp = cla(final_exp, 32'b1);
    end
  end 
  else if(mant_sum[23]==0) begin
    final_exp = cla(final_exp, mask_);
    final_mant = zeroExtend({mant_sum[21:0],1'b0});
  end
  else begin
    final_mant = zeroExtend(mant_sum[22:0]);
  end

  // Reassemble the result
  return {result_sign, final_exp[7:0], final_mant[22:0]};
endfunction

// MAC module implementation
(* synthesize *)
module mkMac (Mac);

  //Reg wires for the interface
  Reg#(Bit#(16)) reg_a <- mkReg(0);
  Reg#(Bit#(16)) reg_b <- mkReg(0);
  Reg#(Bit#(32)) reg_c <- mkReg(0);
  Reg#(Bit#(1)) reg_s <- mkReg(0);
  
  Reg#(Bit#(32)) rg_out       <- mkReg(0);
  Reg#(Bool)     rg_inp_valid <- mkDReg(False);
  Reg#(Bool)     rg_out_valid <- mkDReg(False);
  
  // Rule definitions
  rule rl_mac (rg_inp_valid);
    if(reg_s==0) begin
      Bit#(32) product = multiplier(reg_a[7:0], reg_b[7:0]);  // Use multiplier
      rg_out <= cla(product, reg_c);  // Add c using CLA and store in value1
      rg_out_valid <= True;
    end
    else if(reg_s==1) begin
      Bit#(32) fp32_product = bf16_multiplier(reg_a,reg_b); //Use bf16 multiplier
      rg_out <= fp32_adder(fp32_product,reg_c);
      //rg_out <= fp32_product;
      rg_out_valid <= True;
    end
  endrule : rl_mac
  
  method Action get_inputs(Bit#(16) a,Bit#(16) b,Bit#(32) c,Bit#(1) s);
    reg_a <= a;
    reg_b <= b;
    reg_c <= c;
    reg_s <= s;
    rg_inp_valid <= True;
  endmethod    

  // MAC Operation: a * b + c using the CSM multiplier and CLA for addition
  
  
  method Bit#(32) macop() if(rg_out_valid);
    return rg_out;
  endmethod

endmodule: mkMac

endpackage


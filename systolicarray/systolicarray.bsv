package systolicarray;

import Vector::*;
import FIFO::*;
import SpecialFIFOs::*;
import DReg :: *;
import mac::*;

interface SystolicCell;
    method Action putA(Bit#(16) a);
    method Action putB(Bit#(16) b);
    method Action putC(Bit#(32) c);
    method Action putS(Bit#(1) s);
    method Bit#(16) getA();
    method Bit#(16) getB();
    method Bit#(32) getC();
endinterface

interface SystolicArray;
    method Action loadA(Vector#(4, Bit#(16)) a);
    method Action loadB(Vector#(4, Bit#(16)) b);
    method Action loadS(Bit#(1) s);
    method Vector#(4, Vector#(4, Bit#(32))) getResult();
    method Bool isReady();
endinterface

(* synthesize *)
module mkSystolicCell(SystolicCell);
    Mac mac <- mkMac();
    
    Reg#(Bit#(16)) regA <- mkReg(0);
    Reg#(Bit#(16)) regB <- mkReg(0);
    Reg#(Bit#(32)) regC <- mkReg(0);
    Reg#(Bit#(32)) regCOut <- mkReg(0);
    Reg#(Bool) validA <- mkDReg(False);
    Reg#(Bool) validB <- mkDReg(False);
    Reg#(Bool) validC <- mkDReg(False);
    Reg#(Bool) validOuts <- mkDReg(False);

    rule compute (validA && validB && validC);
        mac.get_inputs(regA, regB, regC, 0);
    endrule
    
    rule getmac (mac.validflag());
        regCOut <= mac.macop();
        validOuts <= True;
    endrule
    
    method Action putA(Bit#(16) a);
        regA <= a;
        validA <= True;
    endmethod
    
    method Action putB(Bit#(16) b);
        regB <= b;
        validB <= True;
    endmethod
    
    method Action putC(Bit#(32) c);
        regC <= c;
        validC <= True;
    endmethod
    
    method Action putS(Bit#(1) s);
        // No specific action for S in this example
    endmethod
    
    method Bit#(16) getA() if (validOuts);
        return regA;
    endmethod
    
    method Bit#(16) getB() if (validOuts);
        return regB;
    endmethod
    
    method Bit#(32) getC() if (validOuts);
        return regCOut;
    endmethod
endmodule

(* synthesize *)
module mkSystolicArray(SystolicArray);
    Vector#(4, Vector#(4, SystolicCell)) cells <- replicateM(replicateM(mkSystolicCell));
    
    Reg#(Bool) initialized <- mkReg(False);
    Reg#(Bit#(3)) cycle <- mkReg(0);
    Reg#(Bool) datacollect <- mkDReg(False);
    Reg#(Bit#(16)) bsum <- mkReg(0);
    Reg#(Bool) bcheck <- mkDReg(False);

    // Temporary storage for intermediate `getC` results
    Vector#(4, Vector#(4, Reg#(Bit#(16)))) tempA <- replicateM(replicateM(mkReg(0)));
    Vector#(4, Vector#(4, Reg#(Bit#(16)))) tempB <- replicateM(replicateM(mkReg(0)));
    Vector#(4, Vector#(4, Reg#(Bit#(32)))) tempC <- replicateM(replicateM(mkReg(0)));


    // Rule 1: Fetch values for `C` and store them temporarily
    rule getC_data (datacollect == False);
        for (Integer i = 1; i < 4; i = i + 1) begin
            for (Integer j = 0; j < 4; j = j + 1) begin
                // Pass A values horizontally
                tempA[i][j] <= cells[i][j].getA();
                tempB[i][j] <= cells[i][j].getB();
                tempC[i][j] <= cells[i][j].getC();
            end
        end
        datacollect <= True;
    endrule

    // Rule 2: Pass the stored `C` values to the next row
    rule putC_data (datacollect && bcheck);
        for (Integer i = 1; i < 4; i = i + 1) begin
            for (Integer j = 0; j < 4; j = j + 1) begin
                if (j > 0) begin
                    cells[i][j].putA(tempA[i][j-1]);
                end
                if (i > 0) begin
                    cells[i][j].putC(tempC[i-1][j]);
                    if (cycle < 4) begin
                    	cells[i][j].putB(tempB[i-1][j]);
                    end
                end   
            end
        end
    endrule
    
    method Action loadB(Vector#(4, Bit#(16)) b);
        // Load values into the first row
        if (cycle < 4) begin
            for (Integer j = 0; j < 4; j = j + 1) begin
                cells[0][j].putB(b[j]);
                cells[0][j].putC(0);
            end
        end
        cycle <= cycle + 1;
    endmethod
    
    method Action loadA(Vector#(4, Bit#(16)) a);
        // Load values into the first column
        for (Integer i = 0; i < 4; i = i + 1) begin
            cells[i][0].putA(a[i]);
        end
    endmethod
    
    method Action loadS(Bit#(1) s);
        // Set datatype for all cells
        for (Integer i = 0; i < 4; i = i + 1) begin
            for (Integer j = 0; j < 4; j = j + 1) begin
                cells[i][j].putS(s);
            end
        end
        initialized <= True;
    endmethod
    
    method Vector#(4, Vector#(4, Bit#(32))) getResult();
        Vector#(4, Vector#(4, Bit#(32))) result = newVector;
        for (Integer i = 0; i < 4; i = i + 1) begin
            for (Integer j = 0; j < 4; j = j + 1) begin
                result[i][j] = cells[i][j].getC();
            end
        end
        return result;
    endmethod
    
    method Bool isReady();
        return initialized && (cycle >= 7);
    endmethod
    
endmodule

endpackage


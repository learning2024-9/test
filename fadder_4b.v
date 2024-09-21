module fadder_4b(SUM,CARRY,CIN,A,B);
input CIN;
input [3:0] A,B;
output [3:0] SUM;
output CARRY;
wire c0,c1,c2;
fadder f0(SUM[0],c0,A[0],B[0],CIN),
        f1(SUM[1],c1,A[1],B[1],c0),
        f2(SUM[2],c2,A[2],B[2],c1),
        f3(SUM[3],c3,A[3],B[3],c2);

endmodule
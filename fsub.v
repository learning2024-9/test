module fsub(SUM,BORROW,A,B,C);
input A,B,C;
output SUM,BORROW;
wire net1,net2;
wire net3,net4,net5;

xor (net1,A,B);
xor (SUM,net1,C);

and (net2,B,C),
    (net3,~A,C),
    (net4,~A,B);
or (BORROW,net2,net3,net4);

endmodule
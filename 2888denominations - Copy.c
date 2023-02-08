#include<stdio.h>
void main()
{
  int C,H,S,K,L,M,N,O,P,Q,R,D,T,U,V,W,X,Y,Z,A,B;
  printf("enter C value\n");
  scanf("%d",&C);
  H=C/2000,S=C%2000;
  printf("2000 denominations is %d and remaining amount is %d\n",H,S);
  K=S/500,L=S%500;
  printf("500 denominations is %d and remaining amount is %d\n",K,L);
  M=L/200,N=L%200;
  printf("200 denominations is %d and remaining amount is %d\n",M,N);
  O=N/100,P=N%100;
  printf("100 denominations is %d and remaining amount is %d\n",O,P);
  Q=P/50,R=P%50;
  printf("50 denominations is %d and remaining amount is %d\n",Q,R);
  D=R/20,T=R%20;
  printf("20 denominations is %d and remaining amount is %d\n",D,T);
  U=T/10,V=T%10;
  printf("10 denominations is %d and remaining amount is %d\n",U,V);
  W=V/5,X=V%5;
  printf("5 denominations is %d and remaining amount is %d\n",W,X);
  Y=X/2,Z=X%2;
  printf("2 denominations is %d and remaining amount is %d\n",Y,Z);
  A=Z/1,B=Z%1;
  printf("1 denominations is %d and remaining amount is %d\n",A,B);
}

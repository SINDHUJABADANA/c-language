#include<stdio.h>
void main()
{
	int exp1,exp2,R,J,K;
	R=4,J=5,exp1=R<J,exp2=R==J;
	K=(exp1)&&(exp2);
	printf("result of (exp1)&&(exp2) is %d\n",K);
	K=(exp1)||(exp2);
	printf("result of (exp1)||(exp2) is %d\n",K);
	K=!(exp1);
	printf("result of !(exp1) is %d\n",K);
}

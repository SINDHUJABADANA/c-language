#include<stdio.h>
void main()
{
	int x1,x2,R;
	printf("enter 2 values to find bitwise AND\n");
	scanf("%d%d",&x1,&x2);
	printf("bitwise AND for x1 and x2 is %d\n",x1&x2);
	x1=6,x2=4;
	R=x1|x2;
	printf("result of bitwise OR for x1 and x2 is %d\n",R);
	printf("enter 2 values to find bitwise EX_OR\n");
	scanf("%d%d",&x1,&x2);
	printf("bitwise EX_OR for x1 and x2 is %d\n",x1^x2);
	printf("enter values to find bitwise TILLED\n");
	scanf("%d",&x1);
	printf("bitwise TILLED for x1 is %d\n",~x1);
}

#include<stdio.h>
void main()
{
	int x1,x2,R;
	printf("enter 2 values for arithmetic operations\n");
	printf("dont enter zero value\n");
	scanf("%d%d",&x1,&x2);
	R=x1+x2;
	printf("Addition result is %d\n",R);
	R=x1-x2;
	printf("Substraction result is %d\n",R);
	R=x1*x2;
	printf("Multiplication result is %d\n",R);
	R=x1/x2;
	printf("Division result is %d\n",R);
	R=x1%x2;
	printf("Modulo result is %d\n",R);
}

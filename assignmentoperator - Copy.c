#include<stdio.h>
void main()
{
	int x,y,z;
	x=2,y=4;
	z=x+y;
	printf("result of x+=y is %d\n",z);
	z=x-y;
	printf("result of x-=y is %d\n",z);
	z=x*y;
	printf("result of x*=y is %d\n",z);
	z=x/y;
	printf("result of x/=y is %d\n",z);
	z=x%y;
	printf("result of x mod y is %d\n",z);
}

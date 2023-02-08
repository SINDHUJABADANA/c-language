#include<stdio.h>
void main()
{
	int x1,x2,r;
	printf("enter 2 values\n");
	scanf("%d%d",&x1,&x2);
	r=(x1>x2)?x1:x2;
	printf("The largest number is %d\n",r);
}

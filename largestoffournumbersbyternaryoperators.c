#include<stdio.h>
void main()
{
	int a,b,c,d,r,r1,r2;
	printf("enter 4 values\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	r=(a>b)?a:b;
	printf("Largest among a and b is %d\n",r);
	r1=(r>c)?r:c;
	printf("Largest among r1 and c is %d\n",r1);
	r2=(r1>d)?r1:d;
	printf("Largest number is %d\n",r2);
}


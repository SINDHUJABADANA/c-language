#include<stdio.h>
void main()
{
	int a,b,c,largest;
	printf("enter 3 values for a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	largest=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("Largest among a,b and c is %d\n",largest);
}

#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int res=gcd(a,b);
	printf("GCD of %d and %d is %d",a,b,res);
}

/*call by
#include<stdio.h>
swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("x=%d y=%d\n",x,y);
}
void main()
{
	int a=20,b=30;
	swap(a,b);
	printf("a=%d b=%d",a,b);
}*/
/*#include<stdio.h>
swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("x=%d y=%d\n",*x,*y);
}
void main()
{
	int a=20,b=30;
	swap(&a,&b);
	printf("a=%d b=%d",a,b);
}*/
/*#include<stdio.h>
void increament(int a)
{
	a=a+1;
}
void main()
{
	int a=10;
	printf("a value before increament %d\n",a);
	increament(a);
	printf("a value after increament %d\n",a);
}*/
#include<stdio.h>
void increament(int *p)
{
	*p=*p+1;
}
void main()
{
	int a=10;
	int *p=&a;
	printf("a value before increament %d\n",a);
	increament(p);
	printf("a value after increament is %d\n",a);
}



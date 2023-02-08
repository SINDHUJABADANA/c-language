#include<stdio.h>
void main()
{
	int size;
	scanf("%d",&size);
	int arr[size],i,s1=0,s2=0;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
	if(i%2==0)
	{
	    s1=s1+arr[i];
   	}
	else
	{
		s2=s2+arr[i];
	}
	}
	printf("%d\n",s1);
	printf("%d\n",s2);
 }

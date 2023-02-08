/*#include<stdio.h>
int binary_search(int *arr,int n,int a)
{
    int l,m,h;
    l=0;
    h=n-1;
    while(l<=h)
    {
	   m=(l+h)/2;
       if(a==arr[m])
    	{
    		return 1;
		}
	   else if(a>arr[m])
		{
			l=m+1;
		}
	   else
		{
			h=m-1;
		}
	}
	if(l>h)
	{
	return 0;
    }
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a;
	scanf("%d",&a);
	if( binary_search(arr,n,a))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}*/


#include<stdio.h>
int binary_search(int *arr,int l,int h,int a)
{
    int m;
    if(l>h)
	{
	  return 0;
    }
    if(l<=h)
    {
	   m=(l+h)/2;
       if(a==arr[m])
    	{
    		return 1;
		}
	   else if(a>arr[m])
		{
			l=m+1;
		}
	   else
		{
			h=m-1;
		}
	}
	return binary_search(arr,l,h,a);
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a;
	scanf("%d",&a);
	if( binary_search(arr,0,n-1,a))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}




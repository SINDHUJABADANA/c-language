#include<stdio.h>
int binary_search(int *arr,int n,int se)
{
    int l,h=n-1,m;
    static int c=1;
	while(l<=h)
	{
		m=(l+h)/2;
		if(se==arr[m])
		{
			return c;
		}
		else if(se>arr[m])
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
		return -c;
	}	
}
int main()
{
	int n,res;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int se;
	scanf("%d",&se);
	res=binary_search(arr,n,se);
	if(res>0)
	{
		printf("%d True",res);
	}
	else
	{
		printf("%d False",-res);
	}
}

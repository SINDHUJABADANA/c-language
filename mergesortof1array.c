#include<stdio.h>
void merge_sort(int *arr,int n)
{
	int i,j,l,m,h,k;
	int a[100],b[100];
	l=0;h=n-1,m=(l+h)/2;
	for(i=l;i<=m;i++)
	{
	   a[k++]=arr[i];	
	}
	k=0;
	for(i=m+1;i<=h;i++)
    {
    	b[k++]=arr[i];
	}
	k=0;
	while(i<n/2 && j<n/2)
	{
	   if(arr[i]<brr[j])
	   {
	   	 res[k++]=a[i++];
	   }	
	   else
	   {
	   	res[k++]=b[j++];
	   }
	}
	while(i<n/2)
	{
		res[k++]=a[i++];
	}
	while(j<n/2)
	{
		res[k++]=b[j++];
	}
}
void main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

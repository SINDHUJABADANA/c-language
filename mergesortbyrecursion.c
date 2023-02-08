#include<stdio.h>
void merge(int *arr,int l,int m,int h)
{
	int i,j,n1,n2,a[100],b[100],k;
	n1=m-l+1;
	n2=h-m;
	k=l;
	for(i=0;i<n1;i++)
	{
		a[i]=arr[k++];
	}
	k=m+1;
	for(i=0;i<n2;i++)
    {
    	b[i]=arr[k++];
	}
	i=0,j=0;
	k=1;
	while(i<n1 && j<n2)
	{
		if(a[i]<b[j])
		{
			arr[k++]=a[i++];
		}
		else
		{
			arr[k++]=b[j++];
		}
	}
	while(i<n1)
	{
		arr[k++]=a[i++];
	}
	while(j<n2)
	{
		arr[k++]=b[j++];
	}
}
void merge_sort(int *arr,int H,int L)
{
  	int M;
  	if(L<H)
  	{
  	  M=(L+H)/2;
	  merge_sort(arr,L,M);
	  merge_sort(arr,M+1,H);
	  merge(arr,L,M,H);	
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
	merge_sort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

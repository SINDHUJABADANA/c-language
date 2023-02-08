#include<stdio.h>
void *merge_sort(int *arr,int n1,int *brr,int n2)
{
	int i=0,j=0,k=0;
	static int res[100];
	while(i<n1 && i<n2)
	{
	   if(arr[i]<brr[j])
	   {
	   	 res[k++]=arr[i++];
	   }	
	   else
	   {
	   	res[k++]=brr[j++];
	   }
	}
	while(i<n1)
	{
		res[k++]=arr[i++];
	}
	while(j<n2)
	{
		res[k++]=brr[j++];
	}
	return res;
}
int main()
{
	int n1,n2,arr[100],brr[100],i,j,*res;
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&n2);
	for(j=0;j<n2;j++)
	{
		scanf("%d",&brr[j]);
	}
	res=merge_sort(arr,n1,brr,n2);
	for(i=0;i<n1+n2;i++)
	{
		printf("%d ",res[i]);
	}
}

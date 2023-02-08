#include<stdio.h>
void insertion_sort(int *arr,int n)
{
	int temp,i,j;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j<n;j--)
		{
	      if(temp<arr[j])
	       {
	    	  arr[j+1]=arr[j];
		   }
		  else
		   {
			  arr[j+1]=temp;
			  break;
		   }
	    }
	}
	if(j==-1)
	{
		arr[0]=temp;
	}
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}


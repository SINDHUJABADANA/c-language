#include<stdio.h>
void bubble_sort(int *arr,int n)
{
	int i,j,p,temp,sc;
	for(p=1;p<n;p++)
	{  
	    sc=0;
		for(i=0;i<n-p;i++)
		{
			j=i+1;
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				sc++;
		   }
		}
		if(sc==0)
		{
			break;
		}
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
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}


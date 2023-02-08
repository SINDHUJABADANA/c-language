#include<stdio.h>
int maximum_element(int arr[],int size)
{
	int i,max=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;	
}
void main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
    int res=maximum_element(a,n);
	printf("%d",res);
}

/*#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	the array itself is a pointer which points the address of first element
	printf("%d\n",arr);
	printf("%d\n",*arr);
	printf("%d\n",arr+1);
	printf("%d\n",*(arr+1));
	printf("%d\n",arr+2);
	printf("%d\n",*(arr+2));
	printf("%d\n",arr+3);
	printf("%d\n",*(arr+3));
}*/

#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",arr+i);//&arr[i]==arr+i
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",*(arr+i));//arr[i]==*(arr+i)
	}
}

#include<stdio.h>
void main()
{
	//static memory allocation
	/*int arr[5];
	printf("%d\n",arr);*/
	
	
	//dynamic memory allocation using malloc
	/*int n=5;
	int *arr;
	arr=(int *)malloc(n*sizeof(int));
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",arr+i);
	}
	for(i=0;i<5;i++)
	{
		printf("%d %d\n", arr+i, *(arr+i));
	}*/
	
	
	int n=5;
	int *arr;
	arr=(int *)malloc(n*sizeof(int));
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",arr+i);
	}
	printf("after entering elements\n");
	for(i=0;i<5;i++)
	{
		printf("%d %d\n", arr+i, *(arr+i));
	}
	//free(pointer name)-free syntax
	free(arr);
	printf("after freeing the memory\n");
	for(i=0;i<5;i++)
	{
		printf("%d %d\n",arr+i, *(arr+i));
	}
}


#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100]={0};
	int i,j,ra,ca,rb,cb,k;
	printf("Enter row and column sizes for array");
	scanf("%d%d",&ra,&ca);
	printf("Enter values of matrices");
	for(i=0;i<ra;i++)
	{
		for(j=0;j<ca;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter row and column size of array");
	scanf("%d%d",&rb,&cb);
	printf("Enter values of matrices");
	for(i=0;i<rb;i++)
	{
		for(j=0;j<cb;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(ca==rb)
	{
		for(i=0;i<ra;i++)
		{
			for(j=0;j<cb;j++)
			{
				for(k=0;k<ca;k++)
				{
					c[i][j]+=a[i][j]*b[i][j];
				}
			}
		}
		for(i=0;i<ra;i++)
		{
			for(j=0;j<cb;j++)
			{
				printf("%d",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Multiplication is not possible");
	}
	return 0;
}

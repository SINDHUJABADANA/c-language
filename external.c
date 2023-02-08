#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100]={0};
	int i,j,k,ra,ca,rb,cb;
	printf("Enter ra and ca values\n");
	scanf("%d%d",&ra,&ca);
	printf("enter matrice values");
	for(i=0;i<ra;i++)
	{
		for(j=0;j<ca;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter rb and cb values\n");
	scanf("%d%d",&rb,&cb);
	printf("enter matrice values");
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
		printf("multiplication is not possible");
	}
}

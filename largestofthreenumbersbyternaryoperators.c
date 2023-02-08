#include<stdio.h>
void main()
{
	int x,y,z,r,r1;
	printf("enter 3 values\n");
	scanf("%d%d%d",&x,&y,&z);
	r=(x>y)?x:y;
	printf("Largest among x and y is %d\n",r);
	r1=(r>z)?r:z;
	printf("Largest among r and z is %d\n",r1);
}

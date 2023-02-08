#include<stdio.h>
void main()
{
  int x,y,z;
  printf("enter x,y and z values\n ");
  scanf("%d%d%d",&x,&y,&z);
  if(x>y&&x>z)
  {
  	printf("%d is the largest number\n",x);
  }
  else if(y>x&&y>z)
  {
  	printf("%d is the largest number\n",y);
  }
  else
  {
  	printf("z is the largest number\n");
  }
}

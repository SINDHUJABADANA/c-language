#include<stdio.h>
void main()
{
  int x;
  printf("enter x value\n");
  scanf("%d",&x);
  if(x==1)
  {
  	printf("day is monday\n");
  }
  else if(x==2)
  {
  	printf("day is tuesday\n");
  }
  else if(x==3)
  {
  	printf("day is wednesday\n");
  }
  else if(x==4)
  {
  	printf("day is thursday\n");
  }
  else if(x==5)
  {
  	printf("day is friday\n");
  }
  else if(x==6)
  {
  	printf("day is saturday\n");
  }
  else if(x==7)
  {
  	printf("day is sunday\n");
  }
  else
  {
  	printf("invalid input\n");
  }
}

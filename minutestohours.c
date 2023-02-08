#include<stdio.h>
void main()
{
  int x,h,k;
  printf("enter minute value\n");
  scanf("%d",&x);
  h=x/60,k=x%60;
  printf("x is %d hour(s) and %d minute(s)\n",h,k);
}

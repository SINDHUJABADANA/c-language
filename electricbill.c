#include<stdio.h>
void main()
{
  int z;
  float c,a,s;
  printf("enter z value\n");
  scanf("%d",&z);
  if(z>=199)
  {
  	printf("c is 1.20\n");
  	a=z*1.20;
  	printf("a is %f\n",a);
  }
  else if(z>=200&&z<=400)
  {
  	printf("c is 1.50\n");
  	a=z*1.50;
  	printf("a is %f\n",a);
  }
  else if (z>=400&&z<=600)
  {
  	printf("c is 2\n");
  	a=z*2;
  	printf("a is %f\n",a);
  }
  if(a>=400)
  {
  	s=(15*a)/100;
  	printf("s is %f\n",s);
  }
  else
  {
  	printf("s is 0\n");
  }
}

#include<stdio.h>
void main()
{
  int z;
  printf("enter z value\n");
  scanf("%d",&z);
  if(z>=80&&z<=100)
  {
  	printf("O grade\n");
  }
  else if(z>=70&&z<80)
  {
  	printf("A grade\n");
  }
  else if(z>=60&&z<70)
  {
  	printf("B grade\n");
  }
  else if(z>=50&&z<60)
  {
  	printf("C grade\n");
  }
  else if(z>=35&&z<50)
  {
  	printf("D grade\n");
  }
  else if(z<35)
  {
  	printf("FAIL\n");
  }
  else
  {
  	printf("invalid input\n");
  }
}

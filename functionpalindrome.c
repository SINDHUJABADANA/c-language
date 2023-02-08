#include<stdio.h>
int reverse(int num)
{
   int rem,rev=0;
   while(num>0)
   {
       rem=num%10;
       rev=rev*10+rem;
       num=num/10;
   }
   return rev;
}
void test()
{    
    int n;
    scanf("%d",&n);
    if(n == reverse(n))
    {
      printf("True\n");
    }
    else
    {
      printf("False\n");
    }
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        test();
    }
}

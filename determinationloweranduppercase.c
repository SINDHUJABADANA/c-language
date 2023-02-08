#include<stdio.h>
void main()
{
	char ch;
	scanf("%c",&ch);
	if(ch >='a' && ch <='z')
	 printf("Lower case character");
	else if(ch >='A'&& ch <='Z')
	 printf("Upper case character");
	else
	 printf("Digit");	 
}

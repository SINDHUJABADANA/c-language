#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,len;
	printf("Enter a string");
	scanf("%s",&str);
	len=strlen(str);
	printf("The characters of string in reverse order\n");
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
}

#include<stdio.h>
void main()
{
	char str[100];
	scanf("%s",str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&& str[i]<='Z')
		  str[i]+=32;
	}
	printf("modifide:%s\n",str);
}

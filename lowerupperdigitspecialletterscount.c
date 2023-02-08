#include<stdio.h>
void main()
{
	char str[100];
	scanf("%s",str);
	int i,cl=0,cu=0,cd=0,cs=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&& str[i]<='z')
		  cl++;
	    else if(str[i]>='A'&& str[i]<='Z')
	      cu++;
	    else if(str[i]>= '0' && str[i]<='9')
	      cd++;
	    else
	      cs++;
	}
	printf("lower case count is %d\n",cl++);
	printf("upper case count is %d\n",cu++);
	printf("digits count is %d\n",cd++);
	printf("special characters count is %d\n",cs++);
}

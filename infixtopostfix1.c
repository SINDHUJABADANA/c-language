#include<stdio.h>
#include<string.h>
char pf[100],st[100];
int top=-1;
int isoper(char ch)
{
	switch(ch)
	{
		case '+':
			return 1;
		case '-':
			return 1;
		case '*':
			return 2;
		case '/':
			return 2;
		default:
			return 0;
	}
}
char *infix_to_postfix(char *infix)
{
	int i,k=0;
	for(i=0;infix[i]!='\0';i++)
	{
		if(isoper(infix[i]))
		{
			if(top==-1)
			{
				st[++top]=infix[i];
			}
			else 
			{
				while(1)
				{
					if(top==-1)
					{
						st[++top]=infix[i];
						break;
					}
					if(isoper(infix[i])<=isoper(st[top]))
					{
						op=st[top--];
						pf[k++]=op;
					}
					else
					{
						st[++top]=infix[i];
					}
				}
			}
		}
		else
		{
			//operand
			pf[k++]=infix[i];
		}
	}
	for(i=top;i>=0;i--)
	{
		
	}
	return pf
}
void main()
{
	char infix[100],st[100],pf[100];
	int i,top=-1;
	scanf("%[^\n]s",infix);
	strcpy(pf,infix_to_postfix(infix));
	printf("%s",pf);
}

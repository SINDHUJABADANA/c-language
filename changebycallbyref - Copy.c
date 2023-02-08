#include<stdio.h>
void change(int *arr)
{
	arr[0]=123;
}
void main()
{
	int arr[5]={10,20,30,40,50};
	printf("arr[0] before chang %d\n",*(arr+0));//arr[0]=*(arr+0)
	change(arr);//call by reference
	printf("arr[0] after change %d\n",*(arr+0));
}

/*#include<stdio.h>
void main()
{
int a=1031;
int *p=&a;
char *q=&a;
printf("%d\n", p);
printf("%d\n", q);
printf("%d\n",*p);
printf("%d\n",*q);
}*/


/*VOID POINTER IN C
VOID POINTER IN C IS A POINTER,WHICH CAN POINT TO ANY TYPE OF DATA.VOID POINTERS MUST 
BE TYPECASTED INTO APPROPRIATE TYPES BEFORE DEREFERENCING.
#include<stdio.h>
void main()
{
int a=10;
char ch='z';
int  *p,*q;
p=&a;
q=&ch;
printf("%d\n", p);
printf("%d\n", q);
printf("%d\n",*(int *)p);
printf("%c\n",*(char *)q);
}*/

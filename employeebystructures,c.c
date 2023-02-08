#include<stdio.h>
struct employee 
{
	int id;
	char name[20];
	int year_of_joining;
	int salary;
	char gender[20];	
};
/*int main()
{
	struct employee  e1={572, "A.sandeep", 2000,30000,"male"};
	struct employee  e2={573, "A.swapna", 2003,27000,"female"};
	struct employee  e3={574, "B.sindhuja", 2004,26000,"female"};
	struct employee  e4={575, "S.yamini", 2003,35000,"female"};
	printf("ID\tNAME\t\tYEAR_OF_JOINING\t\tSALARY\t\tGENDER\n");
	printf("--------------------------------------------------------------------------\n");
	printf("%d\t%s\t\t%d\t\t%d\t\t%s\n",e1.id,e1.name,e1.year_of_joining,e1.salary,e1.gender);
	printf("%d\t%s\t\t%d\t\t%d\t\t%s\n",e2.id,e2.name,e2.year_of_joining,e2.salary,e2.gender);
	printf("%d\t%s\t\t%d\t\t%d\t\t%s\n",e3.id,e3.name,e3.year_of_joining,e3.salary,e3.gender);
	printf("%d\t%s\t\t%d\t\t%d\t\t%s\n",e4.id,e4.name,e4.year_of_joining,e4.salary,e4.gender);	
}*/
int  main()
{
 int n;
 printf("how many employees data you want:");
 scanf("%d",&n);
 //array of structures
 struct employee e[n];
 int i;
 for(i=0;i<n;i++)
 {
 printf("enter emp id\n");
 scanf("%d",&e[i].id);
 printf("enter emp name\n");
 scanf("%s",e[i].name);
 printf("enter emp year_of_joining\n");
 scanf("%d", &e[i].year_of_joining);
 printf("enter emp salary\n");
 scanf("%d",&e[i].salary);
 printf("enter emp gender\n");
 scanf("%s", e[i].gender);
}
 printf("ID\tNAME\t\tYEAR_OF_JOINING\t\tSALARY\t\tGENDER\n");
 printf("--------------------------------------------------------------------------\n");
 for(i=0;i<n;i++)
 {
 printf("%d\t%s\t\t%d\t\t%d\t\t%s\n",e[i].id,e[i].name,e[i].year_of_joining,e[i].salary,e[i].gender);
 }
}



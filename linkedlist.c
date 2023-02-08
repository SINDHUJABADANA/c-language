/*node:is a block which contains two parts
1.data
2.address of next node
linked list=collection of nodes
node->data
node->add
head=address of first node
if head==null---->that means no nodes in the list*/
#include<stdio.h>
struct Node
{
	int data;
	struct Node *add;
};
typedef struct Node NODE;
NODE *Head=NULL;
void insert(int data)
{
	NODE *NN ,*temp;
	NN=(NODE*)malloc(sizeof(NODE));
	NN->data=data;
	NN->add=NULL;
	if(Head==NULL)
	{
		Head=NN;
	}
	else
	{
		temp=Head;
		while(temp->add!=NULL)
		{
			temp=temp->add;
		}
		temp->add=NN;
	}
}
void display()
{
	NODE *temp;
	if(Head==NULL)
	{
		printf("NO NODES\n");
	}
	else
	{
		temp=Head;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->add;
		}
		printf("\n ");
	}
}
int delete()
{
	int val;
	NODE *temp;;\
	if(Head==NULL)
	{
		return -1;
	}
	else if(Head->add==NULL)
	{
		val=Head->data;
		Head=NULL;
		return val;
	}
	else
	{
		temp=Head;
		while(temp->add->data)
		{
			temp=temp->add;
		}
		val=temp->add->data;
		temp->add=NULL;
		return val;
	}
}
void main()
{
	int ch,data;
	while(1)
	{
		printf("1.insert 2.delete 3.display 4.exit");
		scanf("%d",&ch);
		if(ch==1)
		{
			scanf("%d",&data);
			insert(data);
		}
		else if(ch==2)
		{
		    data=delete();
			printf("%d",data);
			if(data==-1)
			{
			   printf("no nodes");	
			}	
			else
			{
				printf("%d",data);
			}
		}
		else if(ch==3)
		{
			display();
		}
		else
		{
			break;
		}
	}
}


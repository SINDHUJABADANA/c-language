#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *add;
};
typedef struct Node NODE;

NODE *Head=NULL;

void insert_end(int data)
{
	NODE *NN,*temp;
	NN=(NODE *)malloc(sizeof(NODE));
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

int Delete_end()
{
	int val;
	NODE *temp;
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
		while(temp->add->add)
		{
			temp=temp->add;
		}
		val=temp->add->data;
		temp->add=NULL;
		return val;
	}
}

void insert_head(int data)
{
	NODE *NN;
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=data;
	NN->add=NULL;
	if(Head==NULL)
	{
		Head=NN;
	}
	else
	{
		NN->add=Head;
		Head=NN;
	}
}

int Delete_head()
{
	int val;
	NODE *NN;
	if(Head==NULL)
	{
		return -1;
	}
	else
	{
		val=Head->data;
		NN=Head->add;
		Head->add=NULL;
		Head=NN;
		return val;
	}
}
void insert_position(int data,int pos)
{
	NODE *NN,*temp;
	int i,f=0;
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=data;
	NN->add=NULL;
	if(Head==NULL)
	{
		Head=NN;
	}
	else if(pos==1)
	{
		insert_head(data);
	}
	else
	{
	    temp=Head;	
		for(i=1;i<pos-1;i++)
		{
			temp=temp->add;
			if(temp->add==NULL)
			{
				temp->add=NN;
				f=1;
				break;
			}
		}
		if(f==0)
		{
			NN->add=temp->add;
			temp->add=NN;
		}
	}
}
int delete_position(int pos)
{
	int i=1,cn=1,val;
	NODE *temp=Head;
	while(temp)
	{
	   temp=temp->add;
	   cn++;	
	}
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
	else if(pos==1)
	{
		val=Delete_head();
		return val;
	}
	else if(pos>cn)
	{
		val=Delete_end();
		return val;
	}
	else 
	{
		temp=Head;
		for(i=1;i=pos-1;i++)
		{
			temp=temp->add;
		}
		val=temp->add->data;
		temp->add=temp->add->add;
		return val;
	}
}
void display()
{
	NODE *temp;
	if(Head==NULL)
	{
		printf("No Nodes\n");
	}
	else
	{
		temp=Head;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->add;
		}
		printf("\n");
	}
}

void main()
{
	int ch,data=-1,pos;
	while(1)
	{
		printf("1.Insert at End 2.Delete at End 3.Insert at head 4.Delete at head 5.display 6.Insert at position 7.Delete at position 8.Exit");
		scanf("%d",&ch);
		if(ch==1)
		{
			//Insert Data
			scanf("%d",&data);
			insert_end(data);
		}
		else if(ch==2)
		{
			//Delete Data
			data=Delete_end();
			if(data==-1)
			{
				printf("No Nodes\n");
			}
			else
			{
				printf("%d ",data);
			}
		}
		else if(ch==3)
		{
			//insert at head
			scanf("%d",&data);
			insert_head(data);
		}
		else if(ch==4)
		{
			//delete at head
			data=Delete_head();
			if(data==-1)
			{
				printf("No Nodes\n");
			}
			else
			{
				printf("%d\n",data);
			}
		}
		else if(ch==5)
		{
			//Display Data
			display();
		}
		else if(ch==6)
		{
			scanf("%d%d",&data,&pos);
			insert_position(data,pos);
		}
		else if(ch==7)
		{
			scanf("%d",&pos);
			data=delete_position(pos);
			if(data==-1)
			{
				printf("NO NODES");
			}
			else
			{
				printf("%d\n",data);
			}
		}
		else
		{
			break;
		}
	}
}

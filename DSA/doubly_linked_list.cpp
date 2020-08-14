//linked list
///self-referential structure: it is pointing to the same type of node which is having the structure as per the declaration
//1. singly linked list-->last node points to NULL
//3. circular linked list-->last node points to first node
//syntax: struct node{int data; struct node *next;}*START=NULL;

//2. doubly linked list-->first node's first and last node's 3rd part points to NULL. Second part is for data.
//4. doubly circular linked list-->first node's first points last node's 3rd part and vice versa.
//syntax: struct node{int data; struct node *prev; struct node *next;}*START=NULL;
#include<stdio.h>
#include<stdlib.h>
//to declare the structure for singly linked list
struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*START=NULL;

void createlist(int);
void display(void);
void addbeg(int);
void addspec(int, int);
int main()
{
	int num,ch,pos;
	do
	{
		printf("\n1. Create list");
		printf("\n2. Display");
		printf("\n3. Exit");
		printf("\n4. Add in begining");
		printf("\n5. Add at a position");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter value: ");
				scanf("%d",&num);
				createlist(num);
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
			case 4:
				printf("Enter value: ");
				scanf("%d",&num);
				addbeg(num);
				break;
			case 5:
				printf("Enter value: ");
				scanf("%d",&num);
				printf("Enter position");
				scanf("%d",&pos);
				addspec(num,pos);
				break;
			default:
				printf("Enter correct choice");
		}
	}while(1);
	return 0;
}

void createlist(int num)
{
	struct node *p, *temp;
	//for first node
	if(START==NULL)
	{
		START=(struct node*)malloc(sizeof(struct node));
		START->data = num;
		START->next = NULL;
		START->prev = NULL;
	}
	else
	{
		p = START;
		//traverse the list till the end
		while(p->next!=NULL)
			p = p->next;
			
		//add new node at the end of the list
		temp = (struct node*)malloc(sizeof(struct node));
		temp->data = num;
		temp->next = NULL;
		p->next= temp;
		temp->prev = p;
		
	}
}

void addbeg(int num)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = START;
	START->prev = temp; //temp->next->prev = temp;
	temp->prev = NULL;
	START= temp;
}

void display()
{
	struct node *p;
	p=START;
	if(p==NULL)
	{
		printf("list is empty");
	}
	else
	{
	
		printf("Doubly linked list elements\n");
		do
		{
			printf("%d\t",p->data);
			p = p->next;
		}while(p!=NULL);
	}
}

void addspec(int num, int pos)
{
	struct node *p = START, *temp;
	int i;
	for(i=1;i<pos-1;i++)
		p=p->next;
	
	//add new node
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = p->next;
	temp->prev = p;
	p->next->prev= temp;
	p->next= temp;
	
	
}

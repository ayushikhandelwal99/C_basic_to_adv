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
		START->next = START;
		START->prev = START;
	}
	else
	{
		p = START;
		//traverse the list till the end
		while(p->next!=START)
			p = p->next;
			
		//add new node at the end of the list
		temp = (struct node*)malloc(sizeof(struct node));
		temp->data = num;
		temp->next = START;
		p->next= temp;
		temp->prev = p;
		START->prev = temp;
	}
}

void addbeg(int num)
{
	struct node *temp, *p= START;
	while(p->next!=START)
		p = p->next;
		
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = START;
	p->next=temp;
	START->prev = temp;
	temp->prev =p;
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
	
		printf("Doubly Circular linked list elements\n");
		do
		{
			printf("%d\t",p->data);
			p = p->next;
		}while(p!=START);
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
	temp->next->prev = temp;
	temp->prev = p;
	p->next= temp;
}

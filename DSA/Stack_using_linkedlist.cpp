#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*TOP = NULL;

void push(int);
void pop(void);
void peek(void);
void display(void);
void search(int);

int main()
{
	int num, ch;
	do
	{
		printf("\n1. Push Operation");
		printf("\n2. Pop Operation");
		printf("\n3. Peek Operation");
		printf("\n4. Display Operation");
		printf("\n5. Exit");
		printf("\n6. Search an element");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter a number");
				scanf("%d",&num);
				push(num);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			case 6:
				printf("Enter an element to search:");
				scanf("%d",&num);
				search(num);
				break;
			default:
				printf("\nEnter correct choice");
		}
	}while(1);
}

void push(int num)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = TOP;
	TOP = temp;
}

void pop()
{
	struct node *q = TOP;
	if(TOP==NULL)
	{
		printf("Stack Empty");
	}
	else
	{
		printf("Popped element: %d",q->data);
		TOP = TOP->next;
		free(q);
	}
}

void peek()
{
	if(TOP == NULL)
	{
		printf("Stack empty");
		return;
	}
	else
	{
		printf("Peek element: %d",TOP->data);
	}
}

void display(void)
{
	struct node *p = TOP;
	if(TOP == NULL)
	{
		printf("Stack empty");
		return;
	}
	else
	{
		do
		{
			printf("%d\t",p->data);
			p = p->next;
		}while(p!=NULL);
	}
	
}

void search(int num)
{

}

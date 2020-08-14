#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*FRONT=NULL,*REAR=NULL;

void qinsert(int);
void qdelete(void);
void qdisplay(void);

int main()
{
	int ch, num;
	do
	{
		printf("\n1. Queue Insert");
		printf("\n2. Queue Delete");
		printf("\n3. Queue Display");
		printf("\n4. Exit");
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter any number");
				scanf("%d",&num);
				qinsert(num);
				break;
			case 2:
				qdelete();
				break;
			case 3:
				qdisplay();
				break;
			case 4:
				exit(0);
			display:
				printf("Invalid");
		}
	}while(1);
	return 0;
}
void qinsert(int num)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data=num;
	temp->next=NULL;
	if(FRONT==NULL)
	{
		FRONT = REAR =temp;
	}
	else
	{
		REAR->next = temp;
	}
	REAR=temp;
}

void qdelete()
{
	struct node *q=FRONT;
	if(FRONT==NULL)
	{
		printf("Queue Empty");
		return;
	}
	else
	{
		printf("Deleted Element: %d",q->data);
		FRONT=FRONT->next;
		free(q);
	}
}
void qdisplay()
{
	struct node *q=FRONT;
	printf("Elements of Queue");
	do
	{
		printf("%d\t",q->data);
		q=q->next;
	}while(q!=NULL);
}

//queue
//it is a data structure which works on FIFO  or LIFO
//int FRONT=-1; if you delete from the queue FRONT increments
//int REAR=-1; if you add in queue REAR increments
//ine QUEUE[MAX];
//if FRONT=-1, ==> queue is empty
//if FRONT==0 && REAR=MAX-1  ==> queue is full
//if FRONT==REAR ==> queue is having at most 1 element

//OPERATIONS
//1. queue insert
//2. queue delete
//3. queue display

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int FRONT=-1, REAR=-1;
int QUEUE[MAX];

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
}
void qinsert(int num)
{
	if(FRONT==0 && REAR==MAX-1)
	{
		printf("Queue is full");
		return;
	}
	else if(FRONT==-1)
	{
		FRONT=0;
		REAR=0;
	}
	else
	{
		REAR=REAR+1;
	}
	QUEUE[REAR]=num;
}

void qdelete()
{
	if(FRONT==-1)
	{
		printf("Queue is Empty");
		return;
	}
	else if(FRONT==REAR)
	{
		printf("Element deleted: %d",QUEUE[FRONT]);
		FRONT=REAR=-1;
	}
	else
	{
		printf("Element deleted: %d",QUEUE[FRONT]);
		FRONT=FRONT+1;
	}
}
void qdisplay()
{
	int i;
	printf("Elements of Queue: ");
	for(i=FRONT;i<=REAR;i++)
	{
		printf("%d\t",QUEUE[i]);
	}
}

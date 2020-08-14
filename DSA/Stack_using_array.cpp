//STACK

//it is the data structure which works on FIFO or LIFO
//all recursive functions are solved by using stack.
//int TOP=-1;  this is the global variable ehich indicates the TOP of the STACK.

//operations with STACK and their algo
//1. push operation--> to insert a new element at the top of the stack  
//## to check whether the stack is full or not if(TOP==MAX-1)t then print: "stack overflow"
//## to increment TOP = TOP + 1
//## to store element at the TOP location of the stack STACK[TOP]=num
//## return

//2. pop operation--> to remove an element from top of stack  TOP = TOP -1
//## to check whether the stack is empty or not if(TOP==-1) then print: "stack underflow"
//## to get the number from top of stack  num=STACK[TOP] and print it
//## to decrement TOP by 1   TOP=TOP-1
//## return

//3. display operation--> to print the elements from TOP to BOTTOM
//4. peek operation--> to print the topmost element of the STACK
//5. empty operation--> to check the stack is empty or not
//6. search operation--> to find the element is present or not in the stack

//problems
//1. overflow--> when you add a new element in the full stack
//2. underflow--> when you want to delete an element after the stack is empty

//implementation of stack
//1. using ARRAY
//2. using LINKEDLIST

//Stack using Array
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int TOP=-1;
int STACK[MAX];

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
	if(TOP == MAX-1)
	{
		printf("Stack Overflow");
		return;
	}
	else
	{
		TOP = TOP+1;
		STACK[TOP] = num;
	}
}

void pop()
{
	if(TOP == -1)
	{
		printf("Stack Underflow");
		return;
	}
	else
	{
		printf("Popped element: %d",STACK[TOP]);
		TOP = TOP-1;
	}
}

void peek()
{
	if(TOP == -1)
	{
		printf("Stack empty");
		return;
	}
	else
	{
		printf("Peek element: %d",STACK[TOP]);
	}
}

void display()
{
	int i;
	if(TOP == -1)
	{
		printf("Stack empty");
		return;
	}
	else
	{
		for(i=TOP;i>=0;i--)
		{
			printf("%d\t",STACK[i]);
		}
	}
	
}

void search(int num)
{
	int i, pos, flag=0;
	if(TOP == -1)
	{
		printf("Stack empty");
		return;
	}
	else
	{
		for(i=TOP; i>=0; i--)
		{
			if(STACK[i]==num)
			{
				flag =1;
				pos = i;
				break;
			}
		}
		if(flag==1)
			printf("Element found at position %d",pos);
		else
			printf("Element not found");
	}
}


















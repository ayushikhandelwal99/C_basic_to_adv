#include<iostream>
using namespace std;
class STACK
{
	private:
		struct node
		{
			int data;
			node *next;
		}*TOP = NULL;
	public:
		STACK()
		{
			TOP = NULL;
		}
		void push(int);
		void pop(void);
		void peek(void);
		void display(void);
		void search(int);
};
void STACK::push(int num)
{
	node *temp;
	temp = new node;
	temp->data = num;
	temp->next = TOP;
	TOP = temp;
}
void STACK::pop()
{
	node *q = TOP;
	if(TOP==NULL)
	{
		cout<<"Stack Empty";
	}
	else
	{
		cout<<"Popped element: "<<q->data;
		TOP = TOP->next;
		delete q;
	}
}
void STACK::peek()
{
	if(TOP == NULL)
	{
		cout<<"Stack empty";
		return;
	}
	else
	{
		cout<<"Peek element: "<<TOP->data;
	}
}
void STACK::display()
{
	node *p = TOP;
	if(TOP == NULL)
	{
		cout<<"Stack empty";
		return;
	}
	else
	{
		do
		{
			cout<<p->data<<"\t";
			p = p->next;
		}while(p!=NULL);
	}
}
void STACK::search(int num)
{
	
}
int main()
{
	int num, ch;
	STACK obj;
	do
	{
		cout<<"\n1. Push Operation";
		cout<<"\n2. Pop Operation";
		cout<<"\n3. Peek Operation";
		cout<<"\n4. Display Operation";
		cout<<"\n5. Exit";
		cout<<"\n6. Search an element";
		cout<<"\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter a number";
				cin>>num;
				obj.push(num);
				break;
			case 2:
				obj.pop();
				break;
			case 3:
				obj.peek();
				break;
			case 4:
				obj.display();
				break;
			case 5:
				exit(0);
			case 6:
				cout<<"Enter an element to search:";
				cin>>num;
				obj.search(num);
				break;
			default:
				cout<<"\nEnter correct choice";
		}
	}while(1);
	return 0;
}


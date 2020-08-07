#include<iostream>
using namespace std;
void add(void);
int sub(void);
void rem(int,int);
int mul(int,int);
int main()
{
	int a,b;
	cin>>a>>b;
	add();
	cout<<"\nsub"<<sub()<<endl;
	cout<<"mul"<<mul(a,b)<<endl;
	rem(a,b);
	return 0;
}

void add()
{
	int a=21,b=44;
	cout<<a+b;
}
int sub()
{
	int a=76,b=60;
	return a-b;
}
void rem(int a,int b)
{
	cout<<a/b;
}
int mul(int a, int b)
{
	return a*b;
}

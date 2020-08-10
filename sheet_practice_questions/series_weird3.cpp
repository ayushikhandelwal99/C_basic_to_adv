#include<iostream>
using namespace std;

int main() {
	for(int i=1;i<=10;i++)
	{
		if(i%2==0)
		cout<<"-"<<i<<"\t";
		else
		cout<<i<<"\t";
	}
	cout<<"\n";
	for(int i=1;i<=10;i++)
	{
		if(i%2==0)
		cout<<i<<"\t";
		else
		cout<<"-"<<i<<"\t";
	}
	cout<<"\n";
	for(int i=1;i<=10;i++)
	{
		cout<<i*i<<"\t";
	}
	return 0;
}

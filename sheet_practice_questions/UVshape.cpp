#include<iostream>
using namespace std;
float sdjhsg(int a,float b);
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int count=1;
		for(int j=0;j<i;j++)
		{
			cout<<count;
			count++;
		}
		for(int j=n-1;j>i;j--)
		{
			cout<<"  ";
		}
		for(int j=0;j<i;j++)
		{
			count--;
			cout<<count;
		}
		cout<<"\n";
	}
}

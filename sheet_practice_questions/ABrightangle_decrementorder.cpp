#include<iostream>
using namespace std;
int main()
{
	char ch='A';
	int n;
	cin>>n;
	for(int i=0; i<n;i++)
	{
		ch='A'+i;
		for(int j=n-1;j>i;j--)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
			cout<<ch;
			ch--;
		}
		cout<<"\n";
	}
	return 0;
}

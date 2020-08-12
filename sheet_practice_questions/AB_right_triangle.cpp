#include<iostream>
using namespace std;
int main()
{
	int s,i,j;
	char ch;
	cin>>s;
	for(i=1;i<=s;i++)
	{
		ch='A';
		for(j=1;j<=i;j++)
		{
			cout<<ch;
			ch++;
		}
		cout<<"\n";
	}
	return 0;
}

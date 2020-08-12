#include<iostream>
#include<stdio.h>
using namespace std;
void pyramid(int line)
{
	int i, j, s, t;
	char ch;
	t=line;
	for(i=1;i<=line;i++)
	{
		ch='A';
		for(j=1;j<=i;j++)
		{
			cout<<ch;
			ch++;
		}
		for (s = 1; s <= t*2-2; s++) 
      	printf(" ");
      	ch--;
      	
      	for(j=j-2;j>=0;j--)
      	{
      		cout<<ch;
      		ch--;
		}
		t--;
		cout<<"\n";
	}
	t=1;
	for(i=line-1;i>=1;i--)
	{
		ch='A';
		for(j=1;j<=i;j++)
		{
			cout<<ch;
			ch++;
		}
		for (s= 1; s<=t*2;s++) 
      	printf(" ");
      	ch--;
      	
      	for(j=j-2;j>=0;j--)
      	{
      		cout<<ch;
      		ch--;
		}
		t++;
		cout<<"\n";
	}
}
int main()
{
	int c;
	cin>>c;
	pyramid(c);
	return 0;
	
}

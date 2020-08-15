#include<iostream>
using namespace std;
int main()
{
	int num,r,reverse=0;
	cin>>num;
	while(num>0)
	{
		r=num%10;
		reverse=reverse*10+r;
		num/=10;
	}
	cout<<reverse;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	loop: 
	int sum=0;
	while(n>0)
	{
		int b;
		b=n % 10;
		sum=sum+b;
		n/=10;
	}
	
	if(sum>9)
	{
		n=sum;
		goto loop;
	}
	
	cout<<sum;
	return 0;
}

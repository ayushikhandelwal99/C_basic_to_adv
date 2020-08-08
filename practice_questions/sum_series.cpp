#include<iostream>
using namespace std;
int fact(int a)
{
	int num=1;
	while(a>0)
	{
		num=num*a;
		a--;
	}
	return num;
}
int main()
{
	int n;
	float sum=0.0;
	cin>>n;
	while(n>=1)
	{
		float b=fact(n);
		sum+=1/b;
		n--;
	}
	cout<<sum;
}

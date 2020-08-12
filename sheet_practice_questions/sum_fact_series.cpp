#include<iostream>
using namespace std;
float fact(int n)
{
	float num;
	if(n==0 | n==1)
	return 1;
	num=n*fact(n-1);
	return  num;
}
float sum(int a)
{
	float sumfact=0;
	for(int i=a;i>=0;i--)
	sumfact+=1/fact(i);
	
	return sumfact;
}
int main()
{
	int c;
	cin>>c;
	cout<<sum(c);
	return 0;
}

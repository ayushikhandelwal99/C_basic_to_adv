#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	a=a^b^c;
	b=a^b^c;
	c=a^b^c;
	a=a^b^c;
	
	cout<<a<<"\t"<<b<<"\t"<<c;
	return 0;
}

#include<iostream>
using namespace std;
int stringcount(int n,int lastdigit)
{
	if(n==0)
	return 0;
	if(n==1)
	{
		if(lastdigit==0)
		return 2;
		else 
		return 1;
	}
	if(lastdigit==0)
	return stringcount(n-1,0)+stringcount(n-1,1);
	else
	return stringcount(n-1,0);
}
int main()
{
	int n;
	cin>>n;
	cout<<stringcount(n,0);
}

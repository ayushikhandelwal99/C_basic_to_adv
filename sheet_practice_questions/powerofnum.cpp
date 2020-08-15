#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int num,power,res=1;
	cin>>num>>power;
	if(power==0)
	{
		cout<<"1";
		exit(0);
	}
		
	while(power>=1)
	{
		res=res*num;
		power--;
	}
	cout<<res;
	return 0;
}

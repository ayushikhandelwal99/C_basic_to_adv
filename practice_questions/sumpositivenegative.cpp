#include<iostream>
using namespace std;
int main()
{
	int a[10],sp=0,sn=0,cp=0,cn=0;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<10;i++)
	{
		if(a[i]>=0)
		{
			sp+=a[i];
			cp++;
		}
		else
		{
			sn+=a[i];
			cn++;
		}
	}
	cout<<"sum of positive "<<sp;
	cout<<"\nsum of negative "<<sn;
	cout<<"\ncount positive "<<cp;
	cout<<"\ncount negative "<<cn;
	return 0;
}

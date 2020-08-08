#include<iostream>
using namespace std;
int main()
{
	int a[11];
	
	a[1]=0;
	a[2]=1;
	
	for(int i=3;i<11;i++)
	a[i]=a[i-1]+a[i-2];
	
	int k=1;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<a[k]<<"\t";
			k++;
		}
		cout<<"\n";
	}
}

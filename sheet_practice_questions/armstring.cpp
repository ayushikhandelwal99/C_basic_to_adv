#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=1,sum=0,num,digit;
	int r;
	while(i<=50000)
	{
		num=i;
		digit=int(log10(i)+1);
		while(num>0)
		{
			r=num%10;
			num=num/10;
			if(digit<3)
			sum+=r*r*r;
			else
			sum=sum+pow(r,digit);
		}
		if(sum==i)
		cout<<i<<"\t";
		i++;
		sum=0;
	}
}

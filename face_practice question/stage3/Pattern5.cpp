#include<iostream>
using namespace std;
int main()
{
  int num,c=1,d,f;
  cin>>num;
  d=num*num+1;
  for(int i=1;i<=num;i++)
  {
  	for(int j=1;j<i;j++)
  	{
  		cout<<"--";
	  }
    for(int j=num;j>=i;j--)
    {
      cout<<c;
      c++;
      if(j!=i)
        cout<<"*";
    } 
    f=d;
    for(int j=num;j>=i;j--)
    {
    	if(j>=i)
    	cout<<"*";
    	cout<<f;
    	f++;
	}
	d=d-num+i;
    cout<<"\n";
  }
}

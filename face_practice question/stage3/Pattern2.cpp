#include <iostream>
using namespace std;
int main() {
  int num,c=1,d=0,e=3,f;
  cin>>num;
  for(int i=1;i<=num;i++)
  {
    if(i%2!=0)
    {
      for(int j=1;j<=i;j++)
      {
      	cout<<c;
      	c++;
      	if(j<i)
      	cout<<"*";
	  }
    }
    else
    {
    	switch(i)
    	{
    		case 2:
    			break;
    		case 4:
    			d+=7;
    			break;
    		default:
    			d+=4;
		}
		e+=d;
		f=e;
		for(int j=1;j<=i;j++)
		{
			cout<<f;
			if(j<i)
			cout<<"*";
			f--;
			c++;
		}
    	
      
    }
    cout<<"\n";
  }
    // Type your code here
    return 0;
}

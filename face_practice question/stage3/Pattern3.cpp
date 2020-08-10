#include<iostream>
using namespace std;
int main()
{
  int num,c;
  cin>>num;
  c=num;
  for(int i=1;i<=num;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<i;
      if(j!=i)
        cout<<"*";
    }
    cout<<"\n";
  }
  
  for(int i=1;i<=num;i++)
  {
    for(int j=num;j>=i;j--)
    {
      cout<<c;
      if(j!=i)
        cout<<"*";
    }
    c--;
    cout<<"\n";
  }
}

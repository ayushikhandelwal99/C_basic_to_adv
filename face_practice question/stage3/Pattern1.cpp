#include<iostream>
using namespace std;
int main()
{
  int num;
  cin>>num;
  for(int i=1;i<=4;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<num;
    }
    num++;
    cout<<"\n";
  }
  for(int i=1;i<=4;i++)
  {
    num--;
    for(int j=4;j>=i;j--)
    {
      cout<<num;
    }
    
    cout<<"\n";
  }
}

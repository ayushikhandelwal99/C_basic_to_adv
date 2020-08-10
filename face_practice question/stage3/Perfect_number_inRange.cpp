#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"Enter range";
  cin>>a>>b;
  for(int i=a;i<b;i++)
  {
    int comp=0;
    for(int j=1;j<i;j++)
    {
      if(i%j==0)
        comp+=j;
    }
    if(comp==i)
        cout<<i<<" ";
  }
  return 0;
}

#include<iostream>
using namespace std;
int main()
{
  int n,z=1;
  float p=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cout<<z/2.0<<" ";
    z*=3;
  }
}

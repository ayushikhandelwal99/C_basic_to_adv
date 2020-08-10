#include<iostream>
using namespace std;
int main()
{
  int n,s=121,a=104;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cout<<s<<" ";
    s+=a;
    a+=32;
  }
 }

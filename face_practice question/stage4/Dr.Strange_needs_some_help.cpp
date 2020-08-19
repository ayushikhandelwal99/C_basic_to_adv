#include<iostream>
using namespace std;
int power(int a,int b)
{
  int num=1;
  for(int i=1;i<=b;i++)
    num*=a;
  return num;
}
int main()
{
  int x,y,z,res;
  cin>>x>>y>>z;
  res=power(x,y);
  if(res>=z)
    cout<<"Doctor, you can proceed with your experiment.";
  else
    cout<<"Sorry Doctor! You need more bacteria.";
  return 0;
}

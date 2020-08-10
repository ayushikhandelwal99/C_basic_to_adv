#include<iostream>
using namespace std;
int main()
{
  int num,sum=0,l,d;
  cout<<"Enter a number";
  cin>>num;
  d=num;
  while(num>0)
  {
    l=num%10;
    sum+=l;
    num/=10;
  }
  if(d%sum==0)
    cout<<"Harshad Number";
  else
    cout<<"Not Harshad Number";
  //Type your code here.
}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int num,sn,n=0,div,n1,n2,comp;
  cout<<"Enter a number";
  cin>>num;
  sn=num*num;
  int sq=sn;
  while(sn>0)
  {
    sn=sn/10;
    n++;
  }
  div=pow(10,n/2);
  n1=sq/div;
  n2=sq-n1*div;
  comp=n1+n2;
  if(comp==num)
    cout<<"Kaprekar Number";
  else
    cout<<"Not a Kaprekar Number";
  //Type your code here.
}

#include<iostream>
using namespace std;
int main()
{
  int d1,c1,d2,c2,i;
  cout<<"Enter 4 integers";
  cin>>d1>>c1>>d2>>c2;
  int ct=c1+c2;
  int dt=d1+d2;
  if(ct>99)
  {
    i=ct/100;
    ct=ct-i*100;
  }
  cout<<dt+i;
  cout<<endl<<ct;
  //Type your code here.
}

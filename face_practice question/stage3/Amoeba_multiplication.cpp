#include<iostream>
using namespace std;
int fib(int a)
{
  int T[a+1];
  T[1]=0;
  T[2]=1;
  for(int i=3;i<=a;i++)
  {
    T[i]=T[i-1]+T[i-2];
  }
  return T[a];
}
int main()
{
  int num,op;
  cout<<"Enter number of months";
  cin>>num;
  op = fib(num);
  cout<<op;
  //Type your code here.
}

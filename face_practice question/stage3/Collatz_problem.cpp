#include<iostream>
using namespace std;
int main()
{
  int num,count=0;
  cout<<"Enter first number of sequence";
  cin>>num;
  while(num!=1)
  {
    cout<<num<<endl;
    count++;
    if(num%2==0)
      num=num/2;
    else
      num=3*num+1;
  }
  cout<<num<<endl<<count;
  //Type your code here.
}

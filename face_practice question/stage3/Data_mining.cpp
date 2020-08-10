#include<iostream>
using namespace std;
int main()
{
  int num,a,even=0,odd=0;
  cout<<"Enter a number";
  cin>>num;
  while(num>0)
  {
    a=num%10;
    if(a%2==0)
      even+=a;
    else
      odd+=a;
    
    num/=10;
  }
  
  if(even==odd)
    cout<<"Yes";
  else
    cout<<"No";
  //Type your code here.
}

#include<iostream>
using namespace std;
int main()
{
  int num,s=0,a=2,count=0;
  cin>>num;
  for(int i=1;i<=num;i++)
  {
    cout<<s<<" ";
    count++;
    s+=a;
    if(count%2==0)
      a+=0;
    else
      a+=4;
    
  }
  //Type your code here.
}

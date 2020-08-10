#include<iostream>
using namespace std;
int main()
{
  int s,hs=0;
  cout<<"Enter a number: ";
  cin>>s;
  if(s==1)
    return 0;
  while(s>1)
  {
    hs+=s-1;
    s--;
  }
  cout<<hs;
  
    
  //Type your code here.
}

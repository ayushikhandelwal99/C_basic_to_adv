#include<iostream>
using namespace std;
int main()
{
  int x;
  cin>>x;
  int first,last;
  first=x/1000;
  last=x%10;
  if(x<0)
    cout<<-(first+last);
  else
    cout<<first+last;
    
  
  return 0;
  //Type your code here.
}

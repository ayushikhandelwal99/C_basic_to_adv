#include<iostream>
using namespace std;
int main()
{
  //Type your code here
  int x,y,count=0;
  cin>>x>>y;
  while(x>3&&y>4)
  {
    x--;
    y--;
    count++;
  }
  if(x==3)
    count += y-4;
  else
    count += x-3;
  
  cout<<count;
  return 0;
}


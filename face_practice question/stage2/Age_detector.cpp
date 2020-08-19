#include<iostream>
using namespace std;
int main()
{
  int by,cy;
  cin>>by>>cy;
  if(cy<by)
    cout<<(100-by+cy);
  else
    cout<<cy-by;
  //Type your code here.
}

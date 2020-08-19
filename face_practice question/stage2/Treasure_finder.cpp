#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  int t;
  if(a<b)
  {
    if(b<c)
      t=b;
    else if(a<c)
      t=c;
    else
      t=a;
  }
  else
  {
    if(a<c)
      t=a;
    else if(b<c)
      t=c;
    else
      t=b;
  }
  int hcf;
  cout<<"The treasure is in box which has number "<<t;
  for (int i = 1; i <=  b; ++i) {
        if (a % i == 0 && b % i ==0 && c % i == 0) {
            hcf = i;
        }
  }
  cout<<"\nThe code to open the box is "<<hcf;
  //Type your code here.
}

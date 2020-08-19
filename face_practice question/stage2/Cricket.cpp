#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int tb,tr,r,b,x,y;
  cin>>tb>>tr>>r>>b;
  cout<<tb/6<<endl;
  x=b/6;
  y=b%6;
  float z=(float)(x+0.1*y);
  cout<<z<<endl;
  
  float crr=r/z;
  cout<<(round(crr*10))/10<<endl;
  float trr=tr/50.0;
  cout<<(round(trr*10))/10<<endl;
  if(trr<=crr)
    cout<<"Eligible to Win";
  else
    cout<<"Not Eligible to Win";
  
  
  
  
  //Type your code here.
}

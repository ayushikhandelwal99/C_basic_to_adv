#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int tb,tr,r,b;
  cin>>tb>>tr>>r>>b;
  
  cout<<tb/6<<endl;
  
  cout<<b/6+0.3<<endl;
  
  float crr=r/(b/6+0.3);
  cout<<(round(crr*10))/10<<endl;
  float trr=tr/50.0;
  cout<<trr<<endl;
  if(trr<=crr)
    cout<<"Eligible to Win";
  else
    cout<<"Not Eligible to Win";
  
  
  
  
  //Type your code here.
}

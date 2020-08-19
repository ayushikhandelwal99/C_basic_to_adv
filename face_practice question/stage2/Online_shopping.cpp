#include<iostream>
using namespace std;
int main()
{
  int fa,fd,fs,sa,sd,ss,aa,ad,as;
  cin>>fa>>fd>>fs>>sa>>sd>>ss>>aa>>ad>>as;
  int fp,sp,ap;
  fp=fa-(fa*fd/100)+fs;
  sp=sa-(sa*sd/100)+ss;
  ap=aa-(aa*ad/100)+as;
  cout<<"In Flipkart Rs."<<fp;
  cout<<"\nIn Snapdeal Rs."<<sp;
  cout<<"\nIn Amazon Rs."<<ap;
  if(fp<=sp)
  {
    if(sp<=ap)
      cout<<"\nHe will prefer Flipkart";
    else if(fp<=ap)
      cout<<"\nHe will prefer Flipkart";
    else
      cout<<"\nHe will prefer Amazon";
  }
  else
  {
    if(fp<=ap)
      cout<<"\nHe will prefer Snapdeal";
    else if(sp<=ap)
      cout<<"\nHe will prefer Snapdeal";
    else
      cout<<"\nHe will prefer Amazon";
  }
  
  //Type your code here.
}

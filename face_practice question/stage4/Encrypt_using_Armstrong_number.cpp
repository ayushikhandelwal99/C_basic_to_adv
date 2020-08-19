#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int m,int n)
{
    int j,i;
    for(i=1,j=1;i<=n;i++)
        j=j*m;
    return j;
}
int arm(int n)
{
  int num,r,sum=0,digit;
  num=n;
  digit=int(log10(n)+1);
  while(num>0)
  {
    r=num%10;
    num=num/10;
    if(digit<3)
      sum+=r*r*r;
    else
      sum=sum+pow(r,digit);
  }
  if(sum==n)
    return 1;
  else
    return 0;
  
    //Your code goes here
}
int main()
{
    int n;
    cin>>n;
    if(arm(n)==1)
        cout<<"Kindly proceed with encrypting";
    else
        cout<<"It is not an Armstrong number";
    
}

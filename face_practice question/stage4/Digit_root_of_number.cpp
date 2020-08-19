#include<iostream>
using namespace std;
int digitroot(int num)
{
  int r,sum=0;
  while(num>0)
  {
    r=num%10;
    sum+=r;
    num/=10;
  }
  if(sum<=9)
    return sum;
  else
    digitroot(sum);
}
int main()
{
  int num;
  cin>>num;
  cout<<digitroot(num);
  return 0;
}

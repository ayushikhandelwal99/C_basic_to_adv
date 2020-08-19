#include<iostream>
using namespace std;
int main()
{
  int age;
  float t;
  cin>>age>>t;
  if(13<t && t<14)
  {
    if(age>13)
      cout<<"$5.00";
    else
      cout<<"$2.00";
  }
  else
  {
    if(age>13)
      cout<<"$8.00";
    else
      cout<<"$4.00";
  }
  //Type your code here.
}

#include<iostream>
using namespace std;
int main()
{
  int num,count=0;
  cout<<"Enter any number";
  cin>>num;
  do
  {
    num/=10;
    count++;
  }while(num>0);
  cout<<count;
    
  // Type your code here
}

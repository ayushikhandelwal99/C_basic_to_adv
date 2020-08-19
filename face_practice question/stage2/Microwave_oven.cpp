#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int item;
  float ht;
  float rht;
  cin>>item>>ht;
  switch(item)
  {
    case 1:
      rht=ht;
      cout<<fixed<<setprecision(2)<<rht;
      break;
    case 2:
      rht=ht+(ht*50/100);
      cout<<fixed<<setprecision(2)<<rht;
      break;
    case 3:
      rht=ht*2.0;
      cout<<fixed<<setprecision(2)<<rht;
      break;
    default:
      cout<<"Number of items is more";
  }
  //Type your code here.
}

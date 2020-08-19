#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int pamount, rate, years;
  std::cin>>pamount>>rate>>years;
  
  int interest,amount;
  float discount,fsettlement;
  
  interest=(pamount*rate*years)/100;
  amount=pamount+interest;
  discount=(interest*0.02);
  fsettlement=amount-discount;
  std::cout<<interest<<"\n"<<amount<<"\n"<<discount<<"\n"<<fsettlement;
  //Type your code here.
}

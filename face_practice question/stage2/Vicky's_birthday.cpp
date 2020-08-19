#include <iostream>
using namespace std;

int main() 
{
  int x;
  cin>>x;
  if(x%400==0)
    cout<<"Vicky can celebrate his birthday.";
  else
    if(x%100==0)
      cout<<"Vicky can't celebrate.";
  	else
      if(x%4==0)
        cout<<"Vicky can celebrate his birthday.";
  	  else
        cout<<"Vicky can't celebrate.";
    
  return 0;
}

#include<iostream>
using namespace std;
int main()
{
  int odd=3,num;
  float score=0.0;
   cout<<"Enter integers";
  while(odd>0)
  {
    cin>>num;
    if(num>=0)
    {
      if(num%2==0)
      {
        score-=0.5;
      }
      else
      {
        score+=1;
        odd--;
      }
    }
    else
    {
      score=score-1;
      break;
    }
  }
  cout<<score;
  //Type your code here.
}

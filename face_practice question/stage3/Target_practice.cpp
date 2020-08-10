#include<iostream>
using namespace std;
int main()
{
  int n,score=0,num,count=0;
  cout<<"Enter a positive integers";
  cin>>n;
  while(score<n)
  {
    cin>>num;
    score+=num;
    count++;
  }
  cout<<"The number of turns is "<<count;
  
  //Type your code here.
}

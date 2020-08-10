#include <iostream>
using namespace std;
int main() {
  int num,c=1;
  cin>>num;
  for(int i=1;i<=num;i++)
  {
    if(i%2!=0)
    {
      for(int j=1;j<=num;j++)
      {
        if(j!=num)
          cout<<c;
        else
        {
          c++;
          cout<<c;
        }
      }
    }
    else
    {
      for(int j=1;j<=num;j++)
      {
        if(j==1)
        {
          cout<<c+1;
        }
        else
          cout<<c;
      }
      c++;
    }
    cout<<"\n";
  }
    // Type your code here
    return 0;
}

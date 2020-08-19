#include <iostream>
using namespace std;
int GCD(int a, int b, int c, int min)
{ 
  while(a%min!=0 && b%min!=0 && c%min!=0)
  {
    if(min==1)
      break;
    min--;
  }
  return min;
}
int main() 
{
  int x,y,z,sol,small,res;
  cin>>x>>y>>z>>sol;
  small= x<y?(x<z?x:z):(y<z?y:z);
  if(small==0)
  {
    int midd;
    midd = x<y?(y<z?y:z):(x<z?x:(y<z?z:y));
    res=GCD(x,y,z,midd);
  }
  else
    res=GCD(x,y,z,small);
  if(res==sol)
    cout<<"Answer is correct.";
  else
    cout<<"Answer is wrong.";
  return 0;
}

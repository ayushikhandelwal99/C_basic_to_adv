#include<iostream>
using namespace std;
int main()
{
  int row,col,tree;
  cin>>row>>col>>tree;
  if(row<tree && tree<=2*row)
    cout<<"It is a mango tree";
  else if(row*col-2*row<tree && tree<=row*col-row)
    cout<<"It is a mango tree";
  else
    cout<<"It is not a mango tree";
  //Type your code here.
}

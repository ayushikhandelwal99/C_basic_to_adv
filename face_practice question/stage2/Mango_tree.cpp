#include<iostream>
using namespace std;
int main()
{
  int row,col,tree,count=0,flag=0;
  cin>>row>>col>>tree;
  int a[row][col];
  a[0][0]=1;
  for(int i=0;i<row;i++)
  {
  	for(int j=0;j<col;j++)
  	{
  		if(i==0)
  		{
  			count++;
  			a[i][j]=count;
  			
		}
		else if(j==0)
		{
			a[i][j]=a[i-1][j]+row;
		}
		else if(j==col-1)
		{
			a[i][j]=a[i-1][j]+row;	
		}
		else
		{
			a[i][j]=0;
		}
		
	}
  }
  for(int i=0;i<row;i++)
  {
  	for(int j=0;j<col;j++)
  	{
  		if(a[i][j]==tree)
  		{
  			flag =1;
  			break;
		  }
	}
	  
  }
  if(flag==1)
  cout<<"Yes";
  else
  cout<<"No";
  
  return 0;
  
  //Type your code here.
}

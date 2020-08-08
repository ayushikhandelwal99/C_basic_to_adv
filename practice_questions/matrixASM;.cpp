#include<iostream>
using namespace std;
int main()
{
	int n1,m1,n2,m2;
	cout<<"enter dimensions of both matrix\n";
	cin>>n1>>m1>>n2>>m2;
	int mat1[n1][m1],mat2[n2][m2];
	cout<<"Enter elements of first matrix\n";
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<m1;j++)
		{
			cin>>mat1[i][j];
		}
	}
	cout<<"Enter elements of second maatrix\n";
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<m2;j++)
		{
			cin>>mat2[i][j];
		}
	}
	
	int add[n1][m1],sub[n1][m1],mul[n1][m2];
	if(n1==n2&&m1==m2)
	{
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<m1;j++)
			{
				add[i][j]=mat1[i][j]+mat2[i][j];
			}
		}	
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<m1;j++)
			{
				sub[i][j]=mat1[i][j]-mat2[i][j];
			}
		}
	}
	else
	cout<<"Addition , Subtraction not possible\n";
	
	cout<<"Addition\n";
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<m1;j++)
		{
			cout<<add[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"Subtraction\n";
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<m2;j++)
		{
			cout<<sub[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

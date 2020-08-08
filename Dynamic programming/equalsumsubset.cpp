#include<iostream>
using namespace std;
int subset(int *a,int n,int sum)
{
	int T[n+1][sum+1];
	for(int i=1;i<=sum;i++)
	{
		T[0][i]=0;
	}
	for(int i=0;i<=n;i++)
	{
		T[i][0]=1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(a[i-1]>j)
			T[i][j]=T[i-1][j];
			else
			T[i][j]=T[i-1][j] || T[i-1][j-a[i-1]];
		}
	}
	return T[n][sum];
}
int main()
{
	int arr[]={7,3,1,5,4,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	
	for(int i=0;i<n;i++)
	sum+=arr[i];
	
	if(sum%2==1)
	cout<<"NO";
	else
	{
		if(subset(arr,n-1,sum/2))
		cout<<"YES";
		else
		cout<<"NO";
	}
	
}


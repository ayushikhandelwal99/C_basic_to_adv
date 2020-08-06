#include<stdio.h>
#include<limits.h>
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

int main() {
	int a[5]={7,3,2,5,8};
	int n=sizeof(a)/sizeof(a[0]);
	int sum=14;
	
	if(subset(a,n-1,sum))
	printf("Yes");
	else
	printf("No");
	
	return 0;
}

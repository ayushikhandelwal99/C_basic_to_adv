#include<stdio.h>
#include<limits.h>
int max(int x, int y)
{
	return x>y?x:y;
}
//find the maximum profit that can be obtained by cutting the rod
int RodCut(int *length,int *price,int n) {
	int T[n+1]={0};
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			T[i]=max(T[i],price[j-1]+T[i-j]);
		}
	}
	return T[n];
}

int main() {
	int length[]={1,2,3,4,5,6,7,8};
	int price[]={1,5,8,9,10,17,17,20};
	int n=4;
	
	printf("%d",RodCut(length,price,n));
	return 0;

}

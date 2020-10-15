#include<stdio.h>
#include<limits.h>
// minimum number of coins required to get desired sum when their are unlimited supply of those coins
int min(int x,int y) {
	return x<y?x:y;
}
int findmincoins(int *C,int n,int amt) {
	if (amt==0)
	return 0;
	
	if (amt<0)
	return INT_MAX;
	
	int coins=INT_MAX;
	
	for(int i=0;i<n;i++)
	{
		int res=findmincoins(C,n,amt-C[i]);
		if(res!=INT_MAX)
		coins=min(coins,res+1);
	}
	return coins;
}


int main() {
	int C[]={1,2,3,4};
	int n=sizeof(C)/sizeof(C[0]);
	int amt=15;
	
	printf("%d",findmincoins(C,n,amt));
	return 0;
}

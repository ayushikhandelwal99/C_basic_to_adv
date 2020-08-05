#include<stdio.h>
#include<limits.h>
// minimum number of coins required to get desired sum when their are unlimited supply of those coins
int min(int x,int y) {
	return x<y?x:y;
}
int findmincoins(int *C,int n,int amt) {
	int T[amt+1];
	T[0]=0;
	
	for(int i=1;i<=amt;i++)
	{
		T[i]=INT_MAX;
		int res=INT_MAX;
		
		for(int j=0;j<n;j++)
		{
			if(i-C[j]>=0)
			res=T[i-C[j]];
			
			if(res!=INT_MAX)
			T[i]=min(T[i],res+1);
		}
	}
	return T[amt];
}


int main() {
	int C[]={1,2,3,4};
	int n=sizeof(C)/sizeof(C[0]);
	
	int amt=15;
	
	printf("%d",findmincoins(C,n,amt));
	return 0;
}

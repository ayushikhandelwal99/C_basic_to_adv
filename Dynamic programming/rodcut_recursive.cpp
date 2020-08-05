#include<stdio.h>
#include<limits.h>

int RodCut(int *length,int *price,int n) {
	if(n==0)
	return 0;
	
	int max=INT_MAX;
	for(int i=1;i<=n;i++)
	{
		int cost=price[i-1]+RodCut(length,price,n-i);
		
		if(cost>max)
		max=cost;
	}
		
	return max;
}

int main() {
	int length[]={1,2,3,4,5,6,7,8};
	int price[]={1,5,8,9,10,17,17,20};
	int n=4;
	
	printf("%d",RodCut(length,price,n));
	
	//hey \
	kerhu	
	return 0;

}

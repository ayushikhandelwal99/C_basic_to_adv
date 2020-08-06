#include<stdio.h>
#include<limits.h>
int subset(int *a,int n,int sum)
{
	if(sum==0)
	return 1;
	
	if(n<0 || sum<0)
	return 0;
	
	int inc=subset(a,n-1,sum-a[n]);
	int exc=subset(a,n-1,sum);
	
	return inc||exc;
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

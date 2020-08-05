#include<stdio.h>
int fib(int n)
{
	int a[n+1];
	
	a[1]=0;
	a[2]=1;
	
	for(int i=3;i<=n;i++)
	a[i]=a[i-1]+a[i-2];
	
	return a[n];
}
// dynamic programming can be applied where we can subdivide the problems
int main() {
	int n=15;
	printf("%d",fib(n));
	return 0;
}

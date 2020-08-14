//Binary search
//1. list must be sorted
//middle=(beg+end)/2
//complexity = O(logn)
#include<stdio.h>
int BinarySearch(int[], int, int);
int main()
{
	int a[10],i,num,pos,n=10;
	
	printf("Enter any 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements of array\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter element to search:");
	scanf("%d",&num);
	pos=BinarySearch(a,n,num);
	if(pos==-1)
	printf("Element not found");
	else
	printf("Element found at position %d",pos+1);
	return 0;
}
int BinarySearch(int *a,int n, int num)
{
	int beg=0, end=n-1, mid;
	mid=(beg+end)/2;
	while((beg<=end) && a[mid]!=num)
	{
		if(num<a[mid])
		end=mid-1;
		else
		beg=mid+1;
		
		mid=(beg+end)/2;
	}
	if(beg>end)
	return -1;
	else
	return mid;
}

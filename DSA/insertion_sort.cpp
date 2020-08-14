//Sorting
//insertion sort
#include<stdio.h>
#define MAX 10
int main()
{
	int a[10],size=10,i,j,key;
	printf("Enter %d elements",MAX);
	for(i=0;i<MAX;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements of unsorted array\n");
	for(i=0;i<MAX;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<size;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	printf("\nElements of sorted array\n");
	for(i=0;i<MAX;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

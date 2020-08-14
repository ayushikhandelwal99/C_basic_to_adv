//Sorting
//Bubble sort
#include<stdio.h>
#define MAX 10
int main()
{
	int a[10],size=10,i,j,temp;
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
		for(j=0;j<size-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nElements of sorted array\n");
	for(i=0;i<MAX;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

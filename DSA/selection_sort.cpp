//Sorting
//selection sort
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
		for(j=i;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
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

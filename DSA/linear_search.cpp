//Linear search
#include<stdio.h>
int main()
{
	int a[10],i,pos,flag=0,num;
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
	for(i=0;i<10;i++)
	{
		if(a[i]==num)
		{
			flag=1;
			pos=i;
			break;
		}
	}
	if(flag==1)
	printf("Element found at location %d",pos+1);
	else
	printf("Element not found");
	
	return 0;
}

#include<stdio.h>
int main()
{
	int ar[10];
	printf("%d\n",sizeof(ar));
	printf("%d\n",sizeof(ar[0]));
	char a[]="halo C++...";
	char *b="halo C++...";
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(*a));
	printf("%d\n",sizeof(*b));
	printf("%d",sizeof(b));
	return 0;
}

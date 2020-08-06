#include<iostream>
using namespace std;

int main() {
	int a[3][3]={10,20,30,40,50,60,70,80,90};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=%d Address=%u\n",i,j,a[i][j],&a[i][j]);
		}
	}
	printf("a=%u\n",a);
	printf("a+1=%u\n",a+1);		
	printf("&a+1=%u\n",&a+1);
	printf("*a+1=%u\n",*a+1);
	printf("**a=%u\n",**a);
	printf("a[1]+0=%u\n",a[1]+0);
	printf("a[1]+1=%u\n",a[1]+1);
	printf("a[1]+2=%u\n",a[1]+2);
	return 0;
}

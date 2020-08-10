#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,j,ch=65,bh=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
			ch++;
		}
		for (j = 2; j <= 5-i+1; j++) 
      	printf(" ");
      	
      	for (j = 1; j <= 5-i; j++) 
      	printf(" ");
      	
      	for(j=1;j<=i;j++)
      	{
      		printf("%c",bh);
      		bh--;
		}
		bh=65+i;
		cout<<"\n";
		ch=65;
	}
	for(i=6;i<=9;i++)
	{
		bh=65+9-i;
		for(j=1;j<=10-i;j++)
		{
			printf("%c",ch);
			ch++;
		}
		for (j = 1; j <=(i-6)*2+2; j++) 
      	printf(" ");
      	
      	for(j=1;j<=10-i;j++)
      	{
		  printf("%c",bh);
		  bh--;
		}
      	
      	
		cout<<"\n";
		ch=65;
	}
}

#include<iostream>
#include<stdio.h>
using namespace std;
struct student
{
	int eno;
	char name[10];
	int age;
};
int main()
{
	struct student s[3];
	int i;
	cout<<"Enter record of three students\n";
	for(i=0;i<3;i++)
	{
		printf("Enter %d record of the student", i+1);
		scanf("%d%s%d",&s[i].eno,&s[i].name,&s[i].age);
		
	}
	printf("The details of students are:\n");
	for(i=0;i<3;i++)
	{
		printf("\nEno=%d Name=%s Age=%d",s[i].eno,s[i].name,s[i].age);		
	}
	return 0;
}

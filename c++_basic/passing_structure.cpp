#include<iostream>
#include<stdio.h>
using namespace std;

struct stud
{
	int eno;
	char name[10];
	int age;
};

func(struct stud s)
{
	printf("Eno=%d\n",s.eno);
	printf("Name=%s\n",s.name);
	printf("Age=%d\n",s.age);
}
funcp(struct stud *s)
{
	printf("Eno=%d\n",s->eno);
	printf("Name=%s\n",s->name);
	printf("Age=%d\n",s->age);
	
	printf("Eno=%d\n",(*s).eno);
	printf("Name=%s\n",(*s).name);
	printf("Age=%d\n",(*s).age);
}
int main()
{
	struct stud s1={1001,"Ayushi",25};
	func(s1);
	funcp(&s1);
	return 0;
}



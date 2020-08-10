#include<stdio.h>
int main()
{
	union address
	{
		int a;
		char ch[6];
	}u;
	
	//u.a=10;
	u.ch[0]=5;
	u.a=10;
	u.ch[1]=2;
	
	printf("%d %d %d",u.a,u.ch[0],u.ch[1]);
	printf("\n%d\n",sizeof(u));
	return 0;
}


//union uses less memory . in it size of union is size of variable having largest size+ padding.
//it works on same memory by replacing previous ones by new 

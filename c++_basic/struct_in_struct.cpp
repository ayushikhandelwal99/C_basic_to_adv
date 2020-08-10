#include<stdio.h>
int main()
{
	struct address
	{
		char phone[15];
		char city[25];
		long int pin;
	};
	struct emp
	{
		char name[25];
		struct address a;
	};
	struct emp e={"Ayushi","435627","jaipur",332033};
	printf("Name=%s Phone=%s\n",e.name,e.a.phone);
	printf("City=%s Pin=%d",e.a.city,e.a.pin);
	return 0;
}

//bottom to up struct calling for variable

#include<iostream>
using namespace std;

int main() {
	int a =10,*p;
	p=&a;
	printf("%d\n",a);
	printf("%u\n",&a);
	printf("%u\n",p);
	printf("%u\n",&p);
	printf("%u\n",*p);
	printf("%u\n",*(&a));
	return 0;
}

// pointers are variable which stores the address of another variable
// * is dereferential address
// & is referential address

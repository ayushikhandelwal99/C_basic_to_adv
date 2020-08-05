#include <stdio.h>
int z; // global default value is 0
int main() {
	auto int b;
	int a; //local variable default is garbage
	extern int x; // can take values from outside , also from other files after including those files
	static int y;
	printf("y=%d",y); // static default value is 0 and it remains persistance throughout the program
	printf("X=%d", x);
	printf("a=%d,b=%d,z=%d",a,b,z);
	return 0;
}

int x = 100;

#include<iostream>

using namespace std;
int main() {
	int a[5]={10,20,30,40,50};
	printf("%u\n",a); //base address
	printf("%u\n",&a); //base address
	printf("%u\n",a+1); //address of next element
	printf("%u\n",&a+1); //address beyond the array
	printf("%u",&a+2); //address beyond 2 arrays
	return 0;
}

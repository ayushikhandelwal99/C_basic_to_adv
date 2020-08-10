#include<iostream>
int main() {
	int x,y;
	std::cin>>x>>y;
	x^=y; //x=x+y;
	y^=x; //y=x-y;
	x^=y; //x=x-y;
	std::cout<<x<<std::endl<<y;
	return 0;
}

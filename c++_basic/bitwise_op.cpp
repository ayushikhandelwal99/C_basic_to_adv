#include<iostream>
using namespace std;
int main()
{
	int a = 6, b = 7, c, d, e, f, g, h;
	int x = 0xFF, y;
	c = a & b;
	d = a | b;
	e = a ^ b;
	f = a << 2; //number* 2^shift
	g = a >> 2; //number/ 2^shift
	h = ~a;
	y = x<<4>>12 ;
	
	cout<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<g<<endl<<h<<endl<<y<<endl<<x;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int a=10, b=20, c=30, e, d;
	d = (a,b,c); //last value store hogi .. left to right in ()
	e = a,b,c;  // first value aayegi left to right assignment
	cout<<d<<endl<<e;
	return 0;
}

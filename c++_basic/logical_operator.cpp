#include<iostream>
using namespace std;
int main()
{
	//logical operators
	int a=10 , b=-10,c,d,e;
	c=a&&b; //c=1&1=1
	d=a||b; //d=1||1=1
	e=!a; // e= !1 =0
	
	cout<<c<<endl<<d<<endl<<e;
	return 0;
}

/*
Any positive and negative => true = non-zero
zero =0=false

*/
//logical operators not bitwise you idiot
//bitwise works on bits

#include<iostream>
using namespace std;

int main() {
	int x,y,z;
	cin>>x>>y>>z;
	x=x+y;
	y=x-y;
	x=x-y;
	y=y+z;
	z=y-z;
	y=y-z;
	cout<<x<<endl<<y<<endl<<z;
	return 0;
}

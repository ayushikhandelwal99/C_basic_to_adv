#include<iostream>
using namespace std;
int main() {
	int p,r,t;
	cin>>p>>r>>t;
	float s,c;
	s=p*r*t/100;
	c=p*(1+r)*t;
	cout<<s<<endl<<c;
}

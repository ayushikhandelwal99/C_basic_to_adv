#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int p,r,t;
	cin>>p>>r>>t;
	cout<<p*r*t/100;
	int CI=p*pow(1+r/100,t)-p;
	cout<<endl<<CI;
	return 0;
}

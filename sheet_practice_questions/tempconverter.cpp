#include<iostream>
using namespace std;
int main() {
	float temp;
	int from,to;
	cout<<"give temperature: ";
	cin>>temp;
	cout<<"give the number from which to which temp you want to convert\n1.degree C\n2.fahrenheit\n3.kelvin";
	cin>>from>>to;
	switch(from)
	{
		case 1:
			switch(to) {
				case 2:
					temp=temp*1.8;
					break;
				case 3:
					temp=temp+273.15;
					break;
				default:
					cout<<"choose correct option";
			}
			break;
		case 2:
			switch(to) {
				case 1:
					temp=temp*5/9;
					break;
				case 3:
					temp=(temp+459.67)*5/9;
					break;
				default:
					cout<<"choose correct option";
			}
			break;
		case 3:
			switch(to) {
				case 2:
					temp=temp*9/5-459.67;
					break;
				case 1:
					temp=temp-273.15;
					break;
				default:
					cout<<"choose correct option";
			}
			break;
		default:
			cout<<"select correct option";
				
	}
	cout<<temp;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
	const int myNum = 15; //declares a variable as constant means unchangeable and read-only
	int x;
	string msg = "Type a number like:";
	cout << msg << myNum  << endl; //<< insertion operator
	cin >> x;	//>> extraction operator
	return 0;
}

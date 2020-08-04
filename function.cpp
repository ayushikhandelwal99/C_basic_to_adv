// functions
#include <iostream>
#include <string>

using namespace std;

//When a parameter is passed to the function, it is called an argument. So, from the example above: fname is a parameter, while Liam and ayushi are arguments.
void func(string fname, string country = "India") {
	cout << fname << "\n";
	cout << country << "\n";
}
// A parameter with a default value, is often known as an "optional parameter". From the example above, country is an optional parameter and "India" is the default value.

int main() {
	func("ayushi");
	func("liam","USA");
	return 0;
} 

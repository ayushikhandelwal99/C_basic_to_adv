// there are so many loops
/*
if, if else, else if , while, do while, short hand if else --> these are used to check a condition or to do something until a condition is correct
for loop is for iteration
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
	cars[0] = "Opel";
	cout << cars[0] << endl;
	for(int i = 0; i < 4; i++) {
  cout << i << ": " << cars[i] << "\n";
}
}


#include <iostream>
#include <string>

using namespace std;
// In the examples from the previous page, we used normal variables when we passed parameters to a function. You can also pass a reference to the function. This can be useful when you need to change the value of the arguments

void swapNums(int &x, int &y) {
	int z =x;
	x=y;
	y=z;
}
int main() {
	int firstnum = 10;
	int secondnum = 20;
	cout << "before swap "<< "\n" << firstnum << "\t" << secondnum << endl;
	
	swapNums(firstnum,secondnum);
	
	cout << "After swap " << "\n" << firstnum << "\t" << secondnum ; 
	return 0;
}

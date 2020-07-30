#include <iostream>
#include <string>

using namespace std;
int main()
{
	// A reference variable is a "reference" to an existing variable, and it is created with the & operator
	string food = "pizza";
	string &meal = food;
	cout << food << "\n" << meal;
	cout <<"\n" << &food << endl;  // will give the memory address of food
	// References and Pointers (which you will learn about in the next chapter) are important in C++, because they give you the ability to manipulate the data in the com
	
	//A pointer however, is a variable that stores the memory address as its value.
	string* ptr = &food;
	string* ptr2 = &meal;
	cout << ptr << " " << &ptr <<" "<< *ptr	<<endl;
	cout << ptr2 << " " << &ptr2 <<" "<< *ptr2	;
	// You can also change the pointer's value. But note that this will also change the value of the original variable
	
}

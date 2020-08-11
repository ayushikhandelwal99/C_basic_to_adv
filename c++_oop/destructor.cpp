//Destructor
//these are the functions that are complimentary to constructor.
//these are used to de-initialize objects when they are destroyed.
//A destructor is called when an object of the class goes out of scope, or when the memory space used by it is deallocated with the help of delete operator.
//1. these are called automatically when the objects are destroyed
//2. you have to use ~(tilde) symbol before destructor
//3. destructor functions follow the usual access rules as other member functions
//4. these de-initialize each object before the object goes out of scope
//5. no argument and return type(even void) is permitted with destructor
//6. condtructors and destructors cannot be inherited
//7. static destructor are not allowed
//8. address of a constructor or destructor cannot be taken
//9. A destructor can call member functions of its class
//10. ~name_of_class() {}
#include<iostream>
using namespace std;
class Sample{
	public:
		Sample()
		{
			cout<<"Iam in sample constructor"<<endl;
		}
		~Sample()
		{
			cout<<"I am in sample destructor"<<endl;
		}
};
int main()
{
	Sample obj;
	{
		Sample ob;
	}
	return 0;
}

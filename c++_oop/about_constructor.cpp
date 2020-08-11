//Constructor
//A constructor (having the same name as that of the class) is a member function which is 
//automatically used to initialize the objects of the class type with legal initial value
//1.These are called automatically when the objects of the class are created
//2. all objects of the class having constructor are initialized before some use
//3.these should be declared in the public section for availability to all the functions
//4.Return type(not even void) cannot be specified for the constructor
//5. you can pass arguments to the constructor
//6. if you define same name constructor multiple times in a single class then it is known as constructor overloading
//7.These cannot be inherited, but a derived class can call the base class constructor
//8.These cannot be static
// 9.The address of constructor cannot be taken
//10.these cannot be virtual
//11.these make implicit calls to the memory allocation and deallocation operators new and delete
#include<iostream>
using namespace std;
class Sample{
	private:
		static int x,y,z;
		Sample()
		{
			cout<<"Constructor called"<<endl;
		}
	public:
		static void show()
		{
			Sample o1;
			cout<<x<<endl<<y<<endl<<z;
		}
};
int Sample :: x=10;
int Sample :: y=20;
int Sample :: z=30;
int main()
{
	Sample::show();
}

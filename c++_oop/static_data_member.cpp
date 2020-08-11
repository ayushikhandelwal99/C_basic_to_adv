//static data members are generally used to store values common to the whole class
//only a single copy of static data member is used by all the objects
//it can be used within the class but its lifetime is whole programm
// static value ki default value 0 hoti h
//*for making a data member static, we require
//1. Declare it whithin the class
//2. Define it outside the class
//static member function ko static data member hi chahiye hota h 
//not static member function ko koi bhi chlega

#include<iostream>
using namespace std;
class Student
{
	static int count; //declaration within the class
	public:
		static void showcount(void)
		{
			cout<<"Count "<<count<<endl;
		}
		void change()
		{
			count = 500;
			cout<<"Count= "<<count<<endl;
		}
		static void changes()
		{
			count = 1000;
			cout<<"Count= "<<count<<endl;
		}
	
};
//return_type class_name :: variable_name = value;
int Student :: count =100;

int main()
{
	Student obj;
	Student::showcount(); //to call static member function there is no need to define objects
	obj.change();
	obj.changes();
	return 0;
}

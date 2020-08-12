//INHERITENCE
//it is the process of creating new class or classes from the existing class or classes. the existing class is known as base class and the new class is called the derived class.
//base class-> super class-> parent class-> ancestor
//derived class-> sub class-> child class=>descendent

//it is important feature of object oriented programming. By this a programmer can use existing class and without changing it, can add extra features to it. this is achieved by deriving a new class from the existing class.

//Different forms of inheritence
//1.single level inheritence-> 1 base class have only 1 derived class
//2.multi level inheritence-> base class A to derived B && derived class B to derived class C
//3.multiple inheritence-> when a derived class inherits from multiple classes
//4.hierarchical inheritence-> when the property of one class may be inherited by more than one class
//5.hybrid inheritence-> combination of more than two inheritence like multiple and multilevel
//6.multipath inheritence->when a derived class inherites from multiple base classes and all of its base classes inherit from same base class 

#include<iostream>
using namespace std;
class Base
{
	protected:
		int x;
};

class Derived : Base{ //public and protected are inherited but not private
	private:
		int y;
	public:
		void getdata();
		void showdata();
};
void Derived::getdata()
{
	cout<<"Enter values for x and y variable:"<<endl;
	cin>>x>>y;
}
void Derived::showdata()
{
	cout<<"X= "<<x<<endl<<"Y= "<<y<<endl;
}
int main()  //in main only public members can be inherited directly
{
	Derived obj;
	obj.getdata();
	obj.showdata();
	return 0;
}

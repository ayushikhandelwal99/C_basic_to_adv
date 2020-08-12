//Virtual function
// to achieve run time polymorphism we use virtual function
//to perform the method overriding concept in c++, we have to declare the virtual function in a class.
//virtual function implement the "one interference, multiple method"philosophy.
//virtual functions are accessed using a pointer of the base class.
//the virtual function within the base class defines the form of the interface to that function
//it is a function that is declared as a virtual function in base class and we redefine it in the derived class
//it is late binding or runtime binding or dynamic binding.

#include<iostream>
using namespace std;
class A{
	public:
		virtual void vfunc()
		{
			cout<<"This is virtual function of base class"<<endl;
		}
};
class B : public A {
	public:
		void vfunc()
		{
			cout<<"This is derived 1 virtual function"<<endl;
		}
};
class C : public A {
	public:
		void vfunc()
		{
			cout<<"This is derived 2 virtual function"<<endl;
		}
};
int main()
{
	A *p, b;
	B ob;
	C oc;
	
	p= &b;
	p->vfunc();
	
	p=&ob;
	p->vfunc();
	
	p=&oc;
	p->vfunc();
	
	return 0;
}

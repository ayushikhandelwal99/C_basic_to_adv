//Copy constructor
//it is the form classname (classname & ) and used for the initialization of an object from the another object of the same type.
//Shallow copy : a shallow copy of an object copies all of the member field values. This works well if the fields are values, but may not be what you want for fields that point to the dynamically allocated value.
//Deep copy: Adeep copy copies all the fields, and makes copies of dynamically allocated memory pointed to by the fields.
 
#include<iostream>
using namespace std;
class Sample{
	private:
		int x,y,z;
	public:
		Sample(int a, int b, int c) //parameterized construcor
		{
			x=a;
			y=b;
			z=c;
		}
		//class_name(class_name &variable) {}
		Sample(Sample &obj) //copy constructor //default const type ka hota h pass
		{
			x=obj.x;
			y=obj.y;
			z=obj.z;
		}
		void display() //method
		{
			cout<<"Value of X= "<<x<<endl;
			cout<<"Value of Y= "<<y<<endl;
			cout<<"Value of Z= "<<z<<endl;
			cout<<endl;
		}
}; 
int main()
{
	Sample s1(10,20,30);
	Sample s2(s1);
	Sample s3(s2);
	Sample s4 = s3;
	
	s1.display();
	s2.display();
	s3.display();
	s4.display();
	
	return 0;
}

//Function overloading
//in a same class, if same name function defined multiple times with different arguments then it is known function overloading
//polymorphism= many forms
#include<iostream>
using namespace std;
class Sample{
	private:
		int x,y,z;
	public:
		Sample(int x, int y, int z)
		{
			this->x =x;
			this->y =y;
			this->z =z;
		}
		void display()
		{
			cout<<"X= "<<x<<endl;
			cout<<"Y= "<<y<<endl;
			cout<<"Z= "<<z<<endl;
		}
		void func(int a)
		{
			cout<<"A= "<<a<<endl;
		}
		void func(int a, int b)
		{
			cout<<"AxB= "<<a*b<<endl;
		}
		void func(int a, int b , int c)
		{
			cout<<"AxBxC= "<<a*b*c<<endl;
		}
};
int main()
{
	Sample s(10,20,30);
	s.display();
	s.func(100);
	s.func(-10,-20);
	s.func(-10,-20,-30);
	
	return 0;
}

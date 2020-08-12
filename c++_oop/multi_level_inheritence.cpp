#include<iostream>
using namespace std;
class Base
{
	protected:
		int x;
};
class mid:public Base{
	protected:
		int y;
};

class Derived : mid{ 
	protected:
		int z;
	public:
		void getdata();
		void showdata();
};
void Derived::getdata()
{
	cout<<"Enter values for x, y and z variable:"<<endl;
	cin>>x>>y>>z;
}
void Derived::showdata()
{
	cout<<"Value of X= "<<x<<endl;
	cout<<"Value of Y= "<<y<<endl;
	cout<<"Value of Z= "<<z<<endl;
}

int main()  //in main only public members can be inherited directly
{
	Derived obj;
	obj.getdata();
	obj.showdata();
	return 0;
}

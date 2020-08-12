#include<iostream>
using namespace std;
class Base
{
	protected:
		int x;
};
class mid{
	protected:
		int y;
};

class Derived : Base,mid{ //public and protected are inherited but not private
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
	cout<<"X= "<<x<<endl<<"Y= "<<y<<endl<<"Z= "<<z<<endl;
}
int main()  //in main only public members can be inherited directly
{
	Derived obj;
	obj.getdata();
	obj.showdata();
	return 0;
}

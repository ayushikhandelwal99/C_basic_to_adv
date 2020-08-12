#include<iostream>
using namespace std;
class A{
	protected:
		int x;
};
class B : A {
	protected:
		int y;
	public:
		void getXY()
		{
			cout<<"Enter value of X and Y";
			cin>>x>>y;
		}
		void showXY()
		{
			cout<<"X= "<<x<<endl<<"Y= "<<y<<endl;
		}
};
class C : A {
	protected:
		int z;
	public:
		void getXZ()
		{
			cout<<"Enter value of X and Z";
			cin>>x>>z;
		}
		void showXZ()
		{
			cout<<"X= "<<x<<endl<<"Z= "<<z<<endl;
		}
};

int main()
{
	B o1;
	C o2;
	o1.getXY();
	o1.showXY();
	o2.getXZ();
	o2.showXZ();
	return 0;
}

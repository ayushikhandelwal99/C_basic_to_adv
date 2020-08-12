#include<iostream>
using namespace std;
class A {
	protected:
		int x;
};
class B : virtual public A {  //concept of virtualisation
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
class C : public virtual A {
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

class D : B, C {
	protected:
		int w;
	public:
		void getdata();
		void showdata();
};
void D :: getdata()
{
	cout<<"Enter value of X, Y, Z, W";
	cin>>x>>y>>z>>w;
}
void D :: showdata()
{
	cout<<"X= "<<x<<endl;
	cout<<"Y= "<<y<<endl;
	cout<<"Z= "<<z<<endl;
	cout<<"W= "<<w<<endl;
}

int main()
{
	D ob;
	ob.getdata();
	ob.showdata();
	
	return 0;
}

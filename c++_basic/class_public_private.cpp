#include<iostream>
using namespace std;

class Test
{
	private:
		int a,b,c;
	public:
		void getdata()
		{
			cout<<"Enter three numbers\n"<<endl;
			cin>>a>>b>>c;
		}
		void showdata()
		{
			cout<<a<<endl<<b<<endl<<c;
		}
		void mydata(int a, int b, int c)
		{
			this->a =a; // (*this).a = a
			this->b =b; //(*this).b = b
			this->c =c; //(*this).c = c
		}
};
int main()
{
	int a,b,c;
	Test obj;
	obj.getdata();
	obj.showdata();
	cout<<"\nEnter three numbers\n";
	cin>>a>>b>>c;
	obj.mydata(a,b,c);
	obj.showdata();
	return 0;
}

#include<iostream>
using namespace std;
class Test
{
	private:
		int a,b,c;
	public:
		void getdata();
		void showdata();
};

// returntype classname :: methodname(arguments) {}

void Test :: getdata()
{
	cout<<"Enter three numbers\n"<<endl;
	cin>>a>>b>>c;
}
		
void Test :: showdata()
{
	cout<<a<<endl<<b<<endl<<c;
}
//use of ::
//global variabl print
//class me method outside access krne ho to 
// static variable call or assign
//namespaces ke variable use krne ke liye

int main()
{
	Test obj;
	obj.getdata();
	obj.showdata();
	return 0;
}

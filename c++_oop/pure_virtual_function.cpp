//pure virtual function
//a pure virtual function is a virtual functon that has no definition within the base class.
//to declare a pure virtual function, we use the syntax:
//virtual data_type func_name(parameter_list)=0;
//abstract class can't be instenciated
#include<iostream>
using namespace std;
class number{ //abstract due to pure virtual function
	protected:
		int val;
	public:
		void setval(int i)
		{
			val=i;
		}
		virtual void show()=0;  //pure virtual function
};
class hextype : public number{
	public:
		void show()
		{
			cout<<hex<<val<<endl;
		}
};
class octtype : public number {
	public:
		void show()
		{
			cout<<oct<<val<<endl;
		}
};
class dectype : public number {
	public:
		void show()
		{
			cout<<val<<endl;
		}
};
int main()
{
	hextype h;
	dectype d;
	octtype o;
	d.setval(40);
	d.show();

	o.setval(40);
	o.show();
	
	h.setval(40);
	h.show();
	
	return 0;
}

//Defining operator overloading
//return_type name_of_class::operator op(parameter-list){}  #outside
//return_type operator op(parameter-list) {}   #inside

#include<iostream>
using namespace std;
class Counter{
	private:
		int count;  //private data member of counter class
	public:
		Counter()  //Default constructor
		{
			count=0;
		}
		Counter(int c)  //onr argumented constructor
		{
			count=c;
		}
		int getvalue()  //method with int return type
		{
			return count;
		}
		Counter operator++() //for prefix //operator overloading inside class
		{
			return Counter(++count);
		}
		Counter operator++(int) //for postfix  //operator overloading inside class
		{
			return Counter(++count);
		}
		Counter operator--();
};
Counter Counter::operator--()  //operator overloading outside class
{
	return Counter(--count);
}
int main()
{
	Counter c1, c2(10);
	cout<<"Default value: c1="<<c1.getvalue()<<endl;
	cout<<"Default value: c2="<<c2.getvalue()<<endl;
	++c1;
	c1++;
	cout<<"After increment: c1="<<c1.getvalue()<<endl;
	--c2;
	cout<<"After decrement: c2="<<c2.getvalue()<<endl;
	return 0;
}

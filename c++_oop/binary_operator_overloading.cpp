//Defining operator overloading
//return_type name_of_class::operator op(parameter-list){}  #outside
//return_type operator op(parameter-list) {}   #inside

#include<iostream>
using namespace std;
class Binary{
	private:
		int x,y,z;  //private data member of counter class
	public:
		Binary()  //Default constructor
		{
			x = y = z = 0;
		}
		Binary(int x, int y, int z)  //onr argumented constructor
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}
		Binary operator+(Binary ob) //Binary + operatoroverloading
		{
			Binary temp;
			temp.x = x + ob.x;
			temp.y = y + ob.y;
			temp.z = z + ob.z;
			return temp;
		}
		Binary operator-(Binary ob) //Binary + operatoroverloading
		{
			Binary temp;
			temp.x = x - ob.x;
			temp.y = y - ob.y;
			temp.z = z - ob.z;
			return temp;
		}
		void display();
};
void Binary::display()
{
	cout<<"Value of X= "<<x<<endl;
	cout<<"Value of Y= "<<y<<endl;
	cout<<"Value of Z= "<<z<<endl;
	cout<<endl;
}

int main()
{
	Binary b1(10,20,30), b2(100, 200, 300), b3,b4;
	b1.display();
	b2.display();
	//b4 = b1.operator+(b2);
	b3=b1+b2;
	b3.display();
	b3=b1-b2;
	b3.display();
	b4=b1+b2+b3;
	b4.display();
	b4=b1-b2-b3;
	b4.display();
	b4=b1+b2-b3;
	b4.display();
	return 0;
}

//Friend functions
//it is used to access the private , protected members of the class
//friend return_type function_name(class1 object, class2 object);
//for definition of friend function outside the class we don't need :: operator
//we have to pass object in friend function
#include<iostream>
using namespace std;
class TWO; //forward declaration of class TWO
class ONE{
	private:
		int a,b;
	public:
		void enter()
		{
			cout<<"Enter any two numbers"<<endl;
			cin>>a>>b;
		}
		friend int sum(ONE, TWO );  //friend function operator
};
class TWO{
	private:
		int a,b;
	public:
		void enter()
		{
			cout<<"Enter any two numbers"<<endl;
			cin>>a>>b;
		}
		friend int sum(ONE, TWO );
};
//definition of friend function
int sum(ONE ob1, TWO ob2)
{
	return(ob1.a + ob1.b+ ob2.a+ ob2.b);
}

int main()
{
	ONE ob1;
	TWO ob2;
	ob1.enter();
	ob2.enter();
	cout<<"Sum of numbers= "<<sum(ob1,ob2);
	return 0;
}

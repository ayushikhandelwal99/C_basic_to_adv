#include<iostream>
using namespace std;
class TWO;
class ONE{
	private:
		int x,y;
	public:
		void enter()
		{
			cout<<"Enter the values of x and y"<<endl;
			cin>>x>>y;
		}
		friend class TWO;
		//class TWO is declared friend of class ONE
		//so all members of class TWO can access private data of ONE
};
class TWO{
	public:
		void show(ONE ob)
		{
			cout<<"Private data of class ONE is shown below"<<endl;
			cout<<"The number of x and y are"<<endl<<"X= "<<ob.x<<endl<<"Y= "<<ob.y;		
		}
};

int main()
{
	ONE ob1;
	TWO ob2;
	ob1.enter();
	ob2.show(ob1);
	return 0;
}

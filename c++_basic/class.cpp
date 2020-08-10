#include<iostream>
using namespace std;

class Test
{
	public:
	int a;
};
int main()
{
	Test obj;
	obj.a = 100;
	cout<<obj.a<<endl;
	return 0;
}

// public, private, protected
//structure and union ke members by default public hote h
// class ke members by default private hote h
// empty class, structure , union ki size " 1" hoti h  //IMP//


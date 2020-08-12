#include<iostream>
using namespace std;
class Test{
	int x;
	public:
		Test(int xx, float yy)
		{
			cout<<char(yy);
		}
};
int main()
{
	//Test ob(35, 99.50f);
	Test *p = new Test(35, 99.50f); //dynamic memory allocation--> is tareeke se destructor auto call nhi hota. memory ko Delete se delete krna pdega
	return 0;
}

/*
new operator is used to allocate the memory to the pointer variable
delete operator is used to de-allocate thememory which was allocated
//new ke through heap me allocation hota h 
*/

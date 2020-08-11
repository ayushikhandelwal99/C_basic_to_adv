#include<iostream>
using namespace std;
class Student
{
	private:
		static int count;
	public:
		Student()
		{
			count++;
		}
		void show()
		{
			cout<<"Total object created: "<<count<<endl;
		}
};

int Student::count=0;
int main()
{
	Student o1,o2,o3;
	o1.show();
	o2.show();
	o3.show();
	Student o4;
	o4.show();
	return 0;
}

//jaise hi object create hota h to automatically constructor call hota h

#include<iostream>
using namespace std;
class Sample{
	private:
		int num1, num2, num3;
	public:
		Sample(int=0, int=0, int=0); //default arguments
		void sum();
		void display();
};
Sample::Sample(int n1, int n2, int n3)
{
	this->num1=n1;
	this->num2=n2;
	(*this).num3=n3; // same as this->
}
void Sample::sum()
{
	int sum= num1 + num2 + num3;
	cout<<"Sum= "<<sum<<endl;
	cout<<endl;
}
void Sample::display()
{
	cout<<"Num1= "<<num1<<endl;	
	cout<<"Num2= "<<num2<<endl;
	cout<<"Num3= "<<num3<<endl;
	cout<<endl;
}
int main()
{
	Sample s1, s2(10,20),s3(100,200,300);
	s1.sum();
	s2.sum();
	s3.sum();
	s1.display();
	s2.display();
	s3.display();
	
	return 0;
}


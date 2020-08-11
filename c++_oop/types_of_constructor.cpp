#include<iostream>
using namespace std;
class Sample{
	private:
		int x,y,z;
	public:
		Sample()
		{
			x=y=z=0;
		}
		Sample(int x)
		{
			this->x =x;
			y =0;
			this->z= 0;
		}
		Sample(int x, int y)
		{
			this->x =x; //agr this nhi lgaya to garbage value dega
			this->y =y; //this is internal pointer which represents data members
			this->z= 0;
		}
		Sample(int x, int y, int z)
		{
			this->x =x;
			this->y =y;
			this->z= z;
		}
		void show()
		{
			cout<<"X= "<<x<<endl;
			cout<<"Y= "<<y<<endl;
			cout<<"Z= "<<z<<endl;
		}
};

int main()
{
	Sample s1;
	Sample s2(10);
	Sample s3(100,200);
	Sample s4(10,20,30);
	s1.show();
	s2.show();
	s3.show();
	s4.show();
	
	return 0;
}

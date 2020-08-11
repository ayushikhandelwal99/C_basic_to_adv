#include<iostream>
using namespace std;
class Rectangle{
	private:
		float length, width, height;
	public:
		Rectangle();
		Rectangle(float l, float w, float h);
		void area();
		void volume();
};
//class_name::constructor_name(){}
Rectangle::Rectangle()
{
	cout<<"In default constructor";
	length = 0.0;
	width = 0.0;
	height = 0.0;
}
Rectangle::Rectangle(float l, float w, float h)
{
	cout<<"I am in constructor"<<endl;
	length = l;
	width = w;
	height = h;
}

void Rectangle::area()
{
	float area = length* width;
	cout<<"Area= "<<area<<endl;
}
void Rectangle::volume()
{
	float vol = length*width*height;
	cout<<"Volume= "<<vol<<endl;
}

int main()
{
	float a, b, c;
	cout<<"Enter any length, width andd height"<<endl;
	cin>>a>>b>>c;
	Rectangle r;
	r.area();
	r.volume();
	Rectangle rect(a,b,c);
	rect.area();
	rect.volume();
	return 0;
}

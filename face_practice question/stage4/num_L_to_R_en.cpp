#include<iostream>
using namespace std;
void num(int a)
{
	switch(a)
	{
		case 1:
			cout<<"One ";
			break;
		case 2:
			cout<<"Two ";
			break;
		case 3:
			cout<<"Three ";
			break;
		case 4:
			cout<<"Four ";
			break;
		case 5:
			cout<<"Five ";
			break;
		case 6:
			cout<<"Six ";
			break;
		case 7:
			cout<<"Seven ";
			break;
		case 8:
			cout<<"Eight ";
			break;
		case 9:
			cout<<"Nine ";
			break;
		default:
			cout<<"Zero ";
	}
}
void digit(int n)
{
	int r;
	if(n <= 9){
        num(n);
        return;
        
    }
    else
	{
		digit(n / 10);
		r=n %10;
		num(r);
	}
}
int main()
{
    int n;
    cin>>n;
    digit(n);
    return 0;
}
















#include <iostream>
using namespace std;
int main() 
{
	// Type your code here
  int n, reversedNumber = 0, remainder;
  cout<<"Enter a number to be reversed";
    cin >> n;
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << reversedNumber;
	return 0;
}

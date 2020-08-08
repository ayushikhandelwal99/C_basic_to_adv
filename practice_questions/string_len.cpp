#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	getline(cin, s, '\n');
	int i = 0; 
    while (s[i]) 
        i++; 
    cout << i << endl; 
}

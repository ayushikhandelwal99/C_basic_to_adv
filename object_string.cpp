#include <iostream>
#include <string>
using namespace std;

int main() {
	string txt = "ajubwejij jgkkbxrke uthiuhex";
	string name = "Ayushi";
	string fullname;
	string x = txt +" "+ name;
	string y = txt.append(name);
	cout << x << endl << y << endl;
	cout << "length of txt: " << txt.length() << endl << "first char is: "<< txt[0];
	txt[0] = 'A';
	cout << endl << txt[0] << endl;
	getline(cin,fullname); // cin takes space as terminator so for string containing spaces we can use getline() function
	cout << fullname;
	return 0;
	
}

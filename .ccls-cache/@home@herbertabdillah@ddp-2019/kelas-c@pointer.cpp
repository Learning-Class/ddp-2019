#include<iostream>

using namespace std;

int main() {
	// PASS BY VALUE
	//int a = 999;
	//int b = a;

	//a = 200;

	//cout << "a" << a << endl;
	//cout << "b" << b << endl;

	// PASS BY POINTER
	int a = 999;
	int *b = &a;

	a = 200;
	cout << "int a" << endl;
	cout << "int *b" << endl;
	cout << "a \t" << a << endl;
	cout << "b \t" << b << endl;

	cout << "a \t" << a << endl;
	cout << "*b \t" << *b << endl;

	cout << "&a \t" << &a << endl;
	cout << "b \t" << b << endl;

	cout << "&a \t" << &a << endl;
	cout << "&b \t" << &b << endl;

	return 0;
}

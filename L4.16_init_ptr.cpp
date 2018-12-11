//inti_ptr.cpp -- initialize a pointer
#include<iostream>
int main() {
	using namespace std;
	int higgens = 5;
	int * p = &higgens;// we can also write: int* p or int *p
	cout << "Value of higgens is " << higgens
		<< "; Address of higgens is " << &higgens << endl;
	cout << "Value of *p is " << *p
		<< "; Value of p is " << p << endl;
	return 0;
}
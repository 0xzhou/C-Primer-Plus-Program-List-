//use_new.cpp -- using the new operator
#include<iostream>
int main() {
	using namespace std;
	int nights = 1001;
	int * pt = new int;//allocate£®∑÷≈‰£©space for an int
	*pt = 1001;//store a value in the space

	cout << "nights value = " << nights
		<< ": location is " << &nights << endl;
	cout << "int value = " << *pt
		<< ": location is " << pt << endl;

	double *pd = new double;//allocate space for a double
	*pd = 10000001.0;// store a value in the space
	cout << "double value = " << *pd
		<< ": location is " << pd << endl;
	cout << "location of pointer pd is " << &pd << endl;
	cout << "size of pt = " << sizeof(pt)
		<< ": size of *pt is " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof(pd)
		<< ": siza of *pd is " << sizeof(*pd) << endl;
	return 0;
}
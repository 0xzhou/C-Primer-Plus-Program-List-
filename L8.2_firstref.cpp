//firstref.cpp -- defining and using a reference
#include<iostream>
int main() {
	using namespace std;
	int rats = 101;
	int & rodents = rats;//rodents is a reference
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents<<endl;
	rodents++;// Incrementing rodents by one affects both variables.
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents<<endl;

	// some implementations require type casting the following
	// address to type unsigned
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;
	return 0;
	//the reference has the same value and address with it's varible
}
// As you can see, both rats and rodents have the same value and the same address.

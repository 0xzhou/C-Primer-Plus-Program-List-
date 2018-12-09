//pointer.cpp -- our first pointer variable
#include<iostream>
int main()
{
	using namespace std;
	int updates = 6;
	int * p_updates;//declare a pointer to an int
	p_updates = &updates;//assign the address of int to the pointer

	//express the value of int in two ways
	cout << "Value updates = " << updates;
	cout << ", *p_updates = " << *p_updates<<endl;
	
	//express the address of int in two ways
	cout << "Address updates = " << &updates;
	cout << ", p_updates= " << p_updates<<endl;

	//use pointer to change value of the int
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << *p_updates << endl;
	return 0;
}
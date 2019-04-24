// ptrstr.cpp -- using pointers to strings
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring> //declare strlen(), strcpy()
int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char * bird = "wren"; // bird holds the address of the string
	// "wren" is a quoted string constant, which is interpreted as the
	// address of the first character of a string

	// Using const in this fashion means you can use bird to access the string but not
	// to change it.
	char *ps;// uninitialized

	cout << animal << " and ";
	cout << bird << "\n";

	cout << "Enter a kind of animal: ";
	cin >> animal;

	ps = animal; // set ps to point to string
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);// get two separate copies of "fox"
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;
	delete[] ps;
	return 0;
}
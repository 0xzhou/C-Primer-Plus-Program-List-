// delete.cpp -- using the delete operator
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
char * getname(void); // function prototype
int main()
{
	char * name;
	name = getname();
	cout << name << " at " << (int *)name << "\n";
	delete[] name;

	name = getname();
	cout << name << " at " << (int *)name << "\n";
	delete[] name;
	return 0;
}

char * getname() // return pointer to new string
{
	char temp[80];// temporary storage
	cout << "Enter last name: ";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	// Including the null character, the program needs strlen(temp)+1 characters
	// to store the string
	strcpy(pn, temp);
	// copy string to new storage
	return pn;
}
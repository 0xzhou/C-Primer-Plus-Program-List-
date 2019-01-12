// strings.cpp -- storing strings in an array
#include<iostream>
#include<cstring> // for the strlen() function
int main()
{
	using namespace std;
	const int Size = 15;
	char name1[Size]; // empty size
	char name2[Size] = "C++owboy";// initialized array
	// NOTE: some implementations may require the 'static' keyword to initialize array name2

	cout << "Howdy! I'm " << name2;
	cout << "! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	// the sizeof operator gives the size of the entire array, 15 bytes,
	// but the strlen() function returns the size of the string stored in the
	// the array and not the size of the array itself.
	// 而且遇见0以后，则不计算
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0'; //set to null charactor
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;
	return 0;

}
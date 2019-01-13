// instr1.cpp -- reading more than one string
#include<iostream>
int main()
{
	using namespace std;
	const int Atsize = 20;
	char name[Atsize];
	char dessert[Atsize];

	cout << "Enter you name:\n";
	cin >> name;
	cout << "Enter you favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}

// If enter you name like this:"Mike cakes"
// We didn't even get a chance to respond to the dessert prompt!
// The program showed it and then immediately moved on to display the final line.
// 
// convert.cpp -- converts stone to pounds
#include <iostream>
int stonetolb(int);
int main()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds.\n";
	cin.get(); cin.get();
	return 0;
}

int stonetolb(int n)
{
	return 14 * n;
}
//getinfo.cpp -- input and output~
#include<iostream>

int main() {
	using namespace std;

	int carrrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrrots;
	cout << "Here are two more. ";
	carrrots = carrrots + 2;
	cout << "Now you have " << carrrots << " carrots." << endl;
	return 0;
}
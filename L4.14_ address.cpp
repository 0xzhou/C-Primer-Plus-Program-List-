// address.cpp --using the & oprator to find the addresses
#include<iostream>
using namespace std;
int main() {
	int donuts = 6;
	double cups = 4.5;
	cout << "donuts value =" << donuts;
	cout << " and it's address =" << &donuts << endl;
	cout << "cups value =" << cups;
	cout << " cups address =" << &cups << endl;
	return 0;
}
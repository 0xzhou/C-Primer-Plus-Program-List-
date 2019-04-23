// arraynew.cpp -- using the new operator for arrays
#include<iostream>
int main()
{
	using namespace std;
	double * p3 = new double[3];// space for 3 doubles, explore a space for an array, which has 3 elements
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;//Amazing,we can treat p3 like an array name
	cout << "p3[1] = " << p3[1] << endl;
	p3 = p3 + 1;
	// p3 now points to p3[1]
	cout << "Now p3[0] is " << p3[0] << " and " << "p3[1] is " << p3[1] << endl;
	p3 = p3 - 1;// point as the beginning
	delete[] p3;// free the space that array has
	return 0;
}

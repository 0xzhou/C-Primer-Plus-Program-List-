// cubes.cpp -- regular and reference arguments
#include<iostream>
double cube(double a);
double refcube(double & ra);
int main() 
{
	using namespace std;
	double x = 3.0;

	cout << cube(x);
	cout << " = cube of " << x << endl;
	cout << refcube(x);
	cout << " = cube of " << x << endl;
	return 0;
}
double cube(double a)
{
	a *= a * a;
	return a;
}
double refcube(double & ra)
{
	ra *= ra * ra;
	return ra;
}
// in first case: cube(x)=27, x=3
// in second case: refcube(x)=27, x=27
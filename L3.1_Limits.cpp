// limits.cpp --some integer limits
#include <iostream>
#include <climits> //use limits.h for older systerm
int main()
{
	using namespace std;
	int n_int = INT_MAX;// initialize n_int to max int value
	short n_short = SHRT_MAX; //symbols defined in climits file
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	//sizeof operator yields size of type or of variable
	cout << "int is" << sizeof(int) << " bytes." << endl;
	cout << "short is" << sizeof(short) << " bytes." << endl;
	cout<<

}
// usetime2.cpp -- using the third draft of the Time class
// compile usetime2.cpp with mytime2.h; mytime.cpp
#include<iostream>
#include"L11.7_mytime2.h"

int main()
{
	using std::cout;
	using std::endl;
	Time weeding(4, 35);
	Time waxing(2, 47);
	Time total;
	Time diff;
	Time adjusted;

	cout << "Weeding time = ";
	weeding.show();
	cout << endl;

	cout << "Waxing time = ";
	waxing.show();
	cout << endl;

	cout << "total work time = ";
	total = weeding + waxing;
	total.show();
	cout << endl;

	diff = weeding - waxing;
	cout << "weeding time - waxing time = ";
	diff.show();
	cout << endl;

	adjusted = total * 1.5;
	cout << "adjusted time = ";
	adjusted.show();
	cout << endl;
	
	return 0;
}
// vect.cpp -- methods for the Vector class
#include<cmath>
#include"vector.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

 namespace VECTOR

{
	//compute degrees in one radian
	const double Rat_to_deg = 45.0 / atan(1.0);

	//private methods
	//calculate magnitude form x and y

	void Vector::set_mag() 
	{
		mag = sqrt(x*x + y * y);
	}

	void Vector::set_ang()
	{
		if (x == 0.0&y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y, x);
	}

	//set x from polar coordinate
	void Vector::set_x()
	{
		x = mag * cos(ang);
	}

	//set y ftom polar coordinate
	void Vector::set_y()
	{
		y = mag * sin(ang);
	}

	//public methods:
	Vector::Vector()
	{
		x = y = mag = ang = 0.0;
		mode = RECT;
	}

	Vector::Vector(double n1, double n2, Mode form = RECT)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			mag = n1;
			ang = n2;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() --";
			cout << "vector set to 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	void Vector::reset(double n1, double n2, Mode form = RECT)
	{
	
	}

}

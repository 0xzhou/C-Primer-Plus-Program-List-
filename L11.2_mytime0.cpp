// mytime0.cpp -- implementing Time methods
#include<iostream>
#include"L11.1_mytime0.h"

Time::Time() // constructor
{
	hours = minutes = 0;
}
Time::Time(int h, int m)// also constructor
{
	hours = h;
	minutes = m;
}
void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60; //divi
	minutes %= 60; // get the remainder
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::Sum(const Time & t) const
{
	Time sum;
	Sum.minutes = minutes + t.minutes;
	Sum.hours = hours + t.hours+Sum.minutes/60;
	Sum.minutes %= 60;
	return Sum;
}
void Time::Show() const
{
	std::cout << hours << " hours, " << minutes << " minutes";
}


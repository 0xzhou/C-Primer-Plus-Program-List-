// mytime2.cpp -- implementing Time methods
#include<iostream>
#include"L11.7_mytime2.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int hours_, int minutes_)
{
	hours = hours_;
	minutes = minutes_;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
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

Time Time::operator+(const Time & t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours;
	sum.hours = sum.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator-(const Time & t) const
{
	Time diff;
	int tot1, tot2;
	tot1 = t.minutes + 60 * t.hours;
	tot2 = minutes + 60 * hours;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}

Time Time::operator*(double n) const
{
	Time result;
	int total;
	total = n * hours * 60 + n * minutes;
	result.minutes = total % 60;
	result.hours = total / 60;
	return result;
}

void Time::show() const
{
	std::cout << hours << " hours, " << minutes << " minutes";
}
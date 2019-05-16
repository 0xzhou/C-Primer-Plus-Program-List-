// mytime3.h -- Time class with friends
#ifndef MYTIME_H_
#define MTTIME_H_
#include<iostream>

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset();
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time & t) const;
	Time operator-(const Time & t) const;
	Time operator*(double n) const;
	friend Time operator*(double m, const Time &)
	{
		return t * m;
	}
	friend std::ostream & operator<<(std::ostream & os, const Time & t);
};
#endif // !MYTIME_H_


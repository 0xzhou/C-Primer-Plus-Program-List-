// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn; // integer division
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

// construct Stonewt object from stone, double value
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stone * Lbs_per_stn + lbs;
}

// default constructor
Stonewt::Stonewt()
{
	stone = 0;
	pds_left = 0.0;
	pounds = 0.0;
}

Stonewt::~Stonewt()
{}

// show weight in stones
void Stonewt::show_stn() const
{
	cout << stone << " stones, " << pds_left << " pounds\n";
}

// show weight in pounds
void Stonewt::show_lbs() const
{
	cout << pounds << " pounds\n";
}
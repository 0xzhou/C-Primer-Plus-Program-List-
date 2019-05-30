// stonewt1.cpp -- Stonewt class methods + conversion functions
#include<iostream>
using std::cout;
#include "stonewt1.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double pds) 
{
	pound = pds;
	stone = int(pds) / Lbs_per_stone;
	pds_left = int(pds) % Lbs_per_stone+pds-int(pds);
}

Stonewt::Stonewt(int n, double pds_l)
{
	stone = n;
	pds_left = pds_l;
	pound = stone * Lbs_per_stone + pds_l;
}

Stonewt::Stonewt()
{
	stone = pds_left = pound = 0;
}

Stonewt::~Stonewt()
{}

// show the weight in stones
void Stonewt::show_stn() const
{
	cout << stone << " stones, " << pound << " pounds\n";
}

void Stonewt::show_lbs() const
{
	cout << pound << " pounds\n";
}

Stonewt::operator int() const
{
	return int(pound + 0.5);
}

Stonewt::operator double() const
{
	return pound;
}

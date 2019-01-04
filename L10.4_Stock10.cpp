// stock10.cpp -- Stock class with constructors, destructor added
#include<iostream>
#include "L10.4_Stock10.h"

//constructors (verbose versions)
Stock::Stock() //default construcotr
{
	std::cout << "Default constructor called\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
Stock::Stock(const std::string & co, long n, double pr)
{
	std::cout << "Constructor using " << co << " called\n";
	company = co;
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative; "
			<< company << " shares set to 0.\n";

	}
}
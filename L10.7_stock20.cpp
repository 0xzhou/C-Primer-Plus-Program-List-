// stock20.cpp -- augmented version
#include<iostream>
#include"stock20.h"

//constructors
Stock::Stock()
{
	company = "no name";
	shares = 0;
	share_value = 0.0;
	total_value = 0.0;
}

Stock::Stock(const std::string & co, long n = 0, double pr = 0.0)
{
	company = co;
	if (n < 0) {
		std::cout << "Number of shares can't be negative;"
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = 0;
	shares = n;
	share_value = pr;
	set_tot();
}

// class destructor
Stock::~Stock()
{
}

// other methods
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can¡¯t be negative. "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_value = price;
		set_tot();
	}
}
void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares sold can¡¯t be negative. "
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You can¡¯t sell more than you have! "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_value = price;
		set_tot();
	}
}
void Stock::update(double price)
{
	share_value = price;
	set_tot();
}
void Stock::show() const
{
	using std::cout;
	using std::ios_base;
	// set format to #.###
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	cout << "Company: " << company
		<< " Shares: " << shares << '\n';
	cout << " Share Price: $" << share_value;
	// set format to #.##
	cout.precision(2);
	cout << " Total Worth: $" << total_value << '\n';
	// restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}

const Stock & Stock::topval(const Stock & s) const
{
	if (s.total_value > total_value)
		return s;
	else
		return *this;
}




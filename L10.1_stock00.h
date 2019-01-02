//stock00.h -- Stock class interface 
//version 00
#ifndef STOCK00_H_
#define STOCK00_H_

#include<string>

class Stock //class declaration
//The syntax identifies Stock as the type name for this new class.This declaration enables you to declare
//variables, called objects, or instances, of the Stock type.
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	void acquire(const std::string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void upgrate(double price);
	void show();
};//note semicolon at the end

#endif

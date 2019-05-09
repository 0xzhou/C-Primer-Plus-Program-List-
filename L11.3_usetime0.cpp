//usestock0.cpp -- the client program
//compile with stock00.cpp and have stock00.h present in the same directory or folder
#include<iostream>
#include"stock00.h"
int main()
{
	Stock flutty_the_cat;
	flutty_the_cat.acquire("NanoSmart", 20, 12.50);//"NanoSmart" is the name of shares
	flutty_the_cat.show();
	flutty_the_cat.buy(15, 18.125);
	flutty_the_cat.show();
	flutty_the_cat.sell(400, 20.00);
	flutty_the_cat.show();
	flutty_the_cat.buy(300000, 40.125);
	flutty_the_cat.show();
	flutty_the_cat.sell(300000, 0.125);
	flutty_the_cat.show();
	return 0;
}


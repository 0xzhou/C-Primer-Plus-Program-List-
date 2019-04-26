// mixtypes.cpp -- some type combinations
#include<iostream>

struct antarctica_years_end
{
	int year;
	/*some really interesting data, etc.*/
};

int main()
{
	antarctica_years_end s01, s02, s03; // s01,s02,s03 are structures
	s01.year = 1998; // access members using the membership operator
	antarctica_years_end * pa = &s02; // create a pointer to such a structure
	pa->year = 1999; // use indirect membership operator to access members
	antarctica_years_end trio[3]; // array of 3 structures
	trio[0].year = 2003; // use the membership operator to acccess member
	std::cout << trio->year << std::endl;
	const antarctica_years_end * arp[3] = {&s01,&s02,&s03};
	std::cout << arp[1]->year << std::endl;
	const antarctica_years_end ** ppa = arp;
	/* Here, arp is the name of an array; hence, it is the address of its first element.
	But, it first element is a pointer, so ppa has to be a pointer to a pointer to const 
	antarctica_years_end*/
	auto ppb = arp;
	std::cout << (*ppa)->year << std::endl;
	std::cout << (*(ppb + 1))->year << std::endl;
	return 0;
}

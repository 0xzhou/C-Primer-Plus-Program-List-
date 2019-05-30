// stonewt1.h --revised definition for the Stonewt class
#ifndef STONEWT1_H_
#define STONEWT1_H_
class Stonewt
{
private:
	enum { Lbs_per_stone=14 }; // a way to define a constant
	int stone;
	double pds_left;
	double pound;
public:
	Stonewt(int n);
	Stonewt(double pds);
	Stonewt(int n, double pds_l);
	Stonewt();
	~Stonewt();
	void show_stn() const;
	void show_lbs() const;
	// conversion functions
	operator int() const;
	operator double() const;
};

#endif // !1

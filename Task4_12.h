#pragma once
#include "Template.h"
class Task4_12
{
	struct Fraction
	{
		int numerator, denominator;
	};
private:
	void input(Fraction&, Fraction&, bool&);
	bool check(Fraction);
	void calculate(Fraction, Fraction, char, bool&);
	void reduceFraction(int&, int&);
public:
	Task4_12();
	~Task4_12();
	void startTask();
};


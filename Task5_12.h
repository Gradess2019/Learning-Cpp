#pragma once
#include "Template.h"
class Task5_12
{
public:
	Task5_12();
	~Task5_12();
	void startTask();
private:
	struct Fraction
	{
		int numerator, denominator;
	};
	void input(Fraction&, char&);
	bool check(Fraction, char);
	Fraction calculate(Fraction, Fraction, char);
	void reduceFraction(int&, int&);
	Fraction fadd(Fraction, Fraction);
	Fraction fsub(Fraction, Fraction);
	Fraction fmul(Fraction, Fraction);
	Fraction fdiv(Fraction, Fraction);
};


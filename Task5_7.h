#pragma once
#include "Template.h"
class Task5_7
{
public:
	Task5_7();
	~Task5_7();
	void startTask();
private:
	void input(char&, int&, long&, float&, double&);
	void power(char, int);
	void power(int, int);
	void power(long, int);
	void power(float, int);
	void power(double, int);
	void inputNumber(char&);
	void inputNumber(int&);
	void inputNumber(long&);
	void inputNumber(float&);
	void inputNumber(double&);
};


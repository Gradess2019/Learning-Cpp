#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
class Task4_8
{
private:
	struct Fraction
	{
		int numerator, denominator;
	};
public:
	Task4_8();
	~Task4_8();
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	void startTask();
	bool input(Fraction&, Fraction&, char, char&);
	bool checkDelimiter(char);
	void sum(Fraction, Fraction);
	
	void setColorSuccess();
	void setColorError();
	void setColorDefault();
};


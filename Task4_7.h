#pragma once
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;

class Task4_7
{
	enum Etype
	{
		laborer, secretary, manager, accountant, executive, researcher
	};
	struct Date
	{
		int day, month, year;
	};
	struct Employee
	{
		int number;
		float salary;
		Etype etype;
		Date date;
	};
public:
	Task4_7();
	~Task4_7();
	void startTask();
	bool checkErrors(bool isWrongNumber, bool isWrongSalary, bool isWrongSymbol, bool isWrongDate);
	bool checkDate(Date date, char delimiter);
	string getEtype(Etype etype);
	string getDate(Date date);
	void resetErrors(bool& isWrongNumber, bool& isWrongSalary, bool& isWrongSymbol, bool& isWrongDate);
};


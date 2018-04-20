#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

class Task4_5
{
	struct Date
	{
		int day, month, year;
	};
public:
	Task4_5();
	~Task4_5();
	void startTask();
	bool check(Date&, char&);
};


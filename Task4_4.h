#pragma once
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
class Task4_4
{
	struct Employee
	{
		int number;
		float salary;
	};
public:
	Task4_4();
	~Task4_4();
	void startTask();
	bool check(int&, float&);
};


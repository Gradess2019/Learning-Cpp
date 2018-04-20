#pragma once
#include "Template.h"
class Task4_10
{
private:
	struct Sterling
	{
		int pounds = 0, shillings = 0, pence = 0;
	};
public:
	Task4_10();
	~Task4_10();
	void startTask();
	bool input(Sterling&, char&);
	bool check(int);
	void calculate(Sterling&);
};


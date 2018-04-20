#pragma once
#include "Template.h"
class Task5_5
{
public:
	Task5_5();
	~Task5_5();
	void startTask();
private:
	void input(int&, int&, int&);
	void inputNumber(int&);
	bool check(int&, int&, int&);
	unsigned long hms_to_secs(int, int, int);
};


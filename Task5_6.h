#pragma once
#include "Template.h"
class Task5_6
{
public:
	Task5_6();
	~Task5_6();
	void startTask();
private:
	struct Time
	{
		int hours, minutes, seconds;
	};
	void input(Time&);
	void inputNumber(int&);
	bool check(Time&);
	unsigned long time_to_secs(Time);
	Time secs_to_time(unsigned long);
};


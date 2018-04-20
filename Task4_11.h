#pragma once
#include "Template.h"

class Task4_11
{
private:
	struct Time
	{
		int hours, minutes, seconds;
	};
	void input(Time &firstTime, Time &secondTime, bool&);
	Time calculate(Time, Time);
	bool check(Time, char);
	void transfer(Time&);
public:
	Task4_11();
	~Task4_11();
	void startTask();
};


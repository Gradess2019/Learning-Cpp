#pragma once
#include "Template.h"
class Task5_9
{
public:
	Task5_9();
	~Task5_9();
	void startTask();
private:
	struct Time
	{
		int hours, minutes, seconds;
	};
	void input(Time&, char&);
	bool check(Time&, char);
	void swap(Time&, Time&);
};


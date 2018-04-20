#pragma once
#include "Template.h"
class Task5_4
{
public:
	Task5_4();
	~Task5_4();
	void startTask();
private:
	struct Distance
	{
		int feet;
		float inches;
	};
	void inputDistance(Distance&);
	bool checkDistance(Distance&);
	Distance compareDistances(Distance, Distance);
};


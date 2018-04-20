#pragma once
#include "Template.h"
class Task5_11
{
public:
	Task5_11();
	~Task5_11();
	void startTask();
private:
	struct Sterling
	{
		int pounds = 0, shillings = 0, pence = 0;
	};
	void input(char&, char&, int&, int&, int&);
	bool check(char, char, int&, int&, int&);
	Sterling createSterling(int, int, int);
	Sterling sumSterlings(Sterling&, Sterling&);
};


#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
class Task4_9
{
private:
	struct Time
	{
		int hours, minutes, seconds;
	};
public:
	Task4_9();
	~Task4_9();
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	void startTask();
	bool input(Time&, char&);
	bool check(Time, char);
	unsigned long getResult(Time);

	void setColorSuccess();
	void setColorError();
	void setColorDefault();
	void setColorWarning();
};


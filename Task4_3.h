#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
class Task4_3
{
	struct Distance
	{
		int feet;
		float inches;
	};

	struct Volume
	{
		Distance length, width, height;
	};
public:
	Task4_3();
	~Task4_3();
	void startTask();
	bool check(int&, float&);
	float getVolumeRoom(Volume&);
};


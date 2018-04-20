#pragma once
#include <iostream>
using namespace std;
class Task2_3
{
public:
	Task2_3();
	~Task2_3();
public: void startTask() {
	const int number = 10;
	int copyNumber = number*2;
	cout << number << endl;
	cout << (number * 2) << endl;
	cout << --copyNumber << endl;
}
};


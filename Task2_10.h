#pragma once
#include <iostream>
using namespace std;
class Task2_10
{
public:
	Task2_10();
	~Task2_10();
public: void startTask() {
	int funts = 0;
	int shils = 0;
	int pens = 0;
	cout << "¬ведите количество фунтов: ";
	cin >> funts;
	cout << "¬ведите количество шиллингов: ";
	cin >> shils;
	cout << "¬ведите количество пенсов: ";
	cin >> pens;
	double result = ((12 * shils + pens) / 2.4);
	cout << "ƒес€тичных фунтов: " << 'J' << funts << '.' << result << endl;
}
};


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
	cout << "������� ���������� ������: ";
	cin >> funts;
	cout << "������� ���������� ���������: ";
	cin >> shils;
	cout << "������� ���������� ������: ";
	cin >> pens;
	double result = ((12 * shils + pens) / 2.4);
	cout << "���������� ������: " << 'J' << funts << '.' << result << endl;
}
};


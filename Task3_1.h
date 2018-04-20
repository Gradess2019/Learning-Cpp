#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
class Task3_1
{
public:
	Task3_1();
	~Task3_1();
public: void startTask() {
	cout << "¬ведите число: ";
	int number;
	cin >> number;
	cout << endl;
	int sum = number;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 10; j++)
		{
			cout << sum << " ";
			sum += number;
		}
		cout << endl;
	}
	_getch();
}
};


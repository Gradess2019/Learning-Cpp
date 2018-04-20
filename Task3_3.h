#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
class Task3_3
{
public:
	Task3_3();
	~Task3_3();
	void startTask() {
		long number = 0l;
		cout << "Введите число: ";
		for (int i = 0; i < 6; i++)
		{
			number = number * 10 + (_getche() - '0');
		}
		cout << endl << "Вы ввели число: " << number << endl;
		_getch();
	}
};


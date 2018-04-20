#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

class Task3_2
{
public:
	Task3_2();
	~Task3_2();

public: void startTask() {
		cout << "Нажмите 1 для перевода шкалы Цельсия в шкалу Фаренгейта," << endl;
		cout << "Нажмите 2 для перевода шкалы Фаренгейта в шкалу Цельсия.";
		float number;
		char choice = _getch();
		if (choice == '1') {
			cout << endl << "Введите температуру по Цельсию: ";
			cin >> number;
			cout << "Значение по Фаренгейту: " << ((number * 1.8) + 32) << endl;
		}
		else if (choice == '2') {
			cout << endl << "Введите температуру по Фаренгейту: ";
			cin >> number;
			cout << "Значение по Цельсию: " << ((number - 32) / 1.8) << endl;
		}
		_getch();
	}
};


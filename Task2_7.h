#pragma once
#include <iostream>
using namespace std;
class Task2_7
{
public:
	Task2_7();
	~Task2_7();
public: void startTask() {
	cout << "Введите температуру в градусах по Цельсию: ";
	float temperature = 0;
	cin >> temperature;
	cout << "Температура по Фаренгейту: " << (temperature * 9 / 5 + 32) << endl;
}
};


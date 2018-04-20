#pragma once
#include <iostream>
using namespace std;

class Task2_6
{
public:
	Task2_6();
	~Task2_6();
public: void startTask() {
	cout << "Введите сумму в $: ";
	float number = 0;
	cin >> number;
	cout << "\nЭкввалентные суммы в других валютах: " << endl;
	cout << "Фунт стерлингов: " << number*1.487f << endl <<
		"Франк: " << number*0.172f << endl <<
		"Немецкая марка: " << number*0.584f << endl <<
		"Японский йен: " << number*0.00955f << endl;
}

};


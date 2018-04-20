#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
class Task2_11
{
public:
	Task2_11();
	~Task2_11();
public: void startTask() {
	cout << setiosflags(ios::left) << setw(15) << "Фамилия" << setw(12) << "Имя" << setw(15) << "Адрес" << setw(25) << "Город" << endl
		<< setw(15) << "Петров" << setw(12) << "Василий" << setw(15) << "Кленовая 16" << setw(25) << "Санкт-Петербург" << endl
		<< setw(15) << "Иванов" << setw(12) << "Сергей" << setw(15) << "Осиновая 3" << setw(25) << "Находка" << endl
		<< setw(15) << "Сидоров" << setw(12) << "Иван" << setw(15) << "Березовая 21" << setw(25) << "Калининград" << endl;
}
};


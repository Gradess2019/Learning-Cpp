#pragma once
#include <iostream>
using namespace std;
class Task2_9
{
public:
	Task2_9();
	~Task2_9();
public: void startTask() {
	int firstNum_1 = 0;
	int secondNum_1 = 0;
	int firstNum_2 = 0;
	int secondNum_2 = 0;
	char dummychar;
	cout << "¬ведите первую дробь: ";
	cin >> firstNum_1 >> dummychar >> secondNum_1;
	cout << "¬ведите вторую дробь: ";
	cin >> firstNum_2 >> dummychar >> secondNum_2;
	int result_1 = firstNum_1 * secondNum_2 + secondNum_1 * firstNum_2;
	int result_2 = secondNum_1 * secondNum_2;
	dummychar = '/';
	cout << "—умма дробей равна: " << result_1 << dummychar << result_2 << endl;
}
};


#pragma once
#include <iostream>
#include <ctype.h>
using namespace std;
class Task2_5
{
public:
	Task2_5();
	~Task2_5();
public: void startTask() {
	cout << "������� ���������� �����: ";
	char letter;
	cin >> letter;
	cout << endl << "��������: " << islower(letter) << endl;
}
};


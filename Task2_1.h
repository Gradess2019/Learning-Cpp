#pragma once
#include <iostream>
using namespace std;
class Task2_1
{
public:
	Task2_1();
	~Task2_1();
public: void startTask() {
	float numGallons;
	cout << "������� ����� ��������: ";
	cin >> numGallons;
	cout << "����� �����: " << (numGallons*7.481f) << endl;
	}
};


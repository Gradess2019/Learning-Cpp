#pragma once
#include <iostream>
using namespace std;

class Task2_6
{
public:
	Task2_6();
	~Task2_6();
public: void startTask() {
	cout << "������� ����� � $: ";
	float number = 0;
	cin >> number;
	cout << "\n������������ ����� � ������ �������: " << endl;
	cout << "���� ����������: " << number*1.487f << endl <<
		"�����: " << number*0.172f << endl <<
		"�������� �����: " << number*0.584f << endl <<
		"�������� ���: " << number*0.00955f << endl;
}

};


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
	cout << setiosflags(ios::left) << setw(15) << "�������" << setw(12) << "���" << setw(15) << "�����" << setw(25) << "�����" << endl
		<< setw(15) << "������" << setw(12) << "�������" << setw(15) << "�������� 16" << setw(25) << "�����-���������" << endl
		<< setw(15) << "������" << setw(12) << "������" << setw(15) << "�������� 3" << setw(25) << "�������" << endl
		<< setw(15) << "�������" << setw(12) << "����" << setw(15) << "��������� 21" << setw(25) << "�����������" << endl;
}
};


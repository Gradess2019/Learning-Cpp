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
		cout << "������� 1 ��� �������� ����� ������� � ����� ����������," << endl;
		cout << "������� 2 ��� �������� ����� ���������� � ����� �������.";
		float number;
		char choice = _getch();
		if (choice == '1') {
			cout << endl << "������� ����������� �� �������: ";
			cin >> number;
			cout << "�������� �� ����������: " << ((number * 1.8) + 32) << endl;
		}
		else if (choice == '2') {
			cout << endl << "������� ����������� �� ����������: ";
			cin >> number;
			cout << "�������� �� �������: " << ((number - 32) / 1.8) << endl;
		}
		_getch();
	}
};


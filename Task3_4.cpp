#include "stdafx.h"
#include "Task3_4.h"


Task3_4::Task3_4()
{
}


Task3_4::~Task3_4()
{
}

void Task3_4::startTask() {
	do {
		cout << "������� ������ �������, �������� � ������ �������: ";
		float num1, num2;
		char operation;
		cin >> num1 >> operation >> num2;
		switch (operation)
		{
		case '+':
			cout << "��������� �����: " << (num1 + num2) << endl;
			break;
		case '-':
			cout << "��������� �����: " << (num1 - num2) << endl;
			break;
		case '*':
			cout << "��������� �����: " << (num1 * num2) << endl;
			break;
		case '/':
			cout << "��������� �����: " << (num1 / num2) << endl;
			break;
		default:
			cout << "����������� ��������!" << endl;
			break;
		}
		cout << "��������� ��� ���� ��������? (y/n)" << endl;
	} while ((_getch()) == 'y');
}
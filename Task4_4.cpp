#include "stdafx.h"
#include "Task4_4.h"


Task4_4::Task4_4()
{
}
Task4_4::~Task4_4()
{
}

void Task4_4::startTask()
{
	char accept = 'y';
	do
	{
		Employee e1, e2, e3;
		cout << "������� ����� � �������� ������� ����������: ";
		cin >> e1.number >> e1.salary;
		if (check(e1.number, e1.salary))
		{
			continue;
		}
		cout << "������� ����� � �������� ������� ����������: ";
		cin >> e2.number >> e2.salary;
		if (check(e2.number, e2.salary))
		{
			continue;
		}
		cout << "������� ����� � �������� �������� ����������: ";
		cin >> e3.number >> e3.salary;
		if (check(e3.number, e3.salary))
		{
			continue;
		}
		
		cout << setw(10) << "�����:" << setw(10) << "��������:" << endl
			<< setw(10) << e1.number << setw(10) << e1.salary << endl
			<< setw(10) << e2.number << setw(10) << e2.salary << endl
			<< setw(10) << e3.number << setw(10) << e3.salary << endl;
		cout << "����������? (y/n)" << endl;
		accept = _getch();
	} while ((accept != 'n') && (accept == 'y'));
}

bool Task4_4::check(int &number, float &salary)
{
	if ((number < 0) && (salary < 0.0f))
	{
		cout << "�����/�������� ���������� �� ����� ���� �������������!" << endl;
		return true;
	}
	return false;
}

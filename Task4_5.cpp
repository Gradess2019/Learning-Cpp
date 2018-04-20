#include "stdafx.h"
#include "Task4_5.h"


Task4_5::Task4_5()
{
}


Task4_5::~Task4_5()
{
}

void Task4_5::startTask()
{
	char accept = 'y';
	do
	{
		Date date;
		char delimiter = '/';
		cout << "������� ���� � ������� ��/��/��: ";
		cin >> date.day >> delimiter >> date.month >> delimiter >> date.year;
		if (check(date, delimiter))
		{
			continue;
		}
		cout << "�� ����� ����: " << date.day << delimiter << date.month << delimiter << date.year << endl;
		cout << "����������? (y/n)" << endl;
		accept = _getch();
	} while ((accept != 'n') && (accept == 'y'));
}

bool Task4_5::check(Date &date, char &delimiter)
{
	if (delimiter != '/')
	{
		cout << "������! �������� ������ ����� ����!" << endl;
		return true;
	}
	if ((date.day < 0) || (date.day > 31))
	{
		cout << "������! ������� ������ ����!" << endl;
		return true;
	}
	if ((date.month < 0) || (date.month > 12))
	{
		cout << "������! ������� ������ �����!" << endl;
		return true;
	}
	if (date.year < 0)
	{
		cout << "������! ������� ������ ���!" << endl;
		return true;
	}
	return false;
}

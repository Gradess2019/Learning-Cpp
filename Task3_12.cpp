#include "stdafx.h"
#include "Task3_12.h"


Task3_12::Task3_12()
{
}


Task3_12::~Task3_12()
{
}



void Task3_12::startTask()
{
	int a = 0, b = 1, c = 0, d = 1;
	int resultNumerator = 0, resultDenominator = 0;
	char delimiter = '/', accept = 'y';
	do
	{
		cout << "======================" << endl;
		cout << "������� ������ �����: ";
		cin >> a >> delimiter >> b;
		
		if (check(delimiter, b))
		{
			continue;
		}

		cout << "������� ��������: ";
		char operation;
		cin >> operation;

		cout << "������� ������ �����: ";
		cin >> c >> delimiter >> d;

		if (check(delimiter, d))
		{
			continue;
		}

		switch (operation)
		{
		case '+': {
			resultNumerator = (a * d) + (b * c);
			resultDenominator = b * d;
			break;
		}
		case '-': {
			resultNumerator = (a * d) - (b * c);
			resultDenominator = b * d;
			break;
		}
		case '*': {
			resultNumerator = a * c;
			resultDenominator = b * d;
			break;
		}
		case '/': {
			resultNumerator = a * d;
			resultDenominator = b * c;
			break;
		}
		default:
			cout << "����������� ��������!" << endl;
			break;
		}

		cout << "���������: " << resultNumerator << '/' << resultDenominator << endl;
		cout << "����������? (y/n)" << endl;
		accept = _getch();
	} while ((accept != 'n') && (accept == 'y'));
}

bool Task3_12::check(char &delimiter, int &denominator)
{
	if (delimiter != '/')
	{
		cout << "������! ������ ����� ���: a/b" << endl;
		return true;
	}

	if (denominator == 0)
	{
		cout << "������! ������ �� ���� ������!" << endl;
		return true;
	}
	return false;
}

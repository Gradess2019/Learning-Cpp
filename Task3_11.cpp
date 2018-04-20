#include "stdafx.h"
#include "Task3_11.h"

Task3_11::Task3_11()
{
}

Task3_11::~Task3_11()
{
}

void Task3_11::startTask()
{
	cout << "����� �������� �������: + - * /" << endl << "��������: ";
	char operation = 'n';
	cin >> operation;
	switch (operation)
	{
	case '+': {
		int funts1 = 0, shils1 = 0, pens1 = 0;
		int funts2 = 0, shils2 = 0, pens2 = 0;
		char delimiter = 'J', point = '.';
		
		cout << "������� ������ �����: ";
		cin >> delimiter >> funts1 >> point >> shils1 >> point >> pens1;
		cout << "������� ������ �����: ";
		cin >> delimiter >> funts2 >> point >> shils2 >> point >> pens2;
		
		funts1 += funts2;
		shils1 += shils2;
		pens1 += pens2;

		checkMoney(funts1, shils1, pens1);

		cout << "��������� �������� �����: J" << funts1 << '.' << shils1 << '.' << pens1 << endl;
		break;
	}
	case '-': {
		int funts1 = 0, shils1 = 0, pens1 = 0;
		int funts2 = 0, shils2 = 0, pens2 = 0;
		char delimiter = 'J', point = '.';

		cout << "������� ������ �����: ";
		cin >> delimiter >> funts1 >> point >> shils1 >> point >> pens1;
		cout << "������� ������ �����: ";
		cin >> delimiter >> funts2 >> point >> shils2 >> point >> pens2;

		funts1 -= funts2;
		shils1 -= shils2;
		pens1 -= pens2;

		checkMoney(funts1, shils1, pens1);		

		cout << "��������� ��������� �����: J" << funts1 << '.' << shils1 << '.' << pens1 << endl;
		break;
	}
	case '*': {
		int funts = 0, shils = 0, pens = 0;
		int multiplier = 1;
		char delimiter = 'J', point = '.';
		cout << "������� �������� �����: ";
		cin >> delimiter >> funts >> point >> shils >> point >> pens;
		cout << "������� ���������: ";
		cin >> multiplier;

		funts *= multiplier;
		shils *= multiplier;
		pens *= multiplier;

		checkMoney(funts, shils, pens);
		
		cout << "��������� ��������� �����: J" << funts << point << shils << point << pens << endl;
		break;
	}
	case '/': {
		int funts = 0, shils = 0, pens = 0;
		int multiplier = 1;
		char delimiter = 'J', point = '.';
		cout << "������� �������� �����: ";
		cin >> delimiter >> funts >> point >> shils >> point >> pens;
		cout << "������� ���������: ";
		cin >> multiplier;

		funts /= multiplier;
		shils /= multiplier;
		pens /= multiplier;

		checkMoney(funts, shils, pens);

		cout << "��������� ��������� �����: J" << funts << point << shils << point << pens << endl;
		break;
	}
	default:
		cout << "����������� ��������!" << endl;
		break;
	}
}

void Task3_11::checkMoney(int& funts, int& shils, int& pens)
{
	while (pens > 12)
	{
		shils++;
		pens -= 12;
	}

	while (shils > 20)
	{
		funts++;
		shils -= 20;
	}

	if (pens < 0)
	{
		pens += 12;
		shils--;
	}

	if (shils < 0)
	{
		shils += 20;
		funts--;
	}

	if (funts < 0)
	{
		funts = 0;
	}

	

	
}

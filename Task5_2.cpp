#include "stdafx.h"
#include "Task5_2.h"

Task5_2::Task5_2()
{
}
Task5_2::~Task5_2()
{
}

void Task5_2::startTask()
{
	char confirm = 'y';
	do {
		double number = 0.0;
		int powerNumber = 0;
		input(number, powerNumber);
		double resultNumber = power(number, powerNumber);
		Template::printResult(to_string(resultNumber));
		Template::askRestartProgram(confirm);
	} while (Template::getCondition(confirm));
}

void Task5_2::input(double &number, int &powerNumber)
{
	cout << "������� �����, ������� ����� �������� � �������: ";
	Template::setColorWarning();
	cin >> number;
	Template::setColorDefault();
	cout << "������� �������� �������: ";
	Template::setColorWarning();
	cin >> powerNumber;
	Template::setColorDefault();
}

double Task5_2::power(double number, int powerNumber)
{
	Template::printWarning("���������� �������...");
	double result = number;
	while (powerNumber > 1)
	{
		result *= number;
		powerNumber--;
	}
	Template::printWarning("���������� ������� ���������!");
	return result;
}
#include "stdafx.h"
#include "Task5_3.h"


Task5_3::Task5_3()
{
}


Task5_3::~Task5_3()
{
}

void Task5_3::startTask()
{
	char confirm = 'y';
	do 
	{
		int firstNumber = 0, secondNumber = 0;
		input(firstNumber, secondNumber);
		zeroSmaller(firstNumber, secondNumber);
		Template::askRestartProgram(confirm);
	} while (Template::getCondition(confirm));
}

void Task5_3::input(int &firstNumber, int &secondNumber)
{
	cout << "������� ������ �����: ";
	inputNumber(firstNumber);
	cout << "������� ������ �����: ";
	inputNumber(secondNumber);
}

void Task5_3::inputNumber(int &number)
{
	Template::setColorWarning();
	cin >> number;
	Template::setColorDefault();
}

void Task5_3::zeroSmaller(int &firstNumber, int &secondNumber)
{
	Template::printWarning("��������� ���� �����...");
	if (firstNumber > secondNumber)
	{
		secondNumber = 0;
	}
	else if (firstNumber < secondNumber) 
	{
		firstNumber = 0;
	}
	Template::printWarning("��������� ���� ���������!");
	Template::printResult("\n������ �����: " + to_string(firstNumber) + 
		"\n������ �����: " + to_string(secondNumber));
}

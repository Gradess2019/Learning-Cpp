#include "stdafx.h"
#include "Task5_7.h"


Task5_7::Task5_7()
{
}


Task5_7::~Task5_7()
{
}

void Task5_7::startTask()
{
	char confirm = 'y';
	do
	{
		char cNumber = 0;
		int iNumber = 0;
		long lNumber = 0l;
		float fNumber = 0.0f;
		double dNumber = 0.0;
		input(cNumber, iNumber, lNumber, fNumber, dNumber);
		cout << "Введиете число степени: ";
		int powerNumber = 1;
		inputNumber(powerNumber);
		Template::printWarning("Вычисление...");
		power(cNumber, powerNumber);
		power(iNumber, powerNumber);
		power(lNumber, powerNumber);
		power(fNumber, powerNumber);
		power(dNumber, powerNumber);
		Template::printWarning("Вычисление завершено!");
		Template::askRestartProgram(confirm);
	} while (Template::getCondition(confirm));
}

void Task5_7::input(char &cNumber, int &iNumber, long &lNumber, float &fNumber, double &dNumber)
{
	cout << "Введите символ: ";
	inputNumber(cNumber);
	cout << "Введите число (int): ";
	inputNumber(iNumber);
	cout << "Введите число (long): ";
	inputNumber(lNumber);
	cout << "Введите число (float): ";
	inputNumber(fNumber);
	cout << "Введите число (double): ";
	inputNumber(dNumber);
}

void Task5_7::power(char number, int powerNumber)
{
	int resultNumber = number;
	int saveInputNumber = number;
	for (int i = 1; i < powerNumber; i++)
	{
		resultNumber *= saveInputNumber;
	}
	Template::printSuccess("Char в степени " + to_string(powerNumber) + ": " + to_string(resultNumber));
}

void Task5_7::power(int number, int powerNumber)
{
	int resultNumber = number;
	int saveInputNumber = number;
	for (int i = 1; i < powerNumber; i++)
	{
		resultNumber *= saveInputNumber;
	}
	Template::printSuccess("Int в степени " + to_string(powerNumber) + ": " + to_string(resultNumber));
}

void Task5_7::power(long number, int powerNumber)
{
	long resultNumber = number;
	long saveInputNumber = number;
	for (int i = 1; i < powerNumber; i++)
	{
		resultNumber *= saveInputNumber;
	}
	Template::printSuccess("Long в степени " + to_string(powerNumber) + ": " + to_string(resultNumber));
}

void Task5_7::power(float number, int powerNumber)
{
	float resultNumber = number;
	float saveInputNumber = number;
	for (int i = 1; i < powerNumber; i++)
	{
		resultNumber *= saveInputNumber;
	}
	Template::printSuccess("Float в степени " + to_string(powerNumber) + ": " + to_string(resultNumber));
}

void Task5_7::power(double number, int powerNumber)
{
	double resultNumber = number;
	double saveInputNumber = number;
	for (int i = 1; i < powerNumber; i++)
	{
		resultNumber *= saveInputNumber;
	}
	Template::printSuccess("Double в степени " + to_string(powerNumber) + ": " + to_string(resultNumber));

}

void Task5_7::inputNumber(char &number)
{
	Template::setColorWarning();
	cin >> number;
	Template::setColorDefault();
}

void Task5_7::inputNumber(int &number)
{
	Template::setColorWarning();
	cin >> number;
	Template::setColorDefault();
}

void Task5_7::inputNumber(long &number)
{
	Template::setColorWarning();
	cin >> number;
	Template::setColorDefault();
}

void Task5_7::inputNumber(float &number)
{
	Template::setColorWarning();
	cin >> number;
	Template::setColorDefault();
}

void Task5_7::inputNumber(double &number)
{
	Template::setColorWarning();
	cin >> number;
	Template::setColorDefault();
}

#include "stdafx.h"
#include "Task5_8.h"


Task5_8::Task5_8()
{
}


Task5_8::~Task5_8()
{
}

void Task5_8::startTask()
{
	char confirm = 'y';
	do
	{
		int firstNumber = 0, secondNumber = 0;
		input(firstNumber, secondNumber);
		swap(firstNumber, secondNumber);
		Template::printResult("\nПервое число: " + to_string(firstNumber) + "\nВторое число: " + to_string(secondNumber));
		Template::askRestartProgram(confirm);
	} while (Template::getCondition(confirm));
}

void Task5_8::input(int &firstNumber, int &secondNumber)
{
	cout << "Введите первое число: ";
	inputNumber(firstNumber);
	cout << "Введите второй число: ";
	inputNumber(secondNumber);
}

void Task5_8::inputNumber(int &number)
{
	Template::setColorWarning();
	cin >> number;
	Template::setColorDefault();
}

void Task5_8::swap(int &firstNumber, int &secondNumber)
{
	Template::printWarning("Перестановка чисел...");
	int tempNumber = firstNumber;
	firstNumber = secondNumber;
	secondNumber = tempNumber;
	Template::printWarning("Перестановка чисел завершена!");
}

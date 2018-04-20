#include "stdafx.h"
#include "Task4_12.h"

Task4_12::Task4_12()
{
}
Task4_12::~Task4_12()
{
}

void Task4_12::startTask()
{
	char accept = 'y';
	do {
		Fraction firstFraction, secondFraction;
		char delimiter = '/';
		bool hasError = false;

		cout << "Введите первую дробь в формате a/b: ";
		cin >> firstFraction.numerator >> delimiter >> firstFraction.denominator;
		if (check(firstFraction))
		{
			hasError = true;
			continue;
		}

		cout << "Введите вторую дробь в формате a/b: ";
		cin >> secondFraction.numerator >> delimiter >> secondFraction.denominator;
		if (check(secondFraction))
		{
			hasError = true;
			continue;
		}
		cout << "Выберите операцию: + - * /" << endl << "Введите операцию: ";
		char operation = '0';
		cin >> operation;
		calculate(firstFraction, secondFraction, operation, hasError);
		cout << "Продолжить? (y/n)" << endl;
		accept = _getch();
	} while ((accept != 'n') && (accept == 'y'));
}


void Task4_12::input(Fraction &firstFraction, Fraction &secondFraction, bool &hasError)
{
}

bool Task4_12::check(Fraction fraction)
{
	if (fraction.denominator == 0)
	{
		Template::printError("На 0 делить нельзя!!!");
		Template::printWarning("Перезапуск программы...");
		return true;
	}
	else {
		return false;
	}
	
}

void Task4_12::calculate(Fraction firstFraction, Fraction secondFraction, char operation, bool &hasError)
{
	int resultNumerator = 0;
	int resultDenominator = 0;
	switch (operation)
	{
	case '+': {
		resultNumerator = (firstFraction.numerator * secondFraction.denominator) + (firstFraction.denominator * secondFraction.numerator);
		resultDenominator = firstFraction.denominator * secondFraction.denominator;
		break;
	}
	case '-': {
		resultNumerator = (firstFraction.numerator * secondFraction.denominator) - (firstFraction.denominator * secondFraction.numerator);
		resultDenominator = firstFraction.denominator * secondFraction.denominator;
		break;
	}
	case '*': {
		resultNumerator = firstFraction.numerator * secondFraction.numerator;
		resultDenominator = firstFraction.denominator * secondFraction.denominator;
		break;
	}
	case '/': {
		resultNumerator = firstFraction.numerator * secondFraction.denominator;
		resultDenominator = firstFraction.denominator * secondFraction.numerator;
		break;
	}
	default:
		Template::printError("Неизвестная операция!!!");
		Template::printWarning("Перезапуск программы...");
		hasError = true;
		break;
	}
	if (!hasError)
	{
		reduceFraction(resultNumerator, resultDenominator);
		string result = "";
		if (resultNumerator % resultDenominator == 0)
		{
			result = to_string(resultNumerator / resultDenominator);
		}
		else
		{
			result = to_string(resultNumerator) + "/" + to_string(resultDenominator);
		}
		Template::printResult(result);
	}
}

void Task4_12::reduceFraction(int &numerator, int &denominator)
{
	for (int i = 2; (i < numerator) && (i < denominator); i++)
	{
		if (((numerator % i) == 0) && ((denominator % 2) == i))
		{
			numerator /= i;
			denominator /= i;
			i = 1;
		}
	}

}

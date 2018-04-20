#include "stdafx.h"
#include "Task5_12.h"


Task5_12::Task5_12()
{
}


Task5_12::~Task5_12()
{
}

void Task5_12::startTask()
{
	char confirm = 'y';
	do
	{
		Fraction firstFraction, secondFraction, resultFraction;
		char operation = '.', delimiter = '/';
		input(firstFraction, delimiter);
		if (check(firstFraction, delimiter))
		{
			continue;
		}

		input(secondFraction, delimiter);
		if (check(secondFraction, delimiter))
		{
			continue;
		}

		cout << "Введите операцию + - * /: ";
		Template::setColorWarning();
		cin >> operation;
		Template::setColorDefault();
		if ((operation != '+') && (operation != '-') && (operation != '*') && (operation != '/'))
		{
			Template::printError("Неизвестная операция!");
			Template::printWarningRestart();
			continue;
		}
		resultFraction = calculate(firstFraction, secondFraction, operation);
		string stringResultFraction;
		if (resultFraction.numerator % resultFraction.denominator == 0)
		{
			stringResultFraction = to_string(resultFraction.numerator / resultFraction.denominator);
		}
		else
		{
			stringResultFraction = to_string(resultFraction.numerator) + "/" + to_string(resultFraction.denominator);
		}
		Template::printResult(stringResultFraction);
		Template::askRestartProgram(confirm);
	} while (Template::getCondition(confirm));
}

void Task5_12::input(Fraction &fraction, char &delimiter)
{
	cout << "Введите дробь в формате a/b: ";
	Template::setColorWarning();
	cin >> fraction.numerator >> delimiter >> fraction.denominator;
	Template::setColorDefault();
}

bool Task5_12::check(Fraction fraction, char delimiter)
{
	if (fraction.denominator == 0)
	{
		Template::printError("Знаменатель не может быть равен 0!");
		Template::printWarningRestart();
		return true;
	}
	else if (delimiter != '/')
	{
		Template::printError("Неверный формат дроби!");
		Template::printWarningRestart();
		return true;
	}
	return false;
}

Task5_12::Fraction Task5_12::calculate(Fraction firstFraction, Fraction secondFraction, char operation)
{
	switch (operation)
	{
	case '+':
	{
		return fadd(firstFraction, secondFraction);
	}

	case '-':
	{
		return fsub(firstFraction, secondFraction);
	}

	case '*':
	{
		return fmul(firstFraction, secondFraction);
	}

	case '/':
	{
		return fdiv(firstFraction, secondFraction);
	}
	default:
		Template::printError("Неизвестная операция!");
		exit(1);
		break;
	}
	return Fraction();
}

void Task5_12::reduceFraction(int &numerator, int &denominator)
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

Task5_12::Fraction Task5_12::fadd(Fraction firstFraction, Fraction secondFraction)
{
	int resultNumerator = 0;
	int resultDenominator = 1;
	resultNumerator = (firstFraction.numerator * secondFraction.denominator) + (firstFraction.denominator * secondFraction.numerator);
	resultDenominator = firstFraction.denominator * secondFraction.denominator;
	reduceFraction(resultNumerator, resultDenominator);
	Fraction resultFraction = { resultNumerator, resultDenominator };
	return resultFraction;
}

Task5_12::Fraction Task5_12::fsub(Fraction firstFraction, Fraction secondFraction)
{
	int resultNumerator = 0;
	int resultDenominator = 1;
	resultNumerator = (firstFraction.numerator * secondFraction.denominator) - (firstFraction.denominator * secondFraction.numerator);
	resultDenominator = firstFraction.denominator * secondFraction.denominator;
	reduceFraction(resultNumerator, resultDenominator);
	Fraction resultFraction = { resultNumerator, resultDenominator };
	return resultFraction;
}

Task5_12::Fraction Task5_12::fmul(Fraction firstFraction, Fraction secondFraction)
{
	int resultNumerator = 0;
	int resultDenominator = 1;
	resultNumerator = firstFraction.numerator * secondFraction.numerator;
	resultDenominator = firstFraction.denominator * secondFraction.denominator;
	reduceFraction(resultNumerator, resultDenominator);
	Fraction resultFraction = { resultNumerator, resultDenominator };
	return resultFraction;
}

Task5_12::Fraction Task5_12::fdiv(Fraction firstFraction, Fraction secondFraction)
{
	int resultNumerator = 0;
	int resultDenominator = 1;
	resultNumerator = firstFraction.numerator * secondFraction.denominator;
	resultDenominator = firstFraction.denominator * secondFraction.numerator;
	reduceFraction(resultNumerator, resultDenominator);
	Fraction resultFraction = { resultNumerator, resultDenominator };
	return resultFraction;
}


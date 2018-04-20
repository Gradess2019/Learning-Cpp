#include "stdafx.h"
#include "Task4_8.h"


Task4_8::Task4_8()
{
}


Task4_8::~Task4_8()
{
}

void Task4_8::startTask()
{
	char accept = 'y';
	do
	{
		char delimiter = '/';
		Fraction f1, f2;
		if (input(f1, f2, delimiter, accept))
		{
			continue;
		}
		sum(f1, f2);
		cout << "Продолжить? (y/n)" << endl;
		accept = _getch();
	} while ((accept != 'n') && (accept == 'y'));
}

bool Task4_8::input(Fraction &f1, Fraction &f2, char delimiter, char &accept)
{
	cout << "Введите первую дробь в формате a/b: ";
	cin >> f1.numerator >> delimiter >> f1.denominator;
	if (checkDelimiter(delimiter))
	{
		cout << "Попробовать ещё раз? (y/n)" << endl;
		accept = _getch();
		return true;
	}
	cout << "Введите вторую дробь в формате a/b: ";
	cin >> f2.numerator >> delimiter >> f2.denominator;
	if (checkDelimiter(delimiter))
	{
		cout << "Попробовать ещё раз? (y/n)" << endl;
		accept = _getch();
		return true;
	}
	return false;
}

bool Task4_8::checkDelimiter(char delimiter)
{
	if (delimiter != '/')
	{
		setColorError();
		cout << "Ошибка! Неверный формат дроби!" << endl;
		setColorDefault();
		return true;
	}
	else
	{
		return false;
	}
}

void Task4_8::sum(Fraction f1, Fraction f2)
{
	int result = 0;
	int numerator = ((f1.numerator * f2.denominator) + (f1.denominator * f2.numerator));
	int denominator = (f1.denominator * f2.denominator);

	if (((numerator) % denominator) == 0)
	{
		result = numerator / denominator;
		setColorSuccess();
		cout << "Результат сложения равен: " << result << endl;
		setColorDefault();
		return;
	}
	
	for (int i = 2; (i <= numerator) && (i <= denominator); i++)
	{
		if (((numerator % i) == 0) && ((denominator % i) == 0))
		{
			numerator /= i;
			denominator /= i;
			i = 1;
		}
	}

	setColorSuccess();
	cout << "Результат сложения равен: " << numerator << '/' << denominator << endl;
	setColorDefault();

	return;

	/*cout << "Результат сложения равен: " << ((f1.numerator * f2.denominator) + (f1.denominator * f2.numerator)) <<
		'/' << (f1.denominator * f2.denominator) << endl;*/
}

void Task4_8::setColorSuccess()
{
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 2));
}
void Task4_8::setColorError()
{
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
}
void Task4_8::setColorDefault()
{
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
}

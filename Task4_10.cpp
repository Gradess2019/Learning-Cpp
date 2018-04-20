#include "stdafx.h"
#include "Task4_10.h"


Task4_10::Task4_10()
{
}


Task4_10::~Task4_10()
{
}

void Task4_10::startTask()
{
	char accept = 'y';
	do
	{
		Sterling sterling;
		if (input(sterling, accept))
		{
			continue;
		}
		else {
			calculate(sterling);
			cout << "Продолжить? (y/n)" << endl;
			accept = _getch();
		}
	} while ((accept != 'n') && (accept == 'y'));
}

bool Task4_10::input(Sterling &sterling, char &accept)
{
	cout << "Введите число фунтов: ";
	cin >> sterling.pounds;
	if (check(sterling.pounds))
	{
		cout << "Попробовать ещё раз? (y/n)" << endl;
		accept = _getch();
		return true;
	}
	cout << "Введите число пенсов: ";
	cin >> sterling.pence;
	if (check(sterling.pence))
	{
		cout << "Попробовать ещё раз? (y/n)" << endl;
		accept = _getch();
		return true;
	}
	return false;
}

bool Task4_10::check(int num)
{
	if (num < 0)
	{
		Template::setColorError();
		cout << "Денежная единица не может быть отрицательной!!!" << endl;
		Template::setColorDefault();
		return true;
	}
	else {
		return false;
	}
}

void Task4_10::calculate(Sterling &sterling)
{
	while (sterling.pence > 12)
	{
		sterling.pence -= 12;
		sterling.shillings++;
		if (sterling.shillings > 20)
		{
			sterling.shillings -= 20;
			sterling.pounds++;
		}
	}
	Template::setColorSuccess();
	cout << "Сумма в старой денежной системе: " << 'J' << sterling.pounds <<
		'.' << sterling.shillings << '.' << sterling.pence << endl;
	Template::setColorDefault();
}


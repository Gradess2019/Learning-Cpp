#include "stdafx.h"
#include "Task5_5.h"


Task5_5::Task5_5()
{
}


Task5_5::~Task5_5()
{
}

void Task5_5::startTask()
{
	char confirm = 'y';
	do
	{
		int hours, minutes, seconds;
		input(hours, minutes, seconds);
		if (check(hours, minutes, seconds))
		{
			continue;
		}
		Template::printResult(to_string(hms_to_secs(hours, minutes, seconds)));
		Template::askRestartProgram(confirm);
	} while (Template::getCondition(confirm));
}

void Task5_5::input(int &hours, int &minutes, int &seconds)
{
	cout << "Введите количество часов: ";
	inputNumber(hours);
	cout << "Введите количество минут: ";
	inputNumber(minutes);
	cout << "Введите количество секунд: ";
	inputNumber(seconds);
}

void Task5_5::inputNumber(int &number)
{
	Template::setColorWarning();
	cin >> number;
	Template::setColorDefault();
}

bool Task5_5::check(int &hours, int &minutes, int &seconds)
{
	if (hours < 0)
	{
		Template::printError("Часы не могут иметь отрицательное значение!");
		Template::printWarning("Перезапуск программы...");
		return true;
	}
	else if (minutes < 0)
	{
		Template::printError("Минуты не могут иметь отрицательное значение!");
		Template::printWarning("Перезапуск программы...");
		return true;
	}
	else if (seconds < 0)
	{
		Template::printError("Часы не могут иметь отрицательное значение!");
		Template::printWarning("Перезапуск программы...");
		return true;
	}

	if (seconds >= 60)
	{
		Template::printWarning("Количество секунд больше или равно 60! Корректировка времени...");
		do
		{
			seconds -= 60;
			minutes++;
		} while (seconds >= 60);
		Template::printWarning("Корректировка времени завершена!");
	}
	if (minutes >= 60)
	{
		Template::printWarning("Количество минут больше или равно 60! Корректировка времени...");
		do
		{
			minutes -= 60;
			hours++;
		} while (minutes >= 60);
		Template::printWarning("Корректировка времени завершена!");
	}
	return false;
}

unsigned long Task5_5::hms_to_secs(int hours, int minutes, int seconds)
{
	return ((hours * 3600) + (minutes * 60) + seconds);
}

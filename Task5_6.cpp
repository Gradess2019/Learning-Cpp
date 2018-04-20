#include "stdafx.h"
#include "Task5_6.h"


Task5_6::Task5_6()
{
}


Task5_6::~Task5_6()
{
}

void Task5_6::startTask()
{
	char confirm = 'y';
	do
	{
		Time time;
		input(time);
		if (check(time))
		{
			continue;
		}
		unsigned long timeInSeconds = time_to_secs(time);
		Time resultTime = secs_to_time(timeInSeconds);
		string resultTimeInString = to_string(resultTime.hours) + ":" + to_string(resultTime.minutes) + ":" + to_string(resultTime.seconds);
		Template::printResult("\nВремя в секундах: " + to_string(timeInSeconds) + "\nВведённое время: " + resultTimeInString);
		Template::askRestartProgram(confirm);
	} while (Template::getCondition(confirm));
}

void Task5_6::input(Time &time)
{
	cout << "Введите часы: ";
	inputNumber(time.hours);
	cout << "Введите минуты: ";
	inputNumber(time.minutes);
	cout << "Введите секунды: ";
	inputNumber(time.seconds);
}

void Task5_6::inputNumber(int &number)
{
	Template::setColorWarning();
	cin >> number;
	Template::setColorDefault();
}

bool Task5_6::check(Time &time)
{
	Template::printWarning("Проверка времени...");
	if (time.hours < 0)
	{
		Template::printError("Часы не могут иметь отрицательное значение!");
		Template::printWarning("Перезапуск программы...");
		return true;
	}
	else if (time.minutes < 0)
	{
		Template::printError("Минуты не могут иметь отрицательное значение!");
		Template::printWarning("Перезапуск программы...");
		return true;
	}
	else if (time.seconds < 0)
	{
		Template::printError("Секунды не могут иметь отрицательное значение!");
		Template::printWarning("Перезапуск программы...");
		return true;
	}
	
	if (time.seconds >= 60)
	{
		Template::printWarning("Секунды имеют значение больше 60! Корректировка времени...");
		do
		{
			time.seconds -= 60;
			time.minutes++;
		} while (time.seconds >= 60);
		Template::printWarning("Корректировка времени завершена!");
	}

	if (time.minutes >= 60)
	{
		Template::printWarning("Минуты имеют значение больше 60! Корректировка времени...");
		do
		{
			time.minutes -= 60;
			time.hours++;
		} while (time.minutes >= 60);
		Template::printWarning("Корректировка времени завершена!");
	}
	Template::printWarning("Проверка времени завершена!");
	return false;
}

unsigned long Task5_6::time_to_secs(Time time)
{
	Template::printWarning("Перевод времени в секунды...");
	unsigned long result = ((time.hours * 3600) + (time.minutes * 60) + time.seconds);
	Template::printWarning("Перевод времени завершён!");
	return result;
}

Task5_6::Time Task5_6::secs_to_time(unsigned long timeInSeconds)
{
	Template::printWarning("Перевод секунд во время...");
	Time resultTime;
	int hours = timeInSeconds / 3600;
	int minutes = (timeInSeconds - hours * 3600) / 60;
	int seconds = (timeInSeconds - hours * 3600 - minutes * 60);
	resultTime = { hours,minutes,seconds };
	Template::printWarning("Перевод секунд завершен!");
	return resultTime;
}

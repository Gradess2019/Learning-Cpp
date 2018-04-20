#include "stdafx.h"
#include "Task4_11.h"


Task4_11::Task4_11()
{
}


Task4_11::~Task4_11()
{
}

void Task4_11::startTask()
{
	char accept = 'y';
	do {
		Time firstTime, secondTime, resultTime;
		unsigned long firstTimeInSeconds = 0, secondTimeInSeconds = 0;
		bool hasError = false;
		input(firstTime, secondTime, hasError);
		if (!hasError)
		{
			resultTime = calculate(firstTime, secondTime);
			string result = to_string(resultTime.hours) + ":" +
				to_string(resultTime.minutes) + ":" + to_string(resultTime.seconds);
			Template::printResult(result);
			cout << "Продолжить? (y/n)" << endl;
			accept = _getch();
			Template::printSeparator();
		}
		else
		{
			Template::printWarning("Перезапуск программы...");
			Template::printSeparator();
		}
		
	} while ((accept != 'n') && (accept == 'y'));
}

void Task4_11::input(Time &firstTime, Time &secondTime, bool &hasError)
{
	char delimiter = ':';
	cout << "Введите 1-е время в формате ЧЧ:ММ:СС: ";
	cin >> firstTime.hours >> delimiter >> firstTime.minutes >> delimiter >> firstTime.seconds;
	if (check(firstTime, delimiter))
	{
		hasError = true;
		return;
	}
	cout << "Введите 2-е время в формате ЧЧ:ММ:СС: ";
	cin >> secondTime.hours >> delimiter >> secondTime.minutes >> delimiter >> secondTime.seconds;
	if (check(secondTime, delimiter))
	{
		hasError = true;
		return;
	}
	
}


Task4_11::Time Task4_11::calculate(Time firstTime, Time secondTime)
{
	unsigned long firstTimeInSeconds = (firstTime.hours * 3600) + (firstTime.minutes * 60) + firstTime.seconds;
	unsigned long secondTimeInSeconds = (secondTime.hours * 3600) + (secondTime.minutes * 60) + secondTime.seconds;
	Time resultTime;
	unsigned long resultTimeInSeconds = firstTimeInSeconds + secondTimeInSeconds;
	int hours = static_cast<int>(resultTimeInSeconds / 3600);
	int minutes = static_cast<int>((resultTimeInSeconds - hours * 3600) / 60);
	int seconds = static_cast<int>((resultTimeInSeconds - hours * 3600) - minutes * 60);
	resultTime = { hours, minutes, seconds };
	Template::printWarning("Переход к проверке итогового времени...");
	transfer(resultTime);
	return resultTime;
}



bool Task4_11::check(Time time, char delimiter)
{
	if (time.hours < 0) {
		Template::printError("Часы не могут иметь отрицательное значение!");
		return true;
	}
	else if (time.minutes < 0) {
		Template::printError("Минуты не могут иметь отрицательное значение!");
		return true;
	}
	else if (time.seconds < 0) {
		Template::printError("Секунды не могут иметь отрицательное значение!");
		return true;
	}
	else if (delimiter != ':') {
		Template::printError("Неверный формат времени!");
		return true;
	}

	transfer(time);
	
	return false;
}

void Task4_11::transfer(Time &time)
{
	Template::printWarning("Проверка корректности времени...");
	Template::printWarning("Проверка секунд...");
	if (time.seconds > 60) {
		Template::printWarning("Секунды не могут иметь значение больше 60! Исправление...");
		while (time.seconds > 60)
		{
			time.seconds -= 60;
			time.minutes++;
		}
	}
	else {
		Template::printSuccess("Секунды проверены! Ошибок нет...");
	}

	Template::printWarning("Проверка минут...");
	if (time.minutes > 60) {
		Template::printWarning("Минуты не могут иметь значение больше 60! Исправление...");
		while (time.minutes > 60)
		{
			time.minutes -= 60;
			time.hours++;
		}
	}
	else {
		Template::printSuccess("Минуты проверены! Ошибок нет...");
	}

	Template::printWarning("Проверка часов...");
	if (time.hours > 23) {
		Template::printWarning("Часы не могут иметь значение больше 24! Перевод к 0...");
		time.hours = 0;
	}
	else {
		Template::printSuccess("Часы проверены! Ошибок нет...");
		Template::printSuccess("Проверка и исправление времени завершено!");
	}
}

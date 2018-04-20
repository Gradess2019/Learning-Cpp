#include "stdafx.h"
#include "Task4_9.h"


Task4_9::Task4_9()
{
}


Task4_9::~Task4_9()
{
}

void Task4_9::startTask()
{
	char accept = 'y';
	do
	{
		Time time;
		if (input(time, accept))
		{
			continue;
		}
		else
		{
			unsigned long totalseconds = getResult(time);
			setColorSuccess();
			cout << "Количество секунд в введённом времени: " << totalseconds << endl;
			setColorDefault();
			cout << "Продолжить? (y/n)" << endl;
			accept = _getch();
		}
	} while ((accept != 'n') && (accept == 'y'));
}

bool Task4_9::input(Time &time, char &accept)
{
	char delimiter = '/';
	cout << "Введите часы, минуты и секунды в формате часы/минуты/секунды: ";
	cin >> time.hours >> delimiter >> time.minutes >> delimiter >> time.seconds;
	if (check(time, delimiter))
	{
		cout << "Попробовать ещё раз? (y/n)" << endl;
		accept = _getch();
		return true;
	}
	else
	{
		return false;
	}
}

bool Task4_9::check(Time time, char delimiter)
{
	if (delimiter != '/')
	{
		setColorError();
		cout << "Ошибка! Неверный формат времени!" << endl;
		setColorDefault();
		return true;
	}
	if (time.hours < 0)
	{
		setColorError();
		cout << "Ошибка! Часы не могут иметь отрицаетльное значение!" << endl;
		setColorDefault();
		return true;
	}
	else if (time.minutes < 0)
	{
		setColorError();
		cout << "Ошибка! Минуты не могут иметь отрицаетльное значение!" << endl;
		setColorDefault();
		return true;
	}
	else if (time.seconds < 0)
	{
		setColorError();
		cout << "Ошибка! Секунды не могут иметь отрицаетльное значение!" << endl;
		setColorDefault();
		return true;
	}
	else
	{
		if (time.seconds > 60)
		{
			setColorWarning();
			cout << "Значение секунд больше 60! Корректировка времени..." << endl;
			setColorDefault();
			time.minutes++;
			time.seconds -= 60;
		}

		if (time.minutes > 60)
		{
			setColorWarning();
			cout << "Значение минут больше 60! Корректировка времени..." << endl;
			setColorDefault();
			time.hours++;
			time.minutes -= 60;
		}
		return false;
	}
}

unsigned long Task4_9::getResult(Time time)
{
	return ((time.hours * 3600) + (time.minutes * 60) + time.seconds);
}


void Task4_9::setColorSuccess()
{
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 2));
}
void Task4_9::setColorError()
{
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
}
void Task4_9::setColorDefault()
{
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
}
void Task4_9::setColorWarning()
{
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 6));
}

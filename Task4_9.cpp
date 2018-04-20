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
			cout << "���������� ������ � �������� �������: " << totalseconds << endl;
			setColorDefault();
			cout << "����������? (y/n)" << endl;
			accept = _getch();
		}
	} while ((accept != 'n') && (accept == 'y'));
}

bool Task4_9::input(Time &time, char &accept)
{
	char delimiter = '/';
	cout << "������� ����, ������ � ������� � ������� ����/������/�������: ";
	cin >> time.hours >> delimiter >> time.minutes >> delimiter >> time.seconds;
	if (check(time, delimiter))
	{
		cout << "����������� ��� ���? (y/n)" << endl;
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
		cout << "������! �������� ������ �������!" << endl;
		setColorDefault();
		return true;
	}
	if (time.hours < 0)
	{
		setColorError();
		cout << "������! ���� �� ����� ����� ������������� ��������!" << endl;
		setColorDefault();
		return true;
	}
	else if (time.minutes < 0)
	{
		setColorError();
		cout << "������! ������ �� ����� ����� ������������� ��������!" << endl;
		setColorDefault();
		return true;
	}
	else if (time.seconds < 0)
	{
		setColorError();
		cout << "������! ������� �� ����� ����� ������������� ��������!" << endl;
		setColorDefault();
		return true;
	}
	else
	{
		if (time.seconds > 60)
		{
			setColorWarning();
			cout << "�������� ������ ������ 60! ������������� �������..." << endl;
			setColorDefault();
			time.minutes++;
			time.seconds -= 60;
		}

		if (time.minutes > 60)
		{
			setColorWarning();
			cout << "�������� ����� ������ 60! ������������� �������..." << endl;
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

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
			cout << "����������? (y/n)" << endl;
			accept = _getch();
			Template::printSeparator();
		}
		else
		{
			Template::printWarning("���������� ���������...");
			Template::printSeparator();
		}
		
	} while ((accept != 'n') && (accept == 'y'));
}

void Task4_11::input(Time &firstTime, Time &secondTime, bool &hasError)
{
	char delimiter = ':';
	cout << "������� 1-� ����� � ������� ��:��:��: ";
	cin >> firstTime.hours >> delimiter >> firstTime.minutes >> delimiter >> firstTime.seconds;
	if (check(firstTime, delimiter))
	{
		hasError = true;
		return;
	}
	cout << "������� 2-� ����� � ������� ��:��:��: ";
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
	Template::printWarning("������� � �������� ��������� �������...");
	transfer(resultTime);
	return resultTime;
}



bool Task4_11::check(Time time, char delimiter)
{
	if (time.hours < 0) {
		Template::printError("���� �� ����� ����� ������������� ��������!");
		return true;
	}
	else if (time.minutes < 0) {
		Template::printError("������ �� ����� ����� ������������� ��������!");
		return true;
	}
	else if (time.seconds < 0) {
		Template::printError("������� �� ����� ����� ������������� ��������!");
		return true;
	}
	else if (delimiter != ':') {
		Template::printError("�������� ������ �������!");
		return true;
	}

	transfer(time);
	
	return false;
}

void Task4_11::transfer(Time &time)
{
	Template::printWarning("�������� ������������ �������...");
	Template::printWarning("�������� ������...");
	if (time.seconds > 60) {
		Template::printWarning("������� �� ����� ����� �������� ������ 60! �����������...");
		while (time.seconds > 60)
		{
			time.seconds -= 60;
			time.minutes++;
		}
	}
	else {
		Template::printSuccess("������� ���������! ������ ���...");
	}

	Template::printWarning("�������� �����...");
	if (time.minutes > 60) {
		Template::printWarning("������ �� ����� ����� �������� ������ 60! �����������...");
		while (time.minutes > 60)
		{
			time.minutes -= 60;
			time.hours++;
		}
	}
	else {
		Template::printSuccess("������ ���������! ������ ���...");
	}

	Template::printWarning("�������� �����...");
	if (time.hours > 23) {
		Template::printWarning("���� �� ����� ����� �������� ������ 24! ������� � 0...");
		time.hours = 0;
	}
	else {
		Template::printSuccess("���� ���������! ������ ���...");
		Template::printSuccess("�������� � ����������� ������� ���������!");
	}
}

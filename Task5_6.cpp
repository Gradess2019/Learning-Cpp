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
		Template::printResult("\n����� � ��������: " + to_string(timeInSeconds) + "\n�������� �����: " + resultTimeInString);
		Template::askRestartProgram(confirm);
	} while (Template::getCondition(confirm));
}

void Task5_6::input(Time &time)
{
	cout << "������� ����: ";
	inputNumber(time.hours);
	cout << "������� ������: ";
	inputNumber(time.minutes);
	cout << "������� �������: ";
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
	Template::printWarning("�������� �������...");
	if (time.hours < 0)
	{
		Template::printError("���� �� ����� ����� ������������� ��������!");
		Template::printWarning("���������� ���������...");
		return true;
	}
	else if (time.minutes < 0)
	{
		Template::printError("������ �� ����� ����� ������������� ��������!");
		Template::printWarning("���������� ���������...");
		return true;
	}
	else if (time.seconds < 0)
	{
		Template::printError("������� �� ����� ����� ������������� ��������!");
		Template::printWarning("���������� ���������...");
		return true;
	}
	
	if (time.seconds >= 60)
	{
		Template::printWarning("������� ����� �������� ������ 60! ������������� �������...");
		do
		{
			time.seconds -= 60;
			time.minutes++;
		} while (time.seconds >= 60);
		Template::printWarning("������������� ������� ���������!");
	}

	if (time.minutes >= 60)
	{
		Template::printWarning("������ ����� �������� ������ 60! ������������� �������...");
		do
		{
			time.minutes -= 60;
			time.hours++;
		} while (time.minutes >= 60);
		Template::printWarning("������������� ������� ���������!");
	}
	Template::printWarning("�������� ������� ���������!");
	return false;
}

unsigned long Task5_6::time_to_secs(Time time)
{
	Template::printWarning("������� ������� � �������...");
	unsigned long result = ((time.hours * 3600) + (time.minutes * 60) + time.seconds);
	Template::printWarning("������� ������� ��������!");
	return result;
}

Task5_6::Time Task5_6::secs_to_time(unsigned long timeInSeconds)
{
	Template::printWarning("������� ������ �� �����...");
	Time resultTime;
	int hours = timeInSeconds / 3600;
	int minutes = (timeInSeconds - hours * 3600) / 60;
	int seconds = (timeInSeconds - hours * 3600 - minutes * 60);
	resultTime = { hours,minutes,seconds };
	Template::printWarning("������� ������ ��������!");
	return resultTime;
}

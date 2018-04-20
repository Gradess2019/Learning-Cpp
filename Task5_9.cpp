#include "stdafx.h"
#include "Task5_9.h"


Task5_9::Task5_9()
{
}


Task5_9::~Task5_9()
{
}

void Task5_9::startTask()
{
	char confirm = 'y';
	do
	{
		Time firstTime, secondTime;
		char delimiter = 'y';
		input(firstTime, delimiter);
		if (check(firstTime, delimiter))
		{
			continue;
		}

		input(secondTime, delimiter);
		if (check(secondTime, delimiter))
		{
			continue;
		}
		swap(firstTime, secondTime);
		string resultFirstTime = to_string(firstTime.hours) + ":" + to_string(firstTime.minutes) + ":" + to_string(firstTime.seconds);
		string resultSecondTime = to_string(secondTime.hours) + ":" + to_string(secondTime.minutes) + ":" + to_string(secondTime.seconds);
		Template::printResult("\n������ �����: " + resultFirstTime + "\n������ �����: " + resultSecondTime);
		Template::askRestartProgram(confirm);
	} while (Template::getCondition(confirm));
}

void Task5_9::input(Time &time, char &delimiter)
{
	cout << "������� ����� � ������� ��:��:��: ";
	Template::setColorWarning();
	cin >> time.hours >> delimiter >> time.minutes >> delimiter >> time.seconds;
	Template::setColorDefault();
}

bool Task5_9::check(Time &time, char delimiter)
{
	Template::printWarning("�������� �������...");
	if (time.hours < 0)
	{
		Template::printError("���� �� ����� ����� ������������� ��������!");
		Template::printWarning("���������� ���������");
		return true;
	}
	else if (time.minutes < 0)
	{
		Template::printError("������ �� ����� ����� ������������� ��������!");
		Template::printWarning("���������� ���������");
		return true;
	}
	else if (time.seconds < 0)
	{
		Template::printError("������� �� ����� ����� ������������� ��������!");
		Template::printWarning("���������� ���������");
		return true;
	}
	else if (delimiter != ':')
	{
		Template::printError("�������� ������ �������!");
		Template::printWarning("���������� ���������");
		return true;
	}
	
	if (time.seconds >= 60)
	{
		Template::printWarning("�������� ������ ������ ��� ����� 60! ������������� �������...");
		do
		{
			time.seconds -= 60;
			time.minutes++;
		} while (time.seconds >= 60);
		Template::printWarning("������������� ������� ���������!");
	} 

	if (time.minutes >= 60)
	{
		Template::printWarning("�������� ����� ������ ��� ����� 60! ������������� �������...");
		do
		{
			time.minutes -= 60;
			time.hours++;
		} while (time.minutes >= 60);
		Template::printWarning("������������� ������� ���������!");
	}
	return false;
}

void Task5_9::swap(Time &firstTime, Time &secondTime)
{
	Template::printWarning("������������ �������...");
	Time tempTime = firstTime;
	firstTime = secondTime;
	secondTime = tempTime;
	Template::printWarning("������������ ������� ���������!");
}

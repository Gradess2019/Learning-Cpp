#include "stdafx.h"
#include "Task5_10.h"


Task5_10::Task5_10()
{
}


Task5_10::~Task5_10()
{
}

void Task5_10::startTask()
{
	char confirm = 'y';
	do
	{
		Template::printWarning("�������� ��������� ���-�� ��� �������...");
		int count = rand() % 90 + 10, result = 0;
		for (int i = 0; i < count; i++)
		{
			result = printNumberOfCalls();
		}
		Template::printWarning("����� ���������!");
		Template::printResult("��������� ���������� " + to_string(result) + " ���");
		printNumberOfCalls(true);
		Template::askRestartProgram(confirm);
	} while (Template::getCondition(confirm));
	
}

int Task5_10::printNumberOfCalls(bool isRestartProgram)
{
	static int count = 0;
	if (isRestartProgram)
	{
		count = 0;
		return 0;
	}
	else
	{
		count++;
		return count;
	}
}

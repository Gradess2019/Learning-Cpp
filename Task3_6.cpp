#include "stdafx.h"
#include "Task3_6.h"


Task3_6::Task3_6()
{
}


Task3_6::~Task3_6()
{
}

void Task3_6::startTask()
{
	int number = -1, result = 1;
	while (number != 0)
	{
		cout << "������� ����� ��� ���������� ����������:";
		cin >> number;
		for (int i = 1; i <= number; i++)
		{
			result *= i;
		}
		cout << "��������� ����� " << number << " �����:" << result << endl;
		cout << "====================================" << endl;
		cout << "������� 0, ����� ����� �� ���������." << endl;
		cout << "====================================" << endl;
		result = 1;
	}
}

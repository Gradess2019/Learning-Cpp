#include "stdafx.h"
#include "Task3_10.h"


Task3_10::Task3_10()
{
}


Task3_10::~Task3_10()
{
}

void Task3_10::startTask()
{
	cout << "������ ��������� �����: ";
	float sum = 0;
	cin >> sum;
	cout << "������� ���������� ������: ";
	float percent = 0;
	cin >> percent;
	cout << "������� �������� �����: ";
	float resultSum = 0;
	cin >> resultSum;
	int years = 0;
	while (sum < resultSum)
	{
		sum += (sum * (percent / 100));
		years++;
	}
	cout << "��� ����� ��������� �������� ����� �����: " << years << endl;
}


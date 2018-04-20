#include "stdafx.h"
#include "Task5_1.h"


Task5_1::Task5_1()
{
}
Task5_1::~Task5_1()
{
}

void Task5_1::startTask()
{
	char accept = 'y';
	do {
		float radius = 0.0f;
		if (input(radius))
		{
			continue;
		}
		else {
			float result = circarea(radius);
			Template::printResult(to_string(result));
			Template::askRestartProgram(accept);
		}
	} while (Template::getCondition(accept));
}

bool Task5_1::input(float &radius)
{
	cout << "������� ������: ";
	Template::setColorWarning();
	cin >> radius;
	Template::setColorDefault();
	Template::printWarning("�������� �������� �������...");
	if (radius < 0.0f)
	{
		Template::printError("������ �� ����� ���� ������ 0!!!");
		Template::printWarning("���������� ���������...");
		return true;
	}
	else {
		Template::printWarning("�������� �������� ������� ��������!");
		return false;
	}
	
}

float Task5_1::circarea(float radius)
{
	Template::printWarning("���������� ������� �����...");
	float PI = Template::getPI();
	Template::printWarning("���������� ������� ����� ��������!");
	return (PI*radius*radius);
}


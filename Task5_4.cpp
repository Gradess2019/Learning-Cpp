#include "stdafx.h"
#include "Task5_4.h"


Task5_4::Task5_4()
{
}


Task5_4::~Task5_4()
{
}

void Task5_4::startTask()
{
	char confirm = 'y';
	do
	{
		Distance firstDistance, secondDistance, resultDistance;

		cout << "������� ������ �����..." << endl;
		inputDistance(firstDistance);
		if (checkDistance(firstDistance))
		{
			continue;
		}

		cout << "������� ������ �����..." << endl;
		inputDistance(secondDistance);
		if (checkDistance(secondDistance))
		{
			continue;
		}

		resultDistance = compareDistances(firstDistance, secondDistance);
		Template::printResult("������� �����...\n����: " + to_string(resultDistance.feet) + "\n�����: " + to_string(resultDistance.inches));
		Template::askRestartProgram(confirm);
	} while (Template::getCondition(confirm));
}

void Task5_4::inputDistance(Distance &distance)
{
	cout << "����: ";
	Template::setColorWarning();
	cin >> distance.feet;
	Template::setColorDefault();
	cout << "�����: ";
	Template::setColorWarning();
	cin >> distance.inches;
	Template::setColorDefault();
}

bool Task5_4::checkDistance(Distance &distance)
{
	if (distance.feet < 0)
	{
		Template::printError("���� �� ����� ����� �������� ������ 0!");
		Template::printWarning("���������� ���������...");
		Template::printSeparator();
		return true;
	}
	else if (distance.inches < 0)
	{
		Template::printError("����� �� ����� ����� �������� ������ 0!");
		Template::printWarning("���������� ���������...");
		Template::printSeparator();
		return true;
	}
	
	if (distance.inches >= 12.0f)
	{
		Template::printWarning("����� ����� �������� ������ 12! ������������� �����...");
		do
		{
			distance.inches -= 12.0f;
			distance.feet++;
		} while (distance.inches >= 12.0f);
		
		Template::printWarning("������������� ������� ���������! ����� ������... \n����: " + to_string(distance.feet) + "\n�����: " + to_string(distance.inches));
	}
	return false;
}

Task5_4::Distance Task5_4::compareDistances(Distance firstDistance, Distance secondDistance)
{
	Template::printWarning("��������� ����... ");
	float firstDistanceInInches = firstDistance.feet * 12 + firstDistance.inches;
	float secondsDistanceInInches = secondDistance.feet * 12 + secondDistance.inches;
	if (firstDistanceInInches > secondsDistanceInInches)
	{
		Template::printWarning("��������� ���� ���������!");
		return firstDistance;
	}
	else {
		Template::printWarning("��������� ���� ���������!");
		return secondDistance;
	}
}

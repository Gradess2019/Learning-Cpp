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

		cout << "Введите первую длину..." << endl;
		inputDistance(firstDistance);
		if (checkDistance(firstDistance))
		{
			continue;
		}

		cout << "Введите вторую длину..." << endl;
		inputDistance(secondDistance);
		if (checkDistance(secondDistance))
		{
			continue;
		}

		resultDistance = compareDistances(firstDistance, secondDistance);
		Template::printResult("Большая длина...\nФуты: " + to_string(resultDistance.feet) + "\nДюймы: " + to_string(resultDistance.inches));
		Template::askRestartProgram(confirm);
	} while (Template::getCondition(confirm));
}

void Task5_4::inputDistance(Distance &distance)
{
	cout << "Футы: ";
	Template::setColorWarning();
	cin >> distance.feet;
	Template::setColorDefault();
	cout << "Дюймы: ";
	Template::setColorWarning();
	cin >> distance.inches;
	Template::setColorDefault();
}

bool Task5_4::checkDistance(Distance &distance)
{
	if (distance.feet < 0)
	{
		Template::printError("Футы не могут иметь значение меньше 0!");
		Template::printWarning("Перезапуск программы...");
		Template::printSeparator();
		return true;
	}
	else if (distance.inches < 0)
	{
		Template::printError("Дюймы не могут иметь значение меньше 0!");
		Template::printWarning("Перезапуск программы...");
		Template::printSeparator();
		return true;
	}
	
	if (distance.inches >= 12.0f)
	{
		Template::printWarning("Дюймы имеют значение больше 12! Корректировка длины...");
		do
		{
			distance.inches -= 12.0f;
			distance.feet++;
		} while (distance.inches >= 12.0f);
		
		Template::printWarning("Корректировка размера завершена! Новый размер... \nФуты: " + to_string(distance.feet) + "\nДюймы: " + to_string(distance.inches));
	}
	return false;
}

Task5_4::Distance Task5_4::compareDistances(Distance firstDistance, Distance secondDistance)
{
	Template::printWarning("Сравнение длин... ");
	float firstDistanceInInches = firstDistance.feet * 12 + firstDistance.inches;
	float secondsDistanceInInches = secondDistance.feet * 12 + secondDistance.inches;
	if (firstDistanceInInches > secondsDistanceInInches)
	{
		Template::printWarning("Сравнение длин завершено!");
		return firstDistance;
	}
	else {
		Template::printWarning("Сравнение длин завершено!");
		return secondDistance;
	}
}

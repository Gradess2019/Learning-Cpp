#include "stdafx.h"
#include "Task4_3.h"


Task4_3::Task4_3()
{
}


Task4_3::~Task4_3()
{
}

void Task4_3::startTask()
{
	char accept = 'y';
	do
	{
		Volume room;
		cout << "Введите длину в футах и дюймах: ";
		cin >> room.length.feet >> room.length.inches;
		if (check(room.length.feet, room.length.inches))
		{
			continue;
		}

		cout << "Введите ширину в футах и дюймах: ";
		cin >> room.width.feet >> room.width.inches;
		if (check(room.width.feet, room.width.inches))
		{
			continue;
		}

		cout << "Введите высоту в футах и дюймах: ";
		cin >> room.height.feet >> room.height.inches;
		if (check(room.height.feet, room.height.inches))
		{
			continue;
		}

		cout << "Объём помещения равен: " << getVolumeRoom(room) << endl;
		cout << "Продолжить? (y/n)" << endl;
		accept = _getch();
	} while ((accept != 'n') && (accept == 'y'));
	
}

bool Task4_3::check(int &feet, float &inches)
{
	if ((feet < 0) || (inches < 0))
	{
		cout << "Ошибка! Футы/дюймы не могут быть отрицательными!" << endl;
		return true;
	}

	while (inches > 12)
	{
		feet++;
		inches -= 12;
	}
	return false;
}

float Task4_3::getVolumeRoom(Volume &volume)
{
	float length = volume.length.feet + volume.length.inches;
	float width = volume.width.feet + volume.width.inches;
	float height = volume.height.feet + volume.height.inches;
	return length * width * height;
}

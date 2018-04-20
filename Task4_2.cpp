#include "stdafx.h"
#include "Task4_2.h"


Task4_2::Task4_2()
{
}
Task4_2::~Task4_2()
{
}

struct Point
{
	int x, y;
};

void Task4_2::startTask()
{
	char accept = 'y';
	do
	{
		Point p1, p2;
		cout << "Введите координаты первой точки: ";
		cin >> p1.x >> p1.y;
		cout << "Введите координаты второй точки: ";
		cin >> p2.x >> p2.y;
		cout << "Координаты третей(p1+p2) точки равны: " << p1.x + p2.x << " " << p1.y + p2.y << endl;
		cout << "Продолжить? (y/n)" << endl;
		accept = _getch();
	} while ((accept != 'n') && (accept == 'y'));
	
}


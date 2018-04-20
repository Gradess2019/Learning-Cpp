#include "stdafx.h"
#include "Task4_1.h"


Task4_1::Task4_1()
{
}
Task4_1::~Task4_1()
{
}

struct Phone
{
	int numCity, numStation, numSub;
};

void Task4_1::startTask()
{
	char accept = 'y';
	do
	{
		cout << setfill('=') << setw(50) << ' ' << endl << setfill(' ');
		Phone p1 = { 212, 767, 8900 }, p2;
		cout << "Введите код города, номер станции и номер абонента: " << endl;
		cin >> p2.numCity >> p2.numStation >> p2.numSub;
		cout << "Мой номер: (" << p1.numCity << ") " << p1.numStation << "-" << p1.numSub << endl;
		cout << "Ваш номер: (" << p2.numCity << ") " << p2.numStation << "-" << p2.numSub << endl;
		cout << "Продолжить? (y/n)" << endl;
		accept = _getch();
	} while ((accept != 'n') && (accept == 'y'));
	
}

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
		cout << "������� ��� ������, ����� ������� � ����� ��������: " << endl;
		cin >> p2.numCity >> p2.numStation >> p2.numSub;
		cout << "��� �����: (" << p1.numCity << ") " << p1.numStation << "-" << p1.numSub << endl;
		cout << "��� �����: (" << p2.numCity << ") " << p2.numStation << "-" << p2.numSub << endl;
		cout << "����������? (y/n)" << endl;
		accept = _getch();
	} while ((accept != 'n') && (accept == 'y'));
	
}

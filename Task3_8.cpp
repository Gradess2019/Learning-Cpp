#include "stdafx.h"
#include "Task3_8.h"


Task3_8::Task3_8()
{
}


Task3_8::~Task3_8()
{
}

void Task3_8::startTask()
{
	int funts1 = 0, shils1 = 0, pens1 = 0;
	int funts2 = 0, shils2 = 0, pens2 = 0;
	char delimiter = 'J', point = '.';
	do
	{
		cout << "������� ������ �����: ";
		cin >> delimiter >> funts1 >> point >> shils1 >> point >> pens1;
		cout << "������� ������ �����: ";
		cin >> delimiter >> funts2 >> point >> shils2 >> point >> pens2;

		funts1 += funts2;
		shils1 += shils2;
		pens1 += pens2;

		if (pens1 > 11)
		{
			shils1++;
			pens1 -= 12;
		}
		
		if (shils1 > 19)
		{
			funts1++;
			shils1 -= 20;
		}
		cout << "����� J" << funts1 << '.' << shils1 << '.' << pens1 << endl;
		cout << "����������(y/n)?" << endl;
	} while (_getch() != 'n');
}

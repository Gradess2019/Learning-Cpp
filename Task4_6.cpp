#include "stdafx.h"
#include "Task4_6.h"


Task4_6::Task4_6()
{
}


Task4_6::~Task4_6()
{
}

void Task4_6::startTask()
{
	char accept = 'y';
	do {
		cout << "������� ������ ����� ��������� (laborer, secretary, manager,\n accountant, executive, researcher): ";
		char symbol = _getche();
		cout << endl << "������ �������� ���������: ";
		switch (static_cast<int>(symbol))
		{
		case 108: {
			cout << "laborer" << endl;
			break;
		}
		case 115: {
			cout << "secretary" << endl;
			break;
		}
		case 109: {
			cout << "manager" << endl;
			break;
		}
		case 97: {
			cout << "accountant" << endl;
			break;
		}
		case 101: {
			cout << "executive" << endl;
			break;
		}
		case 114: {
			cout << "researcher" << endl;
			break;
		}
		default:
			break;
		}
		cout << "����������? (y/n)" << endl;
		accept = _getch();
	} while ((accept != 'n') && (accept == 'y'));
}



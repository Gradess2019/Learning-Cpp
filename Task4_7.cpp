#include "stdafx.h"
#include "Task4_7.h"


Task4_7::Task4_7()
{
}


Task4_7::~Task4_7()
{
}

void Task4_7::startTask()
{
	char accept = 'y';
	bool isWrongSymbol = false, isWrongDate = false, isWrongNumber = false, isWrongSalary = false;
	do {
		resetErrors(isWrongNumber, isWrongSalary, isWrongSymbol, isWrongDate);
		Employee employee[3];
		for (int i = 0; i <3; i++)
		{
			cout << "������� ���������� � " << (i+1) << " ����������..." << endl;
			cout << "������� ����� ����������: ";
			cin >> employee[i].number;
			if (employee[i].number < 0)
			{
				cout << "�������� ����� ����������!" << endl;
				isWrongNumber = true;
				break;
			}

			cout << "������� �������� ����������: ";
			cin >> employee[i].salary;
			if (employee[i].salary < 0)
			{
				cout << "�������� �������� ����������!" << endl;
				isWrongSalary = true;
				break;
			}

			cout << "������� ������ ����� ��������� ���������� (laborer, secretary, manager,\n accountant, executive, researcher): ";
			char symbol = _getche();
			switch (static_cast<int>(symbol))
			{
			case 108: {
				employee[i].etype = laborer;
				break;
			}
			case 115: {
				employee[i].etype = secretary;
				break;
			}
			case 109: {
				employee[i].etype = manager;
				break;
			}
			case 97: {
				employee[i].etype = accountant;
				break;
			}
			case 101: {
				employee[i].etype = executive;
				break;
			}
			case 114: {
				employee[i].etype = researcher;
				break;
			}
			default:
				cout << endl << "���������� ��������� ����������!" << endl;
				isWrongSymbol = true;
				break;
			}
			if (isWrongSymbol)
			{
				break;
			}

			cout << endl << "������� ���� �������� �� ������ � ������� ��/��/��: ";
			char delimiter = '/';
			cin >> employee[i].date.day >> delimiter >> employee[i].date.month >> delimiter >> employee[i].date.year;
			if (checkDate(employee[i].date, delimiter))
			{
				isWrongDate = true;
				break;
			}
			cout << setfill('=') << setw(50) << ' ' << endl << setfill(' ');
		}
		if (!checkErrors(isWrongNumber, isWrongSalary, isWrongSymbol, isWrongDate))
		{
			cout << "���������� � �������� �����������: " << endl;
			cout << setw(9) << "�����" << setw(10) << "��������" << setw(15) << "���������" << setw(15) << "���� ��������" << endl <<
				setw(9) << employee[0].number << setw(9) << employee[0].salary << setw(1) << '$' << setw(15) << getEtype(employee[0].etype) << setw(15) << getDate(employee[0].date) << endl <<
				setw(9) << employee[1].number << setw(9) << employee[1].salary << setw(1) << '$' << setw(15) << getEtype(employee[1].etype) << setw(15) << getDate(employee[1].date) << endl <<
				setw(9) << employee[2].number << setw(9) << employee[2].salary << setw(1) << '$' << setw(15) << getEtype(employee[2].etype) << setw(15) << getDate(employee[2].date) << endl;
			cout << "����������? (y/n)" << endl;
			accept = _getch();
		}
		else
		{
			accept = _getch();
		}
	} while ((accept != 'n') && (accept == 'y'));
}
bool Task4_7::checkErrors(bool isWrongNumber, bool isWrongSalary, bool isWrongSymbol, bool isWrongDate)
{
	if ((isWrongDate == true) || (isWrongSymbol == true) || (isWrongNumber == true) || (isWrongSalary == true))
	{
		cout << "����������� ��� ���? (y/n)" << endl;
		return true;
	}
	else {
		return false;
	}
	return false;
}

bool Task4_7::checkDate(Date date, char delimiter)
{
	if (delimiter != '/')
	{
		cout << "������! �������� ������ ����� ����!" << endl;
		return true;
	}
	if ((date.day < 0) || (date.day > 31))
	{
		cout << "������! ������� ������ ����!" << endl;
		return true;
	}
	if ((date.month < 0) || (date.month > 12))
	{
		cout << "������! ������� ������ �����!" << endl;
		return true;
	}
	if (date.year < 0)
	{
		cout << "������! ������� ������ ���!" << endl;
		return true;
	}
	return false;
}

string Task4_7::getEtype(Etype etype)
{
	switch (etype)
	{
	case Task4_7::laborer:
		return "laborer";
		break;
	case Task4_7::secretary:
		return "secretary";
		break;
	case Task4_7::manager:
		return "manager";
		break;
	case Task4_7::accountant:
		return "accountant";
		break;
	case Task4_7::executive:
		return "executive";
		break;
	case Task4_7::researcher:
		return "researcher";
		break;
	default:
		return "������!";
		break;
	}
	return "������";
}

string Task4_7::getDate(Date date)
{
	
	string result = to_string(date.day) + "/" + to_string(date.month) + "/" + to_string(date.year);
	return result;
}

void Task4_7::resetErrors(bool & isWrongNumber, bool & isWrongSalary, bool & isWrongSymbol, bool & isWrongDate)
{
	isWrongNumber = false;
	isWrongSalary = false;
	isWrongSymbol = false;
	isWrongDate = false;
}

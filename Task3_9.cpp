#include "stdafx.h"
#include "Task3_9.h"


Task3_9::Task3_9()
{
}


Task3_9::~Task3_9()
{
}

void Task3_9::startTask()
{
	cout << "������� ����� ������: ";
	int numOfGuests = 0;
	cin >> numOfGuests;
	cout << "������� ����� ���� �� ������: ";
	int numOfSeats = 0;
	cin >> numOfSeats;

	int condition = numOfGuests - numOfSeats;
	int result = numOfGuests;
	int keep_numOfGuests = numOfGuests;

	numOfGuests--;

	for (; numOfGuests > condition; --numOfGuests)
	{
		result *= numOfGuests;
	}

	if (numOfSeats <= 0)
	{
		cout << "������ ������ ���������" << endl;
	}
	else if(result > 0) {
		cout << "����� ��������� �������� ������: " << result << endl;
	}
	else if (numOfGuests < numOfSeats) {
		cout << "����� ��������� �������� ������: " << keep_numOfGuests << endl;
	}
	
}

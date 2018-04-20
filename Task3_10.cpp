#include "stdafx.h"
#include "Task3_10.h"


Task3_10::Task3_10()
{
}


Task3_10::~Task3_10()
{
}

void Task3_10::startTask()
{
	cout << "¬ведие начальный вклад: ";
	float sum = 0;
	cin >> sum;
	cout << "¬ведите процентную ставку: ";
	float percent = 0;
	cin >> percent;
	cout << "¬ведите желаемую сумму: ";
	float resultSum = 0;
	cin >> resultSum;
	int years = 0;
	while (sum < resultSum)
	{
		sum += (sum * (percent / 100));
		years++;
	}
	cout << "¬аш вклад достигнет желаемой суммы через: " << years << endl;
}


#include "stdafx.h"
#include "Task3_7.h"


Task3_7::Task3_7()
{
}


Task3_7::~Task3_7()
{
}

void Task3_7::startTask()
{
	cout << "¬ведите начальный вклад: ";
	float sum = 0;
	cin >> sum;
	cout << "¬ведите число лет: ";
	int years = 0;
	cin >> years;
	cout << "¬ведите процентнтую ставку: ";
	float percent = 0;
	cin >> percent;
	for (int i = 0; i < years; i++)
	{
		sum += (sum * (percent / 100));
	}
	cout << "„ерез это врем€ вы получите: " << sum << "$" << endl;
}

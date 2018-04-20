#include "stdafx.h"
#include "Task5_11.h"


Task5_11::Task5_11()
{
}


Task5_11::~Task5_11()
{
}

void Task5_11::startTask()
{
	char confirm = 'y';
	do
	{
		int pounds = 0, shillings = 0, pence = 0;
		char currency = 'J', delimiter = '.';
		Sterling firstSterling, secondSterling, resultSterling;

		input(currency, delimiter, pounds, shillings, pence);
		if (check(currency, delimiter, pounds, shillings, pence))
		{
			continue;
		}
		firstSterling = createSterling(pounds, shillings, pence);

		input(currency, delimiter, pounds, shillings, pence);
		if (check(currency, delimiter, pounds, shillings, pence))
		{
			continue;
		}
		secondSterling = createSterling(pounds, shillings, pence);

		resultSterling = sumSterlings(firstSterling, secondSterling);
		check(currency, delimiter, resultSterling.pounds, resultSterling.shillings, resultSterling.pence);
		string stringResultSterling = currency + to_string(resultSterling.pounds) + delimiter + to_string(resultSterling.shillings) + delimiter + to_string(resultSterling.pence);
		Template::printResult(stringResultSterling);
		Template::askRestartProgram(confirm);
	} while (Template::getCondition(confirm));
}

void Task5_11::input(char &currency, char &delimiter, int &pounds, int &shillings, int &pence)
{
	cout << "������� ����� ����������: ";
	Template::setColorWarning();
	cin >> currency >> pounds >> delimiter >> shillings >> delimiter >> pence;
	Template::setColorDefault();
}

bool Task5_11::check(char currency, char delimiter, int &pounds, int &shillings, int &pence)
{
	Template::printWarning("�������� �������� �����...");
	if (currency != 'J')
	{
		Template::printError("�������� ������������ �������� �������!");
		Template::printWarningRestart();
		return true;
	}
	else if (delimiter != '.')
	{
		Template::printError("�������� ������ �����!");
		Template::printWarningRestart();
		return true;
	}
	else if (pounds < 0)
	{
		Template::printError("����� �� ����� ����� ������������� ��������!");
		Template::printWarningRestart();
		return true;
	}
	else if (shillings < 0)
	{
		Template::printError("�������� �� ����� ����� ������������� ��������!");
		Template::printWarningRestart();
		return true;
	}
	else if (pence < 0)
	{
		Template::printError("����� �� ����� ����� ������������� ��������!");
		Template::printWarningRestart();
		return true;
	}

	if (pence >= 12)
	{
		Template::printWarning("����� ����� �������� ������ ��� ����� 12! ������������� �����...");
		do
		{
			pence -= 12;
			shillings++;
		} while (pence >=12);
		Template::printWarning("������������� ����� ���������!");
	}

	if (shillings >= 20)
	{
		Template::printWarning("�������� ����� �������� ������ ��� ����� 12! ������������� �����...");
		do
		{
			shillings -= 20;
			pounds++;
		} while (shillings >= 20);
		Template::printWarning("������������� ����� ���������!");
	}
	Template::printWarning("�������� �������� ����� ���������!");
	return false;
}

Task5_11::Sterling Task5_11::createSterling(int pounds, int shillings, int pence)
{
	Sterling sterling = { pounds,shillings,pence };
	return sterling;
}

Task5_11::Sterling Task5_11::sumSterlings(Sterling &firstSterling, Sterling &secondSterling)
{
	Sterling resultSterling = { firstSterling.pounds + secondSterling.pounds,firstSterling.shillings + secondSterling.shillings,firstSterling.pence + secondSterling.pence };
	
	return resultSterling;
}

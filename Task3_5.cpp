#include "stdafx.h"
#include "Task3_5.h"


Task3_5::Task3_5()
{
}


Task3_5::~Task3_5()
{
}

void Task3_5::startTask()
{	
	int space = 20;
	for (int i = 0; i < 20; i++)
	{
		for (int k = 0; k < space; k++)
		{
			cout << ' ';
		}
		for (int j = 0; j < (41 - (space * 2)); j++)
		{	
			
			cout << 'X';
		}
		space--;
		cout << endl;
	}
}
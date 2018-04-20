#include "stdafx.h"
#include "Task5_1.h"


Task5_1::Task5_1()
{
}
Task5_1::~Task5_1()
{
}

void Task5_1::startTask()
{
	char accept = 'y';
	do {
		float radius = 0.0f;
		if (input(radius))
		{
			continue;
		}
		else {
			float result = circarea(radius);
			Template::printResult(to_string(result));
			Template::askRestartProgram(accept);
		}
	} while (Template::getCondition(accept));
}

bool Task5_1::input(float &radius)
{
	cout << "Введите радиус: ";
	Template::setColorWarning();
	cin >> radius;
	Template::setColorDefault();
	Template::printWarning("Проверка значения радиуса...");
	if (radius < 0.0f)
	{
		Template::printError("Радиус не может быть меньше 0!!!");
		Template::printWarning("Перезапуск программы...");
		return true;
	}
	else {
		Template::printWarning("Проверка значения радиуса окончена!");
		return false;
	}
	
}

float Task5_1::circarea(float radius)
{
	Template::printWarning("Вычисление площади круга...");
	float PI = Template::getPI();
	Template::printWarning("Вычисление площади круга окончено!");
	return (PI*radius*radius);
}


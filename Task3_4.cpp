#include "stdafx.h"
#include "Task3_4.h"


Task3_4::Task3_4()
{
}


Task3_4::~Task3_4()
{
}

void Task3_4::startTask() {
	do {
		cout << "Введите первый операнд, операцию и второй операнд: ";
		float num1, num2;
		char operation;
		cin >> num1 >> operation >> num2;
		switch (operation)
		{
		case '+':
			cout << "Результат равен: " << (num1 + num2) << endl;
			break;
		case '-':
			cout << "Результат равен: " << (num1 - num2) << endl;
			break;
		case '*':
			cout << "Результат равен: " << (num1 * num2) << endl;
			break;
		case '/':
			cout << "Результат равен: " << (num1 / num2) << endl;
			break;
		default:
			cout << "Неизвестная операция!" << endl;
			break;
		}
		cout << "Выполнить ещё одну операцию? (y/n)" << endl;
	} while ((_getch()) == 'y');
}
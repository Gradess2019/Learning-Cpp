#include "stdafx.h"
#include "Template.h"

void Template::setColorSuccess() {
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | LightGreen));
}
void Template::setColorError()
{
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | LightRed));
}
void Template::setColorDefault()
{
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | LightGray));
}
void Template::setColorWarning()
{
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Yellow));
}

void Template::printSeparator()
{
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | LightCyan));
	for (int i = 0; i < 22; i++)
	{
		cout << "=";
	}
	cout << endl;
	setColorDefault();
}
void Template::printWarningRestart()
{
	Template::printWarning("Перезапуск программы...");
}
void Template::printError(string message)
{
	setColorError();
	cout << message << endl;
	setColorDefault();
}
void Template::printWarning(string message)
{
	setColorWarning();
	cout << message << endl;
	setColorDefault();
}
void Template::printSuccess(string message)
{
	setColorSuccess();
	cout << message << endl;
	setColorDefault();
}
void Template::printResult(string message)
{
	printSeparator();
	printSuccess("Результат: " + message);
	printSeparator();
}

bool Template::getCondition(char accept)
{
	if (((accept == -83) || (accept == 'y')) && ((accept != 'n') || (accept != -30)))
	{
		return true;
	}
	else {
		return false;
	}

}
float Template::getPI()
{
	return PI;
}

void Template::askRestartProgram(char& confirm)
{
	cout << "Продолжить? (y/n)" << endl;
	confirm = _getch();
	printSeparator();
}

void Template::askRestartProgram(char& confirm, string message)
{
	cout << message << endl;
	confirm = _getch();
}


#pragma once
#include <string>
using namespace std;

static HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
static const float PI = 3.14159f;

enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

class Template
{
public:
	Template() {};
	~Template() {};
	

	static void setColorSuccess();
	static void setColorError();
	static void setColorDefault();
	static void setColorWarning();

	static void printError(string);
	static void printWarning(string);
	static void printSuccess(string);
	static void printResult(string);
	static void printSeparator();

	static void printWarningRestart();

	static bool getCondition(char);
	static float getPI();

	static void askRestartProgram(char&);
	static void askRestartProgram(char&, string);
};


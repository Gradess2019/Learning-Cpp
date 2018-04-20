#pragma once
#include <iostream>
#include <ctype.h>
using namespace std;
class Task2_5
{
public:
	Task2_5();
	~Task2_5();
public: void startTask() {
	cout << "¬ведите английскую букву: ";
	char letter;
	cin >> letter;
	cout << endl << "«начение: " << islower(letter) << endl;
}
};


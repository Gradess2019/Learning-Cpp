#pragma once
#include <iostream>
using namespace std;
class Task2_12
{
public:
	Task2_12();
	~Task2_12();
public: void startTask(){
	float decpounds;
	int pounds;
	float decfrac;
	cout << "������� ����� ���������� ������: ";
	cin >> decpounds;
	pounds = static_cast<int>(decpounds);	
	decfrac = (decpounds - pounds)*2.4f/12.0f;
	cout << "������������� ����� � ������ ����� ������: " << 'J' << pounds << '.' << static_cast<int>(decfrac * 100)
		<< '.' << static_cast<int>((decfrac * 100 - static_cast<int>(decfrac * 100)) * 10) << endl;
}
};


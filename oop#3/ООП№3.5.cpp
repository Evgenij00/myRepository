#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

struct date
{
	int day, month, year;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	date date_1;
	char ch = '/';
	cout << "enter day, month and year (XX/XX/XXXX) " << endl;
	cin >> date_1.day >> ch >> date_1.month >> ch >> date_1.year;

	cout << "You entered the date: ";
 
	if (date_1.day < 10)
	{
		cout << "0" << date_1.day;
	}
	else cout << date_1.day;

	cout << ch;

	if (date_1.month < 10)
	{
		cout << "0" << date_1.month;
	}
	else cout << date_1.month;

	cout << ch << date_1.year << endl << endl;

	system("pause");
	return 0;
}


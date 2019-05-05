#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int hms_to_secs(int h, int m, int s)
{
	int seconds = h * 60 * 60 + m * 60 + s;
	return seconds;
}

int main()
{
    
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int hour, mins, secs;

	int seconds;
	char ch;
	do
	{
		system("cls");
		cout << "Enter the hours" << endl; 
		cin >> hour;

		cout << "Enter the minutes" << endl; 
		cin >> mins;

		cout << "Enter the seconds" << endl; 
		cin >> secs;

		seconds = hms_to_secs(hour, mins, secs);

		cout << "all seconds: " << seconds << endl;
		cout << "Repeat? (y/n) ";
		cin >> ch;
	} while (ch == 'y');

	return 0;
}


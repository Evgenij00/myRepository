#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Time t1;
	cout << "Введите время в (hours, minutes, seconds)" << endl;
	cin >> t1.hours >> t1.minutes >> t1.seconds;
	long totalsecs = (t1.hours * 3600) + (t1.minutes * 60) + t1.seconds;
	cout << "\nВремя в секундах: " << totalsecs << endl;
	system("pause");
	return 0;
}
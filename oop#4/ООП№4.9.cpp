#include "pch.h"
#include <iostream>
using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;
};

Time t1, t2;

void swap(Time& t1, Time& t2)
{
	Time temp = t1;
	t1 = t2;
	t2 = temp;
}

int main()
{

	cout << "Enter the 1-st time (hours. minutes. seconds): ";
	cin >> t1.hours >> t1.minutes >> t1.seconds;

	cout << "Enter the 2-nd time (hours. minutes. seconds): ";
	cin >> t2.hours >> t2.minutes >> t2.seconds;

	swap(t1, t2);

	cout << t1.hours << '.' << t1.minutes << '.' << t1.seconds << endl;
	cout << "\n" << t2.hours << '.' << t2.minutes << '.' << t2.seconds << endl;

	system("pause");
	return 0;

}


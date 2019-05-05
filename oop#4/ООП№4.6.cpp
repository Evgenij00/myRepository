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
Time t1, t2, tsum;

long time_to_secs(Time);

Time secs_to_time(long);

int main()
{
	long totalsecs;

	cout << "Enter the 1-st time (hours. minutes. seconds)" << endl;
	cin >> t1.hours >> t1.minutes >> t1.seconds;

	cout << "Enter the 2-nd time (hours. minutes. seconds)" << endl;
	cin >> t2.hours >> t2.minutes >> t2.seconds;

	totalsecs = time_to_secs(t1) + time_to_secs(t2);
	tsum = secs_to_time(totalsecs);

	cout << "Time: " << tsum.hours << "." << tsum.minutes << "." << tsum.seconds << endl;
	system("pause");
	return 0;
}

long time_to_secs(Time time)
{
	long totalsecs = ((time.hours * 3600) + (time.minutes * 60) + time.seconds);
	return totalsecs;
}

Time secs_to_time(long totalsecs)
{
	tsum.hours = totalsecs / (60 * 60);
	tsum.minutes = totalsecs % (60 * 60) / 60;
	tsum.seconds = totalsecs % (60 * 60) % 60;
	return tsum;
}

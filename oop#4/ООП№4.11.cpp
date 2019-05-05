#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

struct sterling
{
	int pounds;
	int shilling;
	int pens;
};

sterling st1, st2, sum;


sterling s1(sterling str, int& p)
{
	p++;
	cout << "Enter " << p << "-st pounds(pounds.shilling.pens): ";
	cin >> str.pounds >> str.shilling >> str.pens;
	return str;
}

sterling s2(sterling str1, sterling str2)
{
	sterling sum;
	int sumpens = (str1.pounds * 20 * 12 + str1.shilling * 12 + str1.pens) + (str2.pounds * 20 * 12 + str2.shilling * 12 + str2.pens);
	sum.pounds = sumpens / (20 * 12);
	sum.shilling = sumpens % (20 * 12) / 12;
	sum.pens = sumpens % (20 * 12) % 12;
	return sum;
}

void s3(sterling sum)
{
	cout << "sum: " << sum.pounds << '.' << sum.shilling << '.'  << sum.pens << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int p = 0;

	st1 = s1(st1, p);
	st2 = s1(st2, p);
	sum = s2(st1, st2);
	s3(sum);
	system("pause");
	return 0;

}

#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double vklad, let, proz, s, sum;

	cout << "введите начальный вклад: ";
	cin >> vklad;

	cout << " \nВведите число лет: ";
	cin >> let;

	cout << "\nВведите процентную ставку: ";
	cin >> proz;

	sum = vklad;
	for (int j = let; j > 0; j--)
	{
		s = sum / 100 * proz;
		sum = s + sum;
	}
	cout << "\nВы получите " << sum << " руб." << endl;
	system("pause");
	return 0;
}


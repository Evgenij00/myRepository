#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double vklad, zhel, proz, s, sum, let = 0;

	cout << "введите начальный вклад: ";
	cin >> vklad;

	cout << " \nВведите желаемую сумму: ";
	cin >> zhel;

	cout << "\nВведите процентную ставку: ";
	cin >> proz;

	sum = vklad;
	do
	{
		s = sum / 100 * proz;
		sum = s + sum;
		let++;
	} while (sum < zhel);
	cout << "Требуемый срок для достижения цели: " << let << endl;
	system("pause");
	return 0;
}


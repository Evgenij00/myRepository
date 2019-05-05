#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int funt, funt1, shill, shill1, pens, pens1, funt2, shill2, pens2;
	char ch;
	do {
		system("cls");
		ch = '.';
		cout << "Введите первую сумму: ";
		cin >> funt1 >> shill1 >> pens1;

		cout << "Введите вторую сумму: ";
		cin >> funt2 >> shill2 >> pens2;

		funt = funt1 + funt2;
		shill = shill1 + shill2;
		if (shill > 19)
		{
			funt++;
			shill = shill - 20;
		}
		pens = pens1 + pens2;
		if (pens > 11)
		{
			shill++;
			pens = pens - 12;
		}
		cout << "Всего: " << funt << ch << shill << ch << pens << endl;
		cout << "Продолжить (1 - да/0 - нет)" << endl;
		cin >> ch;
	} while (ch != '0');

	return 0;
}


#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int pens_in_ster(int funt, int sh, int pn)
{
	return (funt * 240 + sh * 12 + pn);
}
void pens_to_ster(int sump, int& funt, int& sh, int& pn)
{
	funt = sump / 240;
	sh = sump % 240 / 12;
	pn = sump % 240 % 12;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int funt, sh, pn, koef, sum, sum1, sum2;
	char ch, div = '.';

	do
	{
		system("cls");
		cout << "Введите первый операнд: ";
		cin >> funt >> sh >> pn;

		sum1 = pens_in_ster(funt, sh, pn);

		cout << "Введите операцию: ";
		cin >> ch;

		cout << "Введите второй операнд: ";
		if (ch == '*')
			cin >> koef;
		else
		{
			cin >> funt >> sh >> pn;

			sum2 = pens_in_ster(funt, sh, pn);
		}

		switch (ch)
		{
		case '+': sum = sum1 + sum2; break;
		case '-': sum = sum1 - sum2; break;
		case '*': sum = sum1 * koef;
		}
		pens_to_ster(sum, funt, sh, pn);
		cout << funt << div << sh << div << pn << endl;
		
		cout << "Хотите продолжить (1 - да/0 - нет)" << endl;
		cin >> ch;
		
	} while (ch != '0');
	
	return 0;
}


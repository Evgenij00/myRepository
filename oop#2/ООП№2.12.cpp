#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c, d, e, f;
	char ch, ch1 = '/';
	do
	{
		system("cls");
		cout << "Vvedite 1-y drob: ";
		cin >> a >> ch1 >> b;

		cout << "\nVvedite znak: ";
		cin >> ch;

		cout << "\nVvedite 2-y drob: ";
		cin >> c >> ch1 >> d;

		switch (ch)
		{
		case '+': 
			e = a * d + b * c;
			f = b * d; 
			break;
		case '-':  
			e = a * d - b * c;
			f = b * d; 
			break;
		case '*': 
			e = a * c;
			f = b * d; 
			break;
		case '/': 
			e = a * d;
			f = b * c; 
			break;
		}
		cout << "\nОтвет: " << e << ch1 << f << endl;
		cout << "\nХотите продолжить (1 - да/0 - нет)" << endl;
		cin >> ch;
	} while (ch != '0');

	return 0;
}

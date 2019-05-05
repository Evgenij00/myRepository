#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	unsigned int j;
	unsigned long fact = 1;
	int ch;
	do
	{
		system("cls");
		fact = 1;
		cout << "Введите целое число: ";
		cin >> j;

		for (j; j > 0; j--)    
			fact *= j;       
		cout << "Факториал числа равен " << fact << endl;
		cout << "еще раз? (нет - 0, да - 1)" << endl;
		cin >> ch;
	} while (ch != 0);
}


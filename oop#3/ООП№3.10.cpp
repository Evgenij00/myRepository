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

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	sterling newp, oldp;
	char ch = '.';
	int sumpens;
	cout << "Введите денежную сумму в десячных фунтах" << endl;
	cin >> newp.pounds >> ch >> newp.pens;
	sumpens = ((newp.pounds * 100) + newp.pens) * 2.4;
	newp.pounds = sumpens / (20 * 12);
	newp.shilling = sumpens % (20 * 12) / 12;
	newp.pens = sumpens % (20 * 12) % 12;
	cout << "\nЭта же сумма в старой денежной системе (фунты, шиллинги и пенсы.): \n" << newp.pounds << ch << newp.shilling << ch << newp.pens << endl;
	system("pause");
	return 0;
}
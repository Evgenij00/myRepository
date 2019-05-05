#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int y = 10, x = 1;
	do {
		int j = y;
		int d = x;
		do 
		{
			cout << ' '; j--;
		} while (j != 0);
		do {
			cout << 'X'; d--;
		} while (d != 0);
		y -= 1;
		x += 1;
		cout << endl;
	} while (y > 0);
	_getche();
	return 0;
}

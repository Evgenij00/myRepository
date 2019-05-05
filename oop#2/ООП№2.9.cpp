#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int guest, mest, var, res = 1;
	cout << "Vvedite kol-vo gostey: ";
	cin >> guest;
	cout << "\nVvedite kol-vo mest: ";
	cin >> mest;
	var = guest - mest;
	for (int j = guest; j > var; j--)
		res *= j;
	cout << "\nChislo variantov: " << res << endl;
	system("pause");
}


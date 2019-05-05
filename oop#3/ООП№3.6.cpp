#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher, error};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char letter;
	etype post;

	cout << "(laborer, secretary, manager, accountant, executive, researcher)"
		<< "\nВведите первую букву должности: ";
	cin >> letter;

	switch (letter)
	{
	case 'l':
		post = laborer;
		break;
	case 's':
		post = secretary;
		break;

	case 'm':
		post = manager;
		break;
	case 'a':
		post = accountant;
		break;

	case 'e':
		post = executive;
		break;

	case 'r':
		post = researcher;
		break;
	default:
		cout << "Ошибка. ";
		post = error;
	}

	switch (post)
	{
	case laborer:
		cout << "\nПолное название должности: laborer";
		break;

	case secretary:
		cout << "\nПолное название должности: secretary";
		break;
	case manager:
		cout << "\nПолное название должности: manager";
		break;
	case accountant:
		cout << "\nПолное название должности: accountant";
		break;
	case executive:
		cout << "\nПолное название должности: executive";
		break;
	case researcher:
		cout << "\nПолное название должности: researcher";
		break;
	case error:
		cout << "Должность не определена\n";
	}
	cout << endl;
	system("pause");
	return 0;
}

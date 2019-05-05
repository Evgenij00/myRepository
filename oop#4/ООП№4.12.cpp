#include "pch.h"
#include <iostream>
using namespace std;

struct fraction
{
	int numerator;
	int denominator;
};

fraction f1, f2, sumf;

fraction fadd(fraction f1, fraction f2)
{
	sumf.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
	sumf.denominator = f1.denominator * f2.denominator;
	return sumf;
}

fraction fsub(fraction f1, fraction f2)
{
	sumf.numerator = f1.numerator * f2.denominator - f1.denominator * f2.numerator;
	sumf.denominator = f1.denominator * f2.denominator;
	return sumf;
}

fraction fmul(fraction f1, fraction f2)
{
	sumf.numerator = f1.numerator * f2.numerator;
	sumf.denominator = f1.denominator * f2.denominator;
	return sumf;
}

fraction fdiv(fraction f1, fraction f2)
{
	sumf.numerator = f1.numerator * f2.denominator;
	sumf.denominator = f1.denominator * f2.numerator;
	return sumf;
}

int main()
{

	char ch = '/', zn;
	do
	{
		system("cls");
		cout << "enter 1-st fraction" << endl;
		cin >> f1.numerator >> ch >> f1.denominator;
		cout << "Enter symbol" << endl;
		cin >> zn;
		cout << "enter 2-nd fraction" << endl;
		cin >> f2.numerator >> ch >> f2.denominator;
		switch (zn)
		{
		case '+': sumf = fadd(f1, f2); break;
		case '-': sumf = fsub(f1, f2); break;
		case '*': sumf = fmul(f1, f2); break;
		case '/': sumf = fdiv(f1, f2); break;
		}
		cout << sumf.numerator << ch << sumf.denominator << endl;
		cout << "Repeat? (y,n)" << endl;
		cin >> ch;
	} while (ch == 'y');
	return 0;

}


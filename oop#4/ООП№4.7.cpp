#include "pch.h"
#include <iostream>
using namespace std;

double power(char n, int p)
{
	char res = n;
	for (int j = 1; j <= p; j++)
		res *= n;
	return res;
}

double power(int n, int p)
{
	int res = n;
	for (int j = 1; j <= p; j++)
		res *= n;
	return res;
}

double power(long n, int p)
{
	long res = n;
	for (int j = 1; j <= p; j++)
		res *= n;

	return res;
}

double power(float n, int p)
{
	float res = n;
	for (int j = 1; j <= p; j++)
		res *= n;
	return res;
}

double n;
int p;

int main()
{
	cout << "result char: " << power('r', 2) << endl;
	cout << "result int: " << power(3, 2) << endl;
	cout << "result long: " << power(3L, 2) << endl;
	cout << "result float: " << power(3.3F, 2) << endl;
	system("pause");
	return 0;
}


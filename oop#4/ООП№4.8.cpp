#include "pch.h"
#include <iostream>
using namespace std;

void swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main()
{

	int n1, n2;

	cout << "Enter 1-st number and 2-st number: ";
	cin >> n1 >> n2;

	swap(n1, n2);

	cout << "\n" << n1 << ' ' << n2 << endl;

	system("pause");
	return 0;

}

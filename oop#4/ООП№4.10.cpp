#include "pch.h"
#include <iostream>
using namespace std;

void swap(int& num1, int& num2, int& num)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	num++;
	cout << num1 << ' ' << num2 << " : " << num << endl;
}


int main()
{
	int num = -1;

	int n1, n2;
	cout << "Enter 1-st number and 2-st number: ";
	cin >> n1 >> n2;
	
	swap(n1, n2, num);
	swap(n1, n2, num);
	swap(n1, n2, num);
	swap(n1, n2, num);
	swap(n1, n2, num);
	swap(n1, n2, num);
	swap(n1, n2, num);
	swap(n1, n2, num);
	swap(n1, n2, num);
	swap(n1, n2, num);


	system("pause");
	return 0;

}


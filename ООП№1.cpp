
#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

struct sterling
{
	int funt;
	int shilling;
	int pens;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int s;

	do
	{
		cout << "4.  Стихотворение" << endl;
		cout << "5.  Проверка буквы: 0 - буква заглавная, иначе - буква строчная" << endl;
		cout << "6.  Вывод эквивалентных сумм в других валютах" << endl;
		cout << "7.  гр. по Цельсию -> гр. по Фаренгейту" << endl;
		cout << "8.  Вывод#1" << endl;
		cout << "9.  Сложение дробей" << endl;
		cout << "10. Из старой денежной системы в новую" << endl;
		cout << "11. Вывод#2" << endl;
		cout << "12. Из новой денежной системы в старую" << endl;
		cout << "0.  Завершить работу" << endl;
		cout << "Выбирите команду: ";
		cin >> s;
		switch (s)
		{
		case 4:
		{
			system("cls");
			cout << "Ах, метель такая, просто черт возьми!" << endl
				<< "Забивает крышу белыми гвоздьми." << endl
				<< "Только мне не страшно, и в моей судьбе" << endl
				<< "Непутевым сердцем я прибит к тебе." << endl << endl;
			cout << endl;
			system("pause");
			break;
		}

		case 5:
		{
			system("cls");
			char s;
			cout << "Введите букву: ";
			cin >> s;
			cout << islower(s);
			cout << endl;
			system("pause");
			break;
		}

		case 6:

		{
			system("cls");
			const float pound = 1.487;
			const float franc = 0.172;
			const float mark = 0.584;
			const float JPY = 0.00955;
			int dollar;

			cout << "Введите количество долларов: $";
			cin >> dollar;
			cout << "1 фунт = $" << dollar / pound;
			cout << "\n1 франк = $" << dollar / franc;
			cout << "\n1 нем. марка = $" << dollar / mark;
			cout << "\n1 японская иена = $" << dollar / JPY;
			cout << endl;
			system("pause");
			break;
		}

		case 7:
		{
			system("cls");
			float celsius;
			cout << "Введите значение градусов по шкале Цельсия: ";
			cin >> celsius;
			cout << celsius << " градусов по цельсию = " << (celsius * 9 / 5) + 32 << " градусов по фарингейту.";
			cout << endl;
			system("pause");
			break;
		}

		case 8:
		{
			system("cls");
			cout << "1990" << setw(15) << setfill('.') << "135" << endl
				<< "1991" << setw(15) << setfill('.') << "7290" << endl
				<< "1992" << setw(15) << setfill('.') << "11300" << endl
				<< "1993" << setw(15) << setfill('.') << "16200" << endl;
			cout << endl;
			system("pause");
			break;
		}

		case 9:

		{
			system("cls");
			int a, b, c, d;
			char del = '/';
			cout << "Введите первую дробь: " << endl;
			cin >> a >> del >> b;
			cout << "Введите вторую дробь: " << endl;
			cin >> c >> del >> d;
			cout << "Сумма равна: " << ((a*d) + (b*c)) << "/" << (b*d) << endl;
			cout << endl;
			system("pause");
			break;
		}

		case 10:

		{
			system("cls");
			float funt, shil, pens, res, shil_p;
			const float p_new_p = 2.4, fun = 20, pen = 12, st_funt = 100;

			cout << "Программа преобразования Валюты Великобритании из старого в новый формат:" << endl;

			cout << "Введите количество фунтов: ";
			cin >> funt;

			cout << "Введите количество шилингов: ";
			cin >> shil;

			cout << "Введите количество пенсов: ";
			cin >> pens;

			res = funt * fun*pen + pens;
			shil_p = shil * pen;

			res += shil_p;

			res /= st_funt;

			res /= p_new_p;

			cout << "Десятичных фунтов: £" << res << endl;

			cout << endl;
			system("pause");
			break;
		}

		case 11:
		{
			system("cls");
			cout << setiosflags(ios::left)
				<< setfill('.') << setw(10) << "Фамилия"
				<< setfill('.') << setw(10) << "Имя"
				<< setfill('.') << setw(15) << "Адрес"
				<< setfill('.') << setw(12) << "Город" << "\n"
				<< setfill('.') << setw(10) << "Петров"
				<< setfill('.') << setw(10) << "Василий"
				<< setfill('.') << setw(15) << "Кленовая 16"
				<< setfill('.') << setw(12) << "Санкт-Петербург" << "\n"
				<< setfill('.') << setw(10) << "Иванов"
				<< setfill('.') << setw(10) << "Сергей"
				<< setfill('.') << setw(15) << "Осиновая 3"
				<< setfill('.') << setw(12) << "Находка" << "\n"
				<< setfill('.') << setw(10) << "Сидоров"
				<< setfill('.') << setw(10) << "Иван"
				<< setfill('.') << setw(15) << "Березовая 21"
				<< setfill('.') << setw(12) << "Калининград" << "\n";
			cout << endl;
			system("pause");
			break;
		}
		case 12:
		{
			system("cls");
			sterling sterling1;
			sterling1.funt, sterling1.shilling, sterling1.pens;
			double desyatichnujFunt;
			float drobchast;

			cout << "Введите сумму в десятичных фунтах : "; cin >> desyatichnujFunt;

			sterling1.funt = static_cast<int>(desyatichnujFunt);
			drobchast = desyatichnujFunt - sterling1.funt;
			sterling1.shilling = drobchast * 20;
			sterling1.pens = drobchast * 240 - sterling1.shilling * 12 + 1;
			cout << "\nСумма в старых фунтах: " << sterling1.funt << '.' << sterling1.shilling << '.' << sterling1.pens << endl;

			cout << endl;
			system("pause");
			break;
		}
		case 0:
			break;
		default:
			system("cls");
			cout << "Ошибка, попробуйте снова" << endl;
			cout << endl;
			system("pause");
			break;
		}
		system("cls");
	} while (s != 0);
	return 0;
}

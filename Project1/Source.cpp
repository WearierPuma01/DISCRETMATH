#include <iostream>
#include <string>
#include "NUM.h"
#include "InputOutLong.h"
#include "N.h"
#include "Z.h"
using namespace std;


int main()
{
	bool b;
	short int a;
	NUM* N1, * N2, * N3;
	while (true)
	{
		setlocale(LC_ALL, "ru");
		cout << "===============Выберите модуль=======================" << "\n"
			<< "1. Натуральные числа с нулем." << "\n"
			<< "2. Целые числа." << "\n"
			/*<< "3. Рациональные числа (дроби)." << "\n"
			<< "4. Многочлен с рациональными коэфицентами." << "\n"*/
			<< "0. Выход из программы." << "\n"
			<< "=====================================================" << "\n";
		int choose, choose2;
		cin >> choose;
		cout << "\n";
		switch (choose)
		{
		case 1:
			cout << "===============Выберите функцию======================" << "\n"
				<< "1.1 Сравнение натуральных числел." << "\n"
				<< "1.2 Проверка на 0." << "\n"
				<< "1.3 Добавление 1 к натуральному числу." << "\n"
				<< "1.4 Сложение натуральных чисел." << "\n"
				<< "1.5 Вычитание из первого большего натурального числа второго меньшего или равного." << "\n"
				<< "1.6 Умножение натурального числа на цифру." << "\n"
				<< "1.7 Умножение натурального числа на 10^k." << "\n"
				<< "1.8 Умножение натуральных чисел." << "\n"
				<< "1.9 Вычитание из натурального другого натурального, умноженного на цифру для случая с неотрицательным результатом." << "\n"
				<< "1.10 Вычисление первой цифры деления большего натурального на меньшее, домноженное на 10^k,где k - номер позиции этой цифры." << "\n"
				<< "1.11 Частное от деления большего натурального числа на меньшее или равное натуральное с остатком." << "\n"
				<< "1.12 Остаток от деления большего натурального числа на меньшее или равное натуральное с остатком." << "\n"
				<< "1.13 НОД натуральных чисел." << "\n"
				<< "1.14 НОК натуральных чисел." << "\n"
				<< "=====================================================" << "\n";
			cin >> choose2;
			switch (choose2)
			{
			case 1:

				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				a = COM_NN_D(N1, N2);
				switch (a)					 //Вывод на экран результата
				{
				case 0:
					cout << "Числа равны." << "\n";
					break;
				case 1:
					cout << "Первое больше второго." << "\n";
					break;
				case 2:
					cout << "Второе больше первого." << "\n";
					break;
				}
				break;
			case 2:
				N1 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				b = NZER_N_B(N1);
				if (b == 1)
					cout << "Число не равно 0." << "\n";
				else
					cout << "Число рано 0." << "\n";
				break;
			case 3:
				N1 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				N3 = ADD_1N_N(N1);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 4:
				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = ADD_NN_N(N1, N2);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 5:
				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = SUB_NN_N(N1, N2);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 6:
				short int q;
				N1 = new NUM;
				cout << "Введите умножаемое число :" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите цифру:" << "\t";
				cin >> q;
				cout << "\n";
				N3=MUL_ND_N(N1, q);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 7:
				long int w;
				N1 = new NUM;
				cout << "Введите умножаемое число :" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите степень десяти:" << "\t";
				cin >> w;
				cout << "\n";
				N3 = MUL_Nk_N(N1, w);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 8:
				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = MUL_NN_N(N1, N2);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 9:
				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				cout << "Введите цифру:" << "\t";
				cin >> a;
				cout << "\n";
				N3 = SUB_NDN_N(N1, N2, a);
				if (N3->a == 01)
					cout << "Результат получается отрицательный!" << "\n";
				else
				{
					cout << "Результат:" << "\t";
					output(N3);
					cout << "\n";
				}
				break;
			case 10:
				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				a=DIV_NN_Dk(N1, N2);
				cout << "Результат:" << "\t" << a << "\n";
				break;
			case 11:
				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = DIV_NN_N(N1, N2);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 12:
				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = MOD_NN_N(N1, N2);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 13:
				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = GCF_NN_N(N1, N2);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 14:
				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = LCM_NN_N(N1,N2);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			default:
				break;
			}
				break;

		case 2:
			cout << "===============Выберите функцию======================" << "\n"
				<< "1.1 Абсолютная величина числа." << "\n"
				<< "1.2 Определение положительности числа." << "\n"
				<< "1.3 Умножение целого на (-1)." << "\n"
				<< "1.4 Сложение целых чисел." << "\n"
				<< "1.5 Вычитание целых чисел." << "\n"
				<< "1.6 Умножение целых чисел." << "\n"
				<< "1.7 Частное от деления большего целого числа на меньшее." << "\n"
				<< "1.8 Остаток от деления большего целого числа на меньшее." << "\n"
				<< "=====================================================" << "\n";
			cin >> choose2;
			switch (choose2)
			{
			case 1:
				N1 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				N3 = ABS_Z_N(N1);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 2:
				N1 = new NUM;
				short int sig;
				cout << "Введите число 1:" << "\t";
				input(N1);
				sig = POZ_Z_D(N1);
				switch (sig)
				{
				case 1: 
					cout << "Число отрицательное!" << "\n";
					break;
				case 2:
					cout << "Число положительное!" << "\n";
					break;
				case 0:
					cout << "Число равно 0!" << "\n";
					break;
				}
				break;
			case 3:
				N1 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				N3 = MUL_ZM_Z(N1);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 4:
				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = ADD_ZZ_Z(N1, N2);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 5:
				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = SUB_ZZ_Z(N1, N2);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 6:
				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = MUL_ZZ_Z(N1, N2);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 7:
				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = DIV_ZZ_Z(N1, N2);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 8:
				N1 = new NUM;
				N2 = new NUM;
				cout << "Введите число 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "Введите число 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = MOD_ZZ_Z(N1, N2);
				cout << "Результат:" << "\t";
				output(N3);
				cout << "\n";
				break;
			}
			break;


		case 3:
			break;

		case 4:
			break;
		case 0:
			return 0;
		}


	}
}



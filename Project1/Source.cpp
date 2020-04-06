#include <iostream>
#include <string>
#include "NUM.h"
#include "InputOutLong.h"
#include "N.h"
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
			<< "3. Рациональные числа (дроби)." << "\n"
			<< "4. Многочлен с рациональными коэфицентами." << "\n"
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
			}
			/*NUM * N1;
			N1 = new NUM;

			input(N1);
			output(N1);*/
			break;

		case 2:
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



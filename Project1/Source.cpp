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
	NUM* N1, * N2;
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
				<< "1. Сравнение натуральных числел." << "\n"
				<< "2. Проверка на 0." << "\n"
				<< "3. Добавление 1 к натуральному числу." << "\n"
				<< "4. Многочлен с рациональными коэфицентами." << "\n"
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
				N1 = ADD_1N_N(N1);
				cout << "Результат:" << "\t";
				output(N1);
				cout << "\n";
				break;
			case 4:

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



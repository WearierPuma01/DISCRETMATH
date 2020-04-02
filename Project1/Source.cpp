#include <iostream>
#include <string>
#include "NUM.h"
#include "InputOutLong.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	cout << "===============Выберите модуль=======================" << "\n"
		<< "1. Натуральные числа с нулем."
		<< "2. Целые числа."
		<< "3. Рациональные числа (дроби)."
		<< "4. Многочлен с рациональными коэфицентами."
		<< "=====================================================" << "\n";
	int choose;
	cin >> choose;
	cout << "\n";
	switch (choose)
	{
	case 1:
		NUM * N1;
		N1 = new NUM;
		
		input(N1);
		output(N1);
	}

	

}



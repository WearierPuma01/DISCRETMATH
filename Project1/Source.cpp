#include <iostream>
#include <string>
#include "NUM.h"
#include "InputOutLong.h"
#include "N.h"
using namespace std;


int main()
{
	while (true)
	{
		setlocale(LC_ALL, "ru");
		cout << "===============�������� ������=======================" << "\n"
			<< "1. ����������� ����� � �����." << "\n"
			<< "2. ����� �����." << "\n"
			<< "3. ������������ ����� (�����)." << "\n"
			<< "4. ��������� � ������������� ������������." << "\n"
			<< "=====================================================" << "\n";
		int choose, choose2;
		cin >> choose;
		cout << "\n";
		switch (choose)
		{
		case 1:
			cout << "===============�������� �������======================" << "\n"
				<< "1. ��������� ����������� ������." << "\n"
				<< "2. �������� �� 0." << "\n"
				<< "3. ������������ ����� (�����)." << "\n"
				<< "4. ��������� � ������������� ������������." << "\n"
				<< "=====================================================" << "\n";
			cin >> choose2;
			switch (choose2)
			{
			case 1:
				short int a;
				NUM* N1, * N2;
				N1 = new NUM;
				N2 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� ����� 2:" << "\t";
				input(N2);
				cout << "\n";
				a = COM_NN_D(N1, N2);
				switch (a)					 //����� �� ����� ����������
				{
				case 0:
					cout << "����� �����." << "\n";
					break;
				case 1:
					cout << "������ ������ �������." << "\n";
					break;
				case 2:
					cout << "������ ������ �������." << "\n";
					break;
				}		
				break;
			case 2:


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



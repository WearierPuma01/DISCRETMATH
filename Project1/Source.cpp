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
				<< "1.1 ��������� ����������� ������." << "\n"
				<< "1.2 �������� �� 0." << "\n"
				<< "1.3 ���������� 1 � ������������ �����." << "\n"
				<< "1.4 �������� ����������� �����." << "\n"
				<< "1.5 ��������� �� ������� �������� ������������ ����� ������� �������� ��� �������." << "\n"
				<< "1.6 ��������� ������������ ����� �� �����." << "\n"
				<< "1.7 ��������� ������������ ����� �� 10^k." << "\n"
				<< "=====================================================" << "\n";
			cin >> choose2;
			switch (choose2)
			{
			case 1:

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
				N1 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				b = NZER_N_B(N1);
				if (b == 1)
					cout << "����� �� ����� 0." << "\n";
				else
					cout << "����� ���� 0." << "\n";
				break;
			case 3:
				N1 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				N3 = ADD_1N_N(N1);
				cout << "���������:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 4:
				N1 = new NUM;
				N2 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� ����� 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = ADD_NN_N(N1, N2);
				cout << "���������:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 5:
				N1 = new NUM;
				N2 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� ����� 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = SUB_NN_N(N1, N2);
				cout << "���������:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 6:
				short int q;
				N1 = new NUM;
				cout << "������� ���������� ����� :" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� �����:" << "\t";
				cin >> q;
				cout << "\n";
				N3=MUL_ND_N(N1, q);
				cout << "���������:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 7:
				long int w;
				N1 = new NUM;
				cout << "������� ���������� ����� :" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� ������� ������:" << "\t";
				cin >> w;
				cout << "\n";
				N3 = MUL_Nk_N(N1, w);
				cout << "���������:" << "\t";
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



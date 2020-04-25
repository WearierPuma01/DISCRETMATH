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
		cout << "===============�������� ������=======================" << "\n"
			<< "1. ����������� ����� � �����." << "\n"
			<< "2. ����� �����." << "\n"
			/*<< "3. ������������ ����� (�����)." << "\n"
			<< "4. ��������� � ������������� ������������." << "\n"*/
			<< "0. ����� �� ���������." << "\n"
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
				<< "1.8 ��������� ����������� �����." << "\n"
				<< "1.9 ��������� �� ������������ ������� ������������, ����������� �� ����� ��� ������ � ��������������� �����������." << "\n"
				<< "1.10 ���������� ������ ����� ������� �������� ������������ �� �������, ����������� �� 10^k,��� k - ����� ������� ���� �����." << "\n"
				<< "1.11 ������� �� ������� �������� ������������ ����� �� ������� ��� ������ ����������� � ��������." << "\n"
				<< "1.12 ������� �� ������� �������� ������������ ����� �� ������� ��� ������ ����������� � ��������." << "\n"
				<< "1.13 ��� ����������� �����." << "\n"
				<< "1.14 ��� ����������� �����." << "\n"
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
			case 8:
				N1 = new NUM;
				N2 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� ����� 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = MUL_NN_N(N1, N2);
				cout << "���������:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 9:
				N1 = new NUM;
				N2 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� ����� 2:" << "\t";
				input(N2);
				cout << "\n";
				cout << "������� �����:" << "\t";
				cin >> a;
				cout << "\n";
				N3 = SUB_NDN_N(N1, N2, a);
				if (N3->a == 01)
					cout << "��������� ���������� �������������!" << "\n";
				else
				{
					cout << "���������:" << "\t";
					output(N3);
					cout << "\n";
				}
				break;
			case 10:
				N1 = new NUM;
				N2 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� ����� 2:" << "\t";
				input(N2);
				cout << "\n";
				a=DIV_NN_Dk(N1, N2);
				cout << "���������:" << "\t" << a << "\n";
				break;
			case 11:
				N1 = new NUM;
				N2 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� ����� 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = DIV_NN_N(N1, N2);
				cout << "���������:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 12:
				N1 = new NUM;
				N2 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� ����� 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = MOD_NN_N(N1, N2);
				cout << "���������:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 13:
				N1 = new NUM;
				N2 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� ����� 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = GCF_NN_N(N1, N2);
				cout << "���������:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 14:
				N1 = new NUM;
				N2 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� ����� 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = LCM_NN_N(N1,N2);
				cout << "���������:" << "\t";
				output(N3);
				cout << "\n";
				break;
			default:
				break;
			}
				break;

		case 2:
			cout << "===============�������� �������======================" << "\n"
				<< "1.1 ���������� �������� �����." << "\n"
				<< "1.2 ����������� ��������������� �����." << "\n"
				<< "1.3 ��������� ������ �� (-1)." << "\n"
				<< "1.4 �������� ����� �����." << "\n"
				<< "1.5 ��������� ����� �����." << "\n"
				<< "1.6 ��������� ����� �����." << "\n"
				<< "1.7 ������� �� ������� �������� ������ ����� �� �������." << "\n"
				<< "1.8 ������� �� ������� �������� ������ ����� �� �������." << "\n"
				<< "=====================================================" << "\n";
			cin >> choose2;
			switch (choose2)
			{
			case 1:
				N1 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				N3 = ABS_Z_N(N1);
				cout << "���������:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 2:
				N1 = new NUM;
				short int sig;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				sig = POZ_Z_D(N1);
				switch (sig)
				{
				case 1: 
					cout << "����� �������������!" << "\n";
					break;
				case 2:
					cout << "����� �������������!" << "\n";
					break;
				case 0:
					cout << "����� ����� 0!" << "\n";
					break;
				}
				break;
			case 3:
				N1 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				N3 = MUL_ZM_Z(N1);
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
				N3 = ADD_ZZ_Z(N1, N2);
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
				N3 = SUB_ZZ_Z(N1, N2);
				cout << "���������:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 6:
				N1 = new NUM;
				N2 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� ����� 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = MUL_ZZ_Z(N1, N2);
				cout << "���������:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 7:
				N1 = new NUM;
				N2 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� ����� 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = DIV_ZZ_Z(N1, N2);
				cout << "���������:" << "\t";
				output(N3);
				cout << "\n";
				break;
			case 8:
				N1 = new NUM;
				N2 = new NUM;
				cout << "������� ����� 1:" << "\t";
				input(N1);
				cout << "\n";
				cout << "������� ����� 2:" << "\t";
				input(N2);
				cout << "\n";
				N3 = MOD_ZZ_Z(N1, N2);
				cout << "���������:" << "\t";
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



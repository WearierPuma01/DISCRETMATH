#include "iostream"
#include <windows.h> 
#include <string> 
#include <sstream> 
#include <cmath> 
#include <vector> 
#include <tuple>

using namespace std;

vector<unsigned> simple(int);

void reduction(int&, int&);

tuple < int, int, int> extract(int, int);

void RED_Q_Q()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	for (;;)
	{
		cout << "Введите числитель и знаменатель дроби через пробел или е для выхода";
		string s;
		getline(cin, s);
		if (s.size() == 1 && s[0] == 'e')
		{
			break;
		}
		int aa, bb;
		stringstream ss(s);
		ss >> aa >> bb;
		if (ss.rdbuf()->in_avail() != 0)
		{
			cout << "Ошибка при вводе.Пожалуйста, повторите" << endl;
			continue;
		}
		reduction(aa, bb);
		auto ex = extract(aa, bb);
		cout << "Сокращённая дробь " << aa << " / " << bb << endl;
		cout << "Целая часть " << get<0>(ex) << " дробная часть " << get<1>(ex) << " / " << get<2>(ex) << endl;
	}
	cout << "Работа программы завершена" << endl;

	cin.get();
}

vector<unsigned> simple(int a)
{
	vector<unsigned> v;
	for (unsigned u = 2; u <= abs(a); ++u)
	{
		bool b = false;
		for (unsigned p = 2; p < u; ++p)
		{
			if (u % p == 0)
			{
				b = true;
				break;
			}
			if (!b)
			{
				v.push_back(u);
			}
		}
	}
	return v;
}

void reduction(int& aa, int& bb)
{
	int z = (aa < bb) ? aa : bb;
	auto smp = simple(z);
	for (;;)
	{
		bool b = true;
		for (auto t : smp)
		{
			if (t > z)
			{
				break;
			}
			if (aa % t == 0 && bb % t == 0)
			{
				aa /= t;
				bb /= t;
				z = (aa < bb) ? aa : bb;
				b = false;
				break;
			}
		}
		if (b)
		{
			break;
		}
	}
}

tuple<int, int, int > extract(int aa, int bb)
{
	int c = aa / bb;
	int e1 = aa - (c * bb);
	int e2 = bb;
	return make_tuple(c, e1, e2);
}

bool INT_Q_B()
{// пока только наброски 
	setlocale(LC_ALL, "ru");//и я пока не могу понять, какую переменную использоват, и как интегрировать:/*NUM * N1;
	                                                                                                    //N1 = new NUM;

	                                                                                                    // input(N1);
	                                                                                                    // output(N1); *//
	float* NUM,* N1;
	N1 = new NUM;
	cout << "Введённое число является целым? ->";
	cin >> N1;
	if (N1 != int(N1))
	{
		cout << "Нет" << endl;
	}
	else
	{
		cout << "Да" << endl;
	}
}

void TRANS_Z_Q() {

}


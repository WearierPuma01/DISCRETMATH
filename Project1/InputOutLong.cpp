#include "InputOutLong.h"

void input(NUM* top) //‘ункци€ ввода длинного числа с клавиатуры
{
	NUM* p, * pr; //”казатели на предыдущий и текущий элемент 
	bool sign = 0;
	int i;
	string str, s;
	cout << "¬ведите число: ";
	cin >> str;
	cout << "\n";
	top->prev = NULL;
	top->next = NULL;
	p = top;
	pr = top;

	for (i = 0; i < str.size(); i++)
	{
		s = str[i];
		if (s == "-")
		{
			sign = 1;
			continue;
		}
		p->a = atoi(s.c_str());
		if (i > 0)
		{
			p->prev = pr;
			pr = p;
		}
		if (i != (str.size() - 1))
		{
			p->next = new NUM;
			p = p->next;
		}
		else
			p->next = NULL;
	}
	if (sign == 1)
		top->a = top->a * -1;
}

void output(NUM* top)
{
	NUM* p;
	p = top;
	cout << "„исло: ";
	while (true)
	{
		cout << p->a;
		if (p->next == NULL)
			break;
		else
			p = p->next;
	}
	cout << "\n";
}

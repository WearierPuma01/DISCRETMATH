#include "InputOutLong.h"

void input(NUM* top) //Функция ввода длинного числа с клавиатуры
{
	NUM* p, * pr; //Указатели на предыдущий и текущий элемент 
	bool sign = 0; // Знак	
	int i;
	string str, s; // str - строка с числом , s - в роли каждого символа
	cout << "Введите число: ";
	cin >> str;
	cout << "\n";
	top->prev = NULL;
	top->next = NULL;
	p = top;
	pr = top;

	for (i = 0; i < str.size(); i++) // каждый структурный элемент заполняется разрядом числа
	{
		s = str[i]; //забрасывание элемента строки в s
		if (s == "-") // условие при котором если строка содержит минус(число отрицательное) то элементы структуры начинают заполняться со второго символа строки str, потом первый элемент приобретает значение -
		{
			sign = 1;
			continue;
		}
		p->a = atoi(s.c_str());//преобразование типа string в int
		if (i > 0)
		{
			p->prev = pr;
			pr = p;
		}
		if (i != (str.size() - 1))//условия заполнения указателя next последнего элемента на NULL
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

void output(NUM* top) //Функция вывода числа на экран
{
	NUM* p;
	p = top;
	cout << "Число: ";
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

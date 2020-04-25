#include "SIZE.h"
//Файл с функциями работающими с размерностью числа.
int size(NUM* N) //Подсчет количества разрядов в числе
{
	int size = 0;
	NUM* p;
	p = N;
	while (true)
	{
		size++;
		if (p->next == NULL)
			break;
		else
			p = p->next;
	}
	return size; //Возврат количества разрядов в числе.
}

NUM* end_num(NUM* N) //Вводится указатель на первый разряд, возвращает указатель на последний
{
	NUM* end;
	end = N;
	while (true)
	{

		if (end->next == NULL)
			break;
		else
			end = end->next;
	}
	return end; //Возврат указателя на последний разряд.
}

NUM* COPY(NUM* N)
{
	NUM* C,*p1,*p2;
	p1 = N;
	C = new NUM;
	C->prev = NULL;
	C->a = N->a;
	p2 = C;
	while (p1->next != NULL)
	{
		p2->next = new NUM;
		p2->next->prev = p2;
		p2 = p2->next;
		p1 = p1->next;
		p2->a = p1->a;
	}
	p2->next = NULL;
	return C;
}

void delNUM(NUM* N)
{
	NUM* p,*q;
	p = N;
	while (p->next != NULL)
	{
		p = p->next;
		q = p->prev;
		delete q;
	}
	delete p;
}

bool ifnopozBIG(NUM* N1, NUM* N2)
{
	short int a;
	NUM* p1, * p2,*q;
	if (N1->a < 0)
	{
		p1 = COPY(N1);
		p2 = COPY(N2);
	}
	else
	{
		p1 = COPY(N2);
		p2 = COPY(N1);
	}
	q = p1;
	p1 = ABS_Z_N(p1);
	delNUM(q);
	a = COM_NN_D(p1, p2);
	if (a == 1)
		return 1;
	else
		return 0;
}
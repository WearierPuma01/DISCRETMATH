#include "N.h"


int COM_NN_D(NUM *N1, NUM *N2)
{
	NUM* p1,*p2;
	p1 = N1;
	p2 = N2;
	if (size(N1) > size(N2)) //Проверка на разность длинн чисел
		return 1;
	else 
		if (size(N1) < size(N2))  //Проверка на разность длинн чисел
			return 2;
		else
			while (true) // Поразрядное сравнение
			{
				if (p1->a > p2->a)
					return 1;
				if (p1->a < p2->a)
					return 2;
				if (p1->next == NULL)
					break;
				else
				{
					p1 = p1->next;
					p2 = p2->next;
				}	
			}
	return 0; // Возврат нуля в случае одинаковых чисел
}

bool NZER_N_B(NUM* N)
{
	NUM* p;
	p = N;
	if ((N->a == 0) && (N->next == NULL))
		return 0;
	while (true)
	{
		if (p->a > 0)
			return 1;
		if (p->next == NULL)
			break;
		else
			p = p->next;
	}
	return 0;
}

NUM* ADD_1N_N(NUM* N)
{
	short int ost=0;
	NUM* p;
	p = end_num(N);
	p->a++;
	ost = p->a / 10;
	p->a = p->a % 10;
	while (ost!=0)
	{
		if (p->prev == NULL)
		{
			p->prev = new NUM;
			p->prev->a = 0;
			p->prev->next = p;
		}
		p = p->prev;
		p->a += ost;
		ost = p->a / 10;
		p->a = p->a % 10;
	}
	while (p->prev != NULL)
	{
		p = p->prev;
	}
	return p;
}

NUM* ADD_NN_N(NUM* N1, NUM* N2)
{

}
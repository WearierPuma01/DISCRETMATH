#include "N.h"


int COM_NN_D(NUM *N1, NUM *N2)
{
	NUM* p1,*p2;
	p1 = N1;
	p2 = N2;
	if (size(N1) > size(N2)) //ѕроверка на разность длинн чисел
		return 1;
	else 
		if (size(N1) < size(N2))  //ѕроверка на разность длинн чисел
			return 2;
		else
			while (true) // ѕоразр€дное сравнение
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
	return 0; // ¬озврат нул€ в случае одинаковых чисел
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
			p->prev->prev = NULL;
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
	bool check_end=0;
	short int ost=0;
	NUM* p1, * p2;
	if (COM_NN_D(N1, N2) == 2)
	{
		p1 = N2;
		p2 = N1;
	}
	else
	{
		p1 = N1;
		p2 = N2;
	}
	p1 = end_num(p1);
	p2 = end_num(p2);
	p1->a+=p2->a;
	ost = p1->a / 10;
	p1->a = p1->a % 10;
	while (true)
	{
		if (p1->prev == NULL)
		{
			p1->prev = new NUM;
			p1->prev->a = 0;
			p1->prev->next = p1;
			p1->prev->prev = NULL;
		}
		p1 = p1->prev;
		p1->a += ost;
		if (p2->prev != NULL)
		{
			p2 = p2->prev;
			p1->a += p2->a;

		}
		else
			check_end = 1;
		ost = p1->a / 10;
		p1->a = p1->a % 10;
		if ((ost == 0) && (check_end == 1))
			break;
	}
	while (p1->prev != NULL)
	{
		p1 = p1->prev;
	}
	return p1;
}

NUM* SUB_NN_N(NUM* N1, NUM* N2)
{
	bool check_end=0;
	short int ost=0;
	NUM* p1, * p2;
	if (COM_NN_D(N1, N2) == 2)
	{
		p1 = N2;
		p2 = N1;
	}
	else
	{
		p1 = N1;
		p2 = N2;
	}
	p1 = end_num(p1);
	p2 = end_num(p2);
	while (true)
	{
		p1->a -= ost;
		if (check_end==0) // не работает разность одинаковых чисел
		{
			p1->a -= p2->a;
		}
		ost = 0;
		if (p1->a < 0)
		{
			p1->a += 10;
			ost = 1;
		}
		if ((p2->prev == NULL) && (ost == 0))
			break;
		if (p2->prev == NULL)
		{
			check_end = 1;
		}
		else
			p2 = p2->prev;
		
		if (p1->prev == NULL)
			break;
		else
			p1 = p1->prev;
	}
	while (p1->prev != NULL)
	{
		p1 = p1->prev;
	}
	while (p1->a == 0)
	{
		p1 = p1->next;
		delete p1->prev;
		p1->prev = NULL;
	}
	return p1;
}
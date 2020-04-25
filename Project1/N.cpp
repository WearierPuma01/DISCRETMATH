#include "N.h"


int COM_NN_D(NUM* N1, NUM* N2)
{
	NUM* p1, * p2;
	p1 = N1;
	p2 = N2;
	if (size(N1) > size(N2)) //Проверка на разность длинн чисел. Возврат 1 если первое число больше
		return 1;
	else
		if (size(N1) < size(N2))  //Проверка на разность длинн чисел. Возврат 2 если второе число больше
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
		if (p->a != 0)
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
	short int ost = 0;
	NUM* p,*N3;
	N3 = COPY(N);
	p = end_num(N3);
	p->a++;
	ost = p->a / 10;
	p->a = p->a % 10;
	while (ost != 0)
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
	bool check_end = 0;
	short int ost = 0;
	NUM* p1, * p2;
	if (COM_NN_D(N1, N2) == 2)
	{
		p1 = COPY(N2);
		p2 = N1;
	}
	else
	{
		p1 = COPY(N1);
		p2 = N2;
	}
	p1 = end_num(p1);
	p2 = end_num(p2);
	p1->a += p2->a;
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
	while (p1->a == 0)
	{
		if (p1->next == NULL)
			break;
		else
			p1 = p1->next;
		delete p1->prev;
		p1->prev = NULL;
	}
	return p1;
}

NUM* SUB_NN_N(NUM* N1, NUM* N2)
{
	bool check_end = 0;
	short int ost = 0;
	NUM* p1, * p2;
	if (COM_NN_D(N1, N2) == 2)
	{
		p1 = COPY(N2);
		p2 = N1;
	}
	else
	{
		p1 = COPY(N1);
		p2 = N2;
	}
	p1 = end_num(p1);
	p2 = end_num(p2);
	while (true)
	{
		p1->a -= ost;
		if (check_end == 0) 
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
		if (p1->next == NULL)
			break;
		else
			p1 = p1->next;
		delete p1->prev;
		p1->prev = NULL;
	}
	return p1;
}

NUM* MUL_ND_N(NUM* N, short int a)
{
	short int ost=0;
	NUM* p,*Np;
	Np = COPY(N);
	p = end_num(Np);
	while (true)
	{
		p->a *= a;
		p->a += ost;
		ost = p->a / 10;
		p->a = p->a % 10;
		if ((ost == 0) && (p->prev == NULL))
			break;
		else
			if (p->prev == NULL)
			{
				p->prev = new NUM;
				p->prev->next = p;
				p->prev->prev = NULL;
				p->prev->a = 0;
				p = p->prev;
			}
			else
				p=p->prev;
	}
	while (p->a == 0)
	{
		if (p->next == NULL)
			break;
		else
			p = p->next;
		delete p->prev;
		p->prev = NULL;
	}
	return p;
}

NUM* MUL_Nk_N(NUM* N, long int a)
{
	long int i;
	NUM* p, * Np;
	Np = COPY(N);
	p = end_num(Np);
	for (i = 0; i < a; i++)
	{
		p->next = new NUM;
		p->next->prev = p;
		p->next->next = NULL;
		p->next->a = 0;
		p = p->next;
	}
	while (p->a == 0)
	{
		if (p->next == NULL)
			break;
		else
			p = p->next;
		delete p->prev;
		p->prev = NULL;
	}
	return Np;
}

NUM* MUL_NN_N(NUM* N1, NUM* N2)
{
	NUM* p1, * p2,*N4,*N3,*q;
	N4 = new NUM;
	N4->next = NULL;
	N4->prev = NULL;
	N4->a = 0;
	N3 = new NUM;
	N3->next = NULL;
	N3->prev = NULL;
	N3->a = 0;
	long int sz,i;
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
	sz = size(N2);
	p2 = end_num(p2);
	for (i = 0; i < sz; i++)
	{
		q = N3;
		N3 = MUL_ND_N(p1, p2->a);
		delNUM(q);
		q = N3;
		N3 = MUL_Nk_N(N3, i);
		delNUM(q);
		q = N4;
		N4 = ADD_NN_N(N4, N3);
		delNUM(q);

		if (p2->prev != NULL)
			p2 = p2->prev;
		else 
			break;
	}
	return N4;
}

NUM* SUB_NDN_N(NUM* N1, NUM* N2, short int a)
{
	NUM* p1, * p2, * N4, * N3, * q;
	short int maxer;
	N4 = new NUM;
	N4->next = NULL;
	N4->prev = NULL;
	N4->a = 0;
	N3 = new NUM;
	N3->next = NULL;
	N3->prev = NULL;
	N3->a = 0;
	q = N3;
	N3 = MUL_ND_N(N2, a);
	delNUM(q);
	maxer = COM_NN_D(N1, N3);
	if (maxer == 2)
	{
		N4->a = 101;
		delNUM(N3);
	}
	else
	{
		q = N4;
		N4 = SUB_NN_N(N1, N3);
		delNUM(q);
		delNUM(N3);
	}
	return N4;
}

short int DIV_NN_Dk(NUM* N1, NUM* N2)
{
	long int k = 0;
	short int i;
	NUM* p1, * p2, * N3, * q;
	if (COM_NN_D(N1, N2) == 2)
	{
		p1 = COPY(N2);
		p2 = COPY(N1);
		N3 = COPY(N1);
	}
	else
	{
		p1 = COPY(N1);
		p2 = COPY(N2);
		N3 = COPY(N2);
	}
	k = size(p1)-size(p2);
	
	while (true)
	{
		q = N3;
		N3 = MUL_Nk_N(p2, k);
		delNUM(q);
		if (COM_NN_D(p1, N3) == 2)
			k =k- 1;
		else
			break;
	}
	p2 = COPY(N3);
	delNUM(N3);
	N3 = new NUM;
	N3->next = NULL;
	N3->prev = NULL;
	N3->a = 0;
	for (i = 1; N3->a != 101; i++)
	{
		q = N3;
		
		N3 = SUB_NDN_N(p1, p2, i);
		delNUM(q);
	}
	i-=2;
	return i;
}

NUM* DIV_NN_N(NUM* N1, NUM* N2)
{
	long int k = 0;
	short int i;
	NUM* p1, * p2, * p3, * N3, * q, *tmp;
	N3 = new NUM;
	N3->next = NULL;
	N3->prev = NULL;
	N3->a = 0;
	p3 = N3;
	if (COM_NN_D(N1, N2) == 2)
	{
		p1 = COPY(N2);
		p2 = COPY(N1);
	}
	else
	{
		p1 = COPY(N1);
		p2 = COPY(N2);
	}
	while (true)
	{
		p3->a = DIV_NN_Dk(p1, p2);
		k = size(p1) - size(p2);
		tmp = MUL_Nk_N(p2, k);
		if (COM_NN_D(p1, tmp) == 2)
		{
			q = tmp;
			k--;
			tmp= MUL_Nk_N(p2, k);
			delNUM(q);
		}
		q = p1;
		p1 = SUB_NDN_N(p1, tmp,p3->a);
		delNUM(q);
		delNUM(tmp);
		if (COM_NN_D(p1, p2) == 2)
		{
			break;
		}
		else
		{
			p3->next = new NUM;
			p3->next->next = NULL;
			p3->next->prev = p3;
			p3->next->a = 0;
			p3 = p3->next;
		}
		
	}
	if (COM_NN_D(N1, N2) == 2)
	{
		p1 = COPY(N2);
	}
	else
	{
		p1 = COPY(N1);
	}
	p1 = end_num(p1);
	for(i=0;i<k;i++)
	{
		p3->next = new NUM;
		p3->next->next = NULL;
		p3->next->prev = p3;
		p3->next->a = 0;
		p3 = p3->next;
		if (p1->prev != NULL)
			p1 = p1->prev;
	}
	return N3;
}

NUM* MOD_NN_N(NUM* N1, NUM* N2)
{
	NUM* p1, * p2, * N3, * tmp, * q;
	if (COM_NN_D(N1, N2) == 2)
	{
		p1 = COPY(N2);
		p2 = COPY(N1);
	}
	else
	{
		p1 = COPY(N1);
		p2 = COPY(N2);
	}
	tmp=DIV_NN_N(p1, p2);
	q = tmp;
	tmp = MUL_NN_N(p2, tmp);
	delNUM(q);
	N3 = SUB_NN_N(p1, tmp);
	delNUM(tmp);
	return N3;
}

NUM* GCF_NN_N(NUM* N1, NUM* N2)
{
	bool check0 = 1;
	NUM* p1, * p2, * N3, * tmp, * q;
	if (COM_NN_D(N1, N2) == 2)
	{
		p1 = COPY(N2);
		p2 = COPY(N1);
	}
	else
	{
		p1 = COPY(N1);
		p2 = COPY(N2);
	}
	while (check0 != 0)
	{
		q = p1;
		p1 = MOD_NN_N(p1, p2);
		delNUM(q);
		check0 = NZER_N_B(p1);

		q = p1;
		tmp = COPY(p1);
		delNUM(q);
		p1 = COPY(p2);
		q = p2;
		p2 = COPY(tmp);
		delNUM(q);
	}
	return p1;
}

NUM* LCM_NN_N(NUM* N1, NUM* N2)
{
	NUM* p1, * p2, * N3, * N4, * q;
	if (COM_NN_D(N1, N2) == 2)
	{
		p1 = COPY(N2);
		p2 = COPY(N1);
	}
	else
	{
		p1 = COPY(N1);
		p2 = COPY(N2);
	}
	N3 = GCF_NN_N(p1, p2);
	N4 = MUL_NN_N(p1, p2);
	q = p1;
	p1 = DIV_NN_N(N4, N3);
	delNUM(q);
	delNUM(N3);
	delNUM(N4);
	delNUM(p2);
	return(p1);
}
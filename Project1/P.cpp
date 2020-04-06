#include<iostream>
#include"P.h"
using namespace std;


// P-1 
// сложение многочленов
Poli ADD_PP_P(Poli* p1, Poli* p2)
{
	Poli pRez;
	int MINdeg, MAXdeg;
	if (p1->deg >= p2->deg)
	{
		MAXdeg = p1->deg;
		MINdeg = p2->deg;
	}
	else
	{
		MAXdeg = p2->deg;
		MINdeg = p1->deg;
	}

	pRez.deg = MAXdeg;

	for (int i = 0; i < MAXdeg; i++)
	{
		pRez.coeff[i] = ADD_QQ_Q(p1->coeff[i], p2->coeff[i]);
	}
	for (int i = 0; i = MAXdeg; i++)
	{
		if (ADD_QQ_Q(p1->coeff[i], p2->coeff[i]) = 0) // тут мы проверяем условие равно ли рациональное число нулю, но я хз множно ли так
		{
			pRez.deg -= 1;
		}
		else
		{
			break;
		}
	}
	return pRez;
}

// P-2 (то же самое, только используется функция разности (SUB) рациональных коэффициентов)
// вычитание многочленов
Poli SUB_PP_P(Poli* p1, Poli* p2)
{
	Poli pRez;
	int MINdeg, MAXdeg;
	if (p1->deg >= p2->deg)
	{
		MAXdeg = p1->deg;
		MINdeg = p2->deg;
	}
	else
	{
		MAXdeg = p2->deg;
		MINdeg = p1->deg;
	}

	pRez.deg = MAXdeg;

	for (int i = 0; i < MAXdeg; i++)
	{
		pRez.coeff[i] = SUB_QQ_Q(p1->coeff[i], p2->coeff[i]);
	}
	for (int i = 0; i = MAXdeg; i++)
	{
		if (SUB_QQ_Q(p1->coeff[i], p2->coeff[i]) = 0) //тут аналогичная хуйня
		{
			pRez.deg -= 1;
		}
		else
		{
			break;
		}
	}
	return pRez;
}

// P-3
// умножение многочлена на рациональное число
Poli MUL_PQ_P(Poli* p1, Quot* q)
{
	Poli pRez;
	pRez.deg = p1->deg;
	for (int i = 0; i < p1->deg; i++)
	{
		pRez.coeff[i] = MUL_QQ_Q(p1->coeff[i], q);
	}
	return pRez;
}

// P-4
// умножение многочлена на x^k
Poli MUL_Pxk_P(Poli p1, int k)
{
	Poli pRez;
	pRez.deg = p1->deg + k;
	if ((k + p1->deg) > p1->SIZE)
	{
		return "ОШШИИИПКА!!!!11!!";
	}
	for (int i = p1->deg; i >= 0; --i)
	{
		pRez->coeff[i + k] = p->coeff[i];
	}
	for (int i = k - 1; i >= 0; --i)
	{
		pRez->coeff[i] = 0; // я такая же хуйня
	}
	return pRez;
}

// P-5
// старший коэффициент многочлена
Quot LED_P_Q(Poli* p1)
{
	Quot q = p1->coeff[p1->deg];
	return q;
}

// P-6
// степень многочлена
Natu DEG_P_N(Poli* p1)
{
	Natu n.(см.комм.) = p1->deg; // знаю, что не могу присвоить переменной n типа натурального числа (Natu) интовое значение, но этой структуры у нас пока нет, так что я не знаю к какому полю обращаться 
	return n;
}
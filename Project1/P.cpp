#include<iostream>
#include"P.h"
using namespace std;

Poli ADD_PP_P(Poli p1, Poli p2)
{
	Poli pRez;






	for (int i = 0; i < deg + 1; i++)
	{
		pRez.coeff[i] = ADD_QQ_Q(p1.coeff[i], p2.coeff[i]);
	}
}
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

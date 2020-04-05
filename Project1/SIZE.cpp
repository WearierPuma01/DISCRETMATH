#include "SIZE.h"
//Файл с функциями работающими с размерностью числа.
int size(NUM* N) //Подсчет количества разрядов в числе
{
	int size=0;
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
#include "SIZE.h"
//���� � ��������� ����������� � ������������ �����.
int size(NUM* N) //������� ���������� �������� � �����
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
	return size; //������� ���������� �������� � �����.
}

NUM* end_num(NUM* N) //�������� ��������� �� ������ ������, ���������� ��������� �� ���������
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
	return end; //������� ��������� �� ��������� ������.
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
#include "SIZE.h"
//���� � ��������� ����������� � ������������ �����.
int size(NUM* N) //������� ���������� �������� � �����
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
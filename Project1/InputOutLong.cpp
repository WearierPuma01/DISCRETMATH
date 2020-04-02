#include "InputOutLong.h"

void input(NUM* top) //������� ����� �������� ����� � ����������
{
	NUM* p, * pr; //��������� �� ���������� � ������� ������� 
	bool sign = 0; // ����	
	int i;
	string str, s; // str - ������ � ������ , s - � ���� ������� �������
	cout << "������� �����: ";
	cin >> str;
	cout << "\n";
	top->prev = NULL;
	top->next = NULL;
	p = top;
	pr = top;

	for (i = 0; i < str.size(); i++) // ������ ����������� ������� ����������� �������� �����
	{
		s = str[i]; //������������ �������� ������ � s
		if (s == "-") // ������� ��� ������� ���� ������ �������� �����(����� �������������) �� �������� ��������� �������� ����������� �� ������� ������� ������ str, ����� ������ ������� ����������� �������� -
		{
			sign = 1;
			continue;
		}
		p->a = atoi(s.c_str());//�������������� ���� string � int
		if (i > 0)
		{
			p->prev = pr;
			pr = p;
		}
		if (i != (str.size() - 1))//������� ���������� ��������� next ���������� �������� �� NULL
		{
			p->next = new NUM;
			p = p->next;
		}
		else
			p->next = NULL;
	}
	if (sign == 1)
		top->a = top->a * -1;
}

void output(NUM* top) //������� ������ ����� �� �����
{
	NUM* p;
	p = top;
	cout << "�����: ";
	while (true)
	{
		cout << p->a;
		if (p->next == NULL)
			break;
		else
			p = p->next;
	}
	cout << "\n";
}

#include<iostream>
#include <stdio.h>
#include "NUM.h"
int getSign(NUM numb)
 /*getSign
 ������� ��� ����������� ��������������� �����. ����������: 2 - ����� �������������,
 0 - ������ ����, 1 - �������������, -1 - ������
 ���������:
 1) numb - ����� �����
 ������� ���������� ��������� ���� - int*/
{
	int check = numb.b;

	if (numb.A)
	{
		for (int i = 0; i < numb.n && check; ++i)
			check = *(numb.A + i) == 0;
		if (check)
			check = 0;
		else
			if (numb.b == 1)
				check = 1;
			else
				check = 2;
	}
	else
		check = -1;
	return check;
}

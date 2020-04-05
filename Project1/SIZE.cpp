#include "SIZE.h"

int size(NUM* N)
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
	return size;
}

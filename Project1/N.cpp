include <iostream>
#include <string>
#include "NUM.h"
#include "InputOutLong.h"
using namespace std;
int COM_NN_D(NUM a, NUM b)
{
	if (a.size > b.size)
		return 2;
	else if (b.size > a.size)
		return 1;
	else
	{
		for (int i = a.size - 1; i >= 0; i--)
		{
			if (a.k[i] > b.k[i])
				return 2;
			else if (b.k[i] > a.k[i])
				return 1;
		}
	}
	return 0;
}
bool NZER_N_B(NUM a)
{
	if (a.k[0] == 0 && a.size == 1) 
	{
		return false;
	}
	return true;
}
NUM ADD_1N_N(NUM a)
{
	int c = 1;
	NUM result;
	result = a;
	if (result.k[0] != 9)
	{
		result.k[0]++;
	}
	else
	{
		while (c != result.size && result.k[c] == 9) 
		{
			result.k[c] = 0;
			c++;
		}
		if (c == result.size)
		{
			result.k = resize(result.k, result.size + 1, result.size);
			result.size++;
			result.k[result.size - 1] = 1;
		}
		else
		{
			result.k[k]++;
		}
	}
	return result;
}
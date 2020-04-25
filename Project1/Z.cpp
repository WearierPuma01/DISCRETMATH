#include "Z.h"

NUM* ABS_Z_N(NUM* N1)
{
	NUM* p1;
	p1 = COPY(N1);
	if (p1->a < 0)
	{
		p1->a = p1->a * -1;
	}
	return p1;
}

short int POZ_Z_D(NUM* N1)
{
	bool check0;
	check0 = NZER_N_B(N1);
	if (check0)
	{
		if (N1->a > 0)
			return 2;
		else
			return 1;
	}
	else
		return 0;
}

NUM* MUL_ZM_Z(NUM* N1)
{
	NUM* p1;
	p1 = COPY(N1);
	p1->a *= -1;
	return p1;
}

NUM* ADD_ZZ_Z(NUM* N1, NUM* N2)
{
	bool ifnopoz;
	NUM* p1, * p2, * N3, * q;
	short int nopoz1, nopoz2;
	nopoz1 = POZ_Z_D(N1);
	nopoz2 = POZ_Z_D(N2);
	p1 = COPY(N1);
	p2 = COPY(N2);
	if (((nopoz1 == 2) || (nopoz1 == 0)) && ((nopoz2 == 2) || (nopoz2 == 0)))
	{
		q = p1;
		p1 = ABS_Z_N(p1);
		delNUM(q);
		q = p2;
		p2 = ABS_Z_N(p2);
		delNUM(q);
		N3 = ADD_NN_N(p1, p2);
		return N3;
	}
	if (((nopoz1 == 1) && (nopoz2 != 1)) || ((nopoz2 == 1) && (nopoz1 != 1)))
	{
		ifnopoz = ifnopozBIG(p1, p2);
		q = p1;
		p1 = ABS_Z_N(p1);
		delNUM(q);
		q = p2;
		p2 = ABS_Z_N(p2);
		delNUM(q);
		N3 = SUB_NN_N(p1, p2);
		if (ifnopoz == 1)
		{
			q = N3;
			N3 = MUL_ZM_Z(N3);
			delNUM(q);
		}
		return N3;
	}
	if ((nopoz1 == 1) && (nopoz2 == 1))
	{
		q = p1;
		p1 = ABS_Z_N(p1);
		delNUM(q);
		q = p2;
		p2 = ABS_Z_N(p2);
		delNUM(q);
		N3 = ADD_NN_N(p1, p2);
		q = N3;
		N3 = MUL_ZM_Z(N3);
		delNUM(q);
		return N3;
	}
	
}

NUM* SUB_ZZ_Z(NUM* N1, NUM* N2)
{
	bool ifnopoz;
	NUM* p1, * p2, * N3, * q;
	short int nopoz1, nopoz2;
	nopoz1 = POZ_Z_D(N1);
	nopoz2 = POZ_Z_D(N2);
	p1 = COPY(N1);
	p2 = COPY(N2);
	if (((nopoz1 == 2) || (nopoz1 == 0)) && ((nopoz2 == 2) || (nopoz2 == 0)))
	{
		q = p1;
		p1 = ABS_Z_N(p1);
		delNUM(q);
		q = p2;
		p2 = ABS_Z_N(p2);
		delNUM(q);
		N3 = SUB_NN_N(p1, p2);
		if (COM_NN_D(p1, p2) == 2)
		{
			q = N3;
			N3 = MUL_ZM_Z(N3);
			delNUM(q);
		}
		return N3;
	}
	if ((nopoz1 == 1) && (nopoz2 != 1))
	{
		
		q = p1;
		p1 = ABS_Z_N(p1);
		delNUM(q);
		q = p2;
		p2 = ABS_Z_N(p2);
		delNUM(q);
		N3 = ADD_NN_N(p1, p2);
		
			q = N3;
			N3 = MUL_ZM_Z(N3);
			delNUM(q);
		
		return N3;
	}
	if ((nopoz2 == 1) && (nopoz1 != 1))
	{
		
		q = p1;
		p1 = ABS_Z_N(p1);
		delNUM(q);
		q = p2;
		p2 = ABS_Z_N(p2);
		delNUM(q);
		N3 = ADD_NN_N(p1, p2);
		
		return N3;
	}
	if ((nopoz1 == 1) && (nopoz2 == 1))
	{
		q = p1;
		p1 = ABS_Z_N(p1);
		delNUM(q);
		q = p2;
		p2 = ABS_Z_N(p2);
		delNUM(q);
		N3 = SUB_NN_N(p1, p2);
		if (COM_NN_D(p1, p2) != 2)
		{
			q = N3;
			N3 = MUL_ZM_Z(N3);
			delNUM(q);
			
		}
		return N3;
	}
}

NUM* MUL_ZZ_Z(NUM* N1, NUM* N2)
{
	NUM* p1, * p2, * N3, * q;
	short int nopoz1, nopoz2;
	nopoz1 = POZ_Z_D(N1);
	nopoz2 = POZ_Z_D(N2);
	p1 = COPY(N1);
	p2 = COPY(N2);
	q = p1;
	p1 = ABS_Z_N(p1);
	delNUM(q);
	q = p2;
	p2 = ABS_Z_N(p2);
	delNUM(q);
	N3 = MUL_NN_N(p1, p2);
	delNUM(p1);
	delNUM(p2);
	if (nopoz1 == nopoz2)
		return N3;
	else
	{
		q = N3;
		N3 = MUL_ZM_Z(N3);
		delNUM(q);
		return N3;
	}
}

NUM* DIV_ZZ_Z(NUM* N1, NUM* N2)
{
	NUM* p1, * p2, * N3, * q;
	short int nopoz1, nopoz2;
	nopoz1 = POZ_Z_D(N1);
	nopoz2 = POZ_Z_D(N2);
	p1 = COPY(N1);
	p2 = COPY(N2);
	q = p1;
	p1 = ABS_Z_N(p1);
	delNUM(q);
	q = p2;
	p2 = ABS_Z_N(p2);
	delNUM(q);
	N3 = DIV_NN_N(p1, p2);
	delNUM(p1);
	delNUM(p2);
	if (nopoz1 == nopoz2)
		return N3;
	else
	{
		q = N3;
		N3 = MUL_ZM_Z(N3);
		delNUM(q);
		return N3;
	}
}

NUM* MOD_ZZ_Z(NUM* N1, NUM* N2)
{
	NUM* p1, * p2, * N3, * q;
	short int nopoz1, nopoz2;
	nopoz1 = POZ_Z_D(N1);
	nopoz2 = POZ_Z_D(N2);
	p1 = COPY(N1);
	p2 = COPY(N2);
	q = p1;
	p1 = ABS_Z_N(p1);
	delNUM(q);
	q = p2;
	p2 = ABS_Z_N(p2);
	delNUM(q);
	N3 = MOD_NN_N(p1, p2);
	if (nopoz1 == nopoz2)
	{
		delNUM(p1);
		delNUM(p2);
		return N3;
	}
	else
	{
		if (COM_NN_D(p1, p2) == 2)
		{
			q = p1;
			p1 = p2;
			delNUM(p2);
			p2 = q;
			q = NULL;
		}
		q = N3;
		N3 = SUB_ZZ_Z(N3, p2);
		delNUM(q);
		q = N3;
		N3 = MUL_ZM_Z(N3);
		delNUM(q);
		return N3;
	}
}
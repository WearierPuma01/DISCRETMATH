#pragma once
struct Poli
{
	int deg;// степень многочлена
	int* Cnumo = new int[deg + 1];// числители рациональной дроби коэффициентов
	int* Cdeno = new int[deg + 1];// знаменатели рациональной дроби коэффициантов
};
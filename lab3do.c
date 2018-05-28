#include <math.h>
#include <stdio.h>
#include "head.h"







//Задание 1
float reshdo(int n)
{
	float s, s1;
	int i;
	s1 = 0;
	i = 0;
	do
	{
		s = func(i);
		s1 += s;
		++i;
	} while  (i <= (n - 1));
	return s1;
}

//Задание 2
float reshdo2(double eps)
{
	float s = 0;
	float s1 = 0;
	int i = 0;
	do
	{
		s = func(i);
		s1 += s;
		++i;
	} while (fabs(s1) <= eps);
	return s1;
}

//Задание 3
void reshdo3(int n, int k)
{
	float a;
	int k1;
	k1 = k;
	int i = 0;
	do
	{
		a = func(i);
		if ((i + 1) == k)
		{
			k += k1;
			++i;
			continue;
		}
		else
		{
			printf("Иттерация: %d ", i + 1);
			printf(" Результат: %f\n", a);
		}
		++i;
	} while (i <= (n - 2));
}

//Задание 4
int reshdo4(double esp)
{
	float a;
	int i = 0;
	int i1 = 0;
	_Bool flag;
	flag = 1;
	do
	{
		a = func(i);
		if (fabs(a) <= esp)
		{
			i1 = i;
			flag = 0;
			break;
		}
		++i;
	} while (flag == 1);
	return i1;
}

//Задание 5
int reshdo5(double esp)
{
	float a;
	int i = 0;
	int i1 = 0;
	_Bool flag;
	flag = 1;
	do
	{
		a = func(i);
		if (fabs(a) <= esp && a < 0)
		{
			i1 = i;
			flag = 0;
			break;
		}
		++i;
	} while (flag == 1);
	return i1;
}
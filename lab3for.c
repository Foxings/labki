#include <math.h>
#include <stdio.h>
#include "head.h"



//Задание 1
float reshfor(int n)
{
	float s, s1;
	s1 = 0;
	for (int i = 0; i <= (n - 1); ++i)
	{

		s = func(i);
		s1 += s;

	}
	return s1;
}

//Задание 2
float reshfor2(double eps)
{
	float s = 0;
	float s1 = 0;
	for (int i = 0; fabs(s1) <= eps; i++)
	{
		s = func(i);
			s1 += s;
	}
	return s1;
}

//Задание 3
void reshfor3(int n, int k)
{
	float a;
	int k1;
	k1 = k;
	for (int i = 0; i <= (n - 1); ++i)
	{
		a = func(i);
		if ((i + 1) == k)
		{
			k += k1;
			continue;
		}
		else
		{
			printf("Иттерация: %d ", i+1);
			printf(" Результат: %f\n", a);
		}
	}
}

//Задание 4
int reshfor4(double esp)
{
	float a;
	int i1 = 0;
	_Bool flag;
	flag = 1;
	for (int i = 0; flag==1; ++i)
	{
		a = func(i);
		if (fabs(a) <= esp)
		{
				i1 = i;
				flag = 0;
				break;
		}
		else
			continue;

	}
	return i1;
}

//Задание 5
int reshfor5(double esp)
{
	float a;
	int i1 = 0;
	_Bool flag = 0;
	for (int i = 0; flag == 0; ++i)
	{
		a = func(i);
		if (fabs(a) <= esp && a < 0)
		{
			i1 = i;
			flag = 1;
			break;
		}
		else
			continue;

	}
	return i1;
}

#include <math.h>
#include <stdio.h>
#include "head.h"


//Задание 1
float reshwhile(int n)
{
	float s, s1;
	int i = 0;
	s = 0;
	s1 = 0;
	while (i <= n - 1)
	{
		s = func(i);
		s1 += s;
		++i;
	}
	return s1;
}
//Задание 2
float reshwhile2(double eps)
{
	float s = 0;
	float s1 = 0;
	int i = 0;
	while (fabs(s1) <= eps)
	{
		s = func(i);
		s1 += s;
		++i;
	}
	return s1;
}

//Задание 3
void reshwhile3(int n, int k)
{
	float a;
	int k1;
	k1 = k;
	int i = 0;
	while (i <= (n - 1))
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
	}
	
	
}

//Задание 4
int reshwhile4(double esp)
{
	float a;
	int i = 0;
	int i1 = 0;
	_Bool flag;
	flag = 1;
	while (flag == 1)
	{
		a = func(i);
		if (fabs(a) <= esp)
		{
			i1 = i;
			flag = 0;
			break;
		}
		++i;
	}
	
	return i1;
}

//Задание 5
int reshwhile5(double esp)
{
	float a;
	int i = 0;
	int i1 = 0;
	_Bool flag;
	flag = 1;
	while (flag == 1)
	{
		a = func(i);
		if (fabs(a) <= esp && a < 0)
		{
			i1 = i;
			flag = 0;
			break;
		}
		++i;
	}

	return i1;
}
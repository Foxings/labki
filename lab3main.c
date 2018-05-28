#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "head.h"


float func(int i)
{
	return pow(-1, i) / ((i + 1)*(i + 2)*(i + 3));
}


int main(void)
{
	setlocale(LC_CTYPE, "rus");
	printf("Введите версию программы 1) FOR 2) WHILE 3) DO WHILE:\n");
	switch (_getch())
	{
	case '1':
	{
		printf("Вы выбрали версию где все функции реализованны циклом FOR:\n");
		printf("Введите номер задания от 1 до 5: ");
		switch (_getch())
		{
		case '1':
		{
			printf("Задание 1\n ");
			int n;
			float a;
			printf("Введите число n= ");
			scanf_s("%d", &n);
			a = reshwhile(n);
			printf("Результат: %f\n", a);
			break;
		}
		case '2':
		{
			printf("Задание 2\n ");
			float a1;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			a1 = reshwhile2(eps);
			printf("Результат: %4f\n", a1);
			break;
		}
		case '3':
		{
			printf("Задание 3\n ");
			int n1;
			int k;
			printf("Введите число n= ");
			scanf_s("%d", &n1);
			printf("Введите число k= ");
			scanf_s("%d", &k);
			reshfor3(n1, k);
			break;
		}
		case '4':
		{
			printf("Задание 4\n ");
			int i;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			i = reshfor4(eps);
			printf("Результат: %d\n", i);
			break;
		}
		case '5':
		{
			printf("Задание 5\n ");
			int i;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			i = reshfor5(eps);
			printf("Результат: %d\n", i);
			break;
		}
		case '6':
		{
			printf("Такого задания не существует\n ");
			break;
		}
		}
		break;
	}
	case '2':
	{
		printf("Вы выбрали версию где все функции реализованны циклом WHILE:\n");
		printf("Введите номер задания от 1 до 5: ");
		switch (_getch())
		{
		case '1':
		{
			printf("Задание 1\n ");
			int n;
			float a;
			printf("Введите число n= ");
			scanf_s("%d", &n);
			a = reshwhile(n);
			printf("Результат: %f\n", a);
			break;
		}
		case '2':
		{
			printf("Задание 2\n ");
			float a1;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			a1 = reshwhile2(eps);
			printf("Результат: %4f\n", a1);
			break;
		}
		case '3':
		{
			printf("Задание 3\n");
			int n1;
			int k;
			printf("Введите число n= ");
			scanf_s("%d", &n1);
			printf("Введите число k= ");
			scanf_s("%d", &k);
			reshwhile3(n1, k);
			break;
		}
		case '4':
		{
			printf("Задание 4\n ");
			int i;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			i = reshwhile4(eps);
			printf("Результат: %d\n", i);
			break;
		}
		case '5':
		{
			printf("Задание 5\n ");
			int i;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			i = reshwhile5(eps);
			printf("Результат: %d\n", i);
			break;
		}
		case '6':
		{
			printf("Такого задания не существует\n ");
			break;
		}
		}
		break;
	}
	case '3':
	{
		printf("Вы выбрали версию где все функции реализованны циклом DO WHILE:\n");
		printf("Введите номер задания от 1 до 5: ");
		switch (_getch())
		{
		case '1':
		{
			printf("Задание 1\n ");
			int n;
			float a;
			printf("Введите число n= ");
			scanf_s("%d", &n);
			a = reshdo(n);
			printf("Результат: %f\n", a);
			break;
		}
		case '2':
		{
			printf("Задание 2\n ");
			float a1;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			a1 = reshdo2(eps);
			printf("Результат: %4f\n", a1);
			break;
		}
		case '3':
		{
			printf("Задание 3\n ");
			int n1;
			int k;
			printf("Введите число n= ");
			scanf_s("%d", &n1);
			printf("Введите число k= ");
			scanf_s("%d", &k);
			reshdo3(n1, k);
			break;
		}
		case '4':
			printf("Задание 4\n ");
			int i;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			i = reshdo4(eps);
			printf("Результат: %d\n", i);
			break;
		case '5':
			printf("Задание 5\n ");
			int i1;
			float eps1;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps1);
			i1 = reshdo5(eps1);
			printf("Результат: %d\n", i1);
			break;
		case '6':
			printf("Такого задания не существует\n ");
			break;
		}
		break;
	}
	}

	system("pause");
	return 0;
}
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include "func.h"

int input_i()
{
	int s;
	scanf_s("%d", &s);
	return s;
}

void increment(int *i)
{
	if (i != NULL)
	{
		printf("1) Адрес равняется: %p\n Значение переменной = %d\n", &i, *i);
		(*i)++;
		printf("2) Адрес равняется: %p\n Значение переменной = %d\n", &i, *i);
	}
	else
	{
		printf("пустой указатель");
	}
}


//Задание 2 создание на стеке целое число, вводим, выводим на экран
void incrementStack()
{
	int i;
	printf("Введите целое число: ");
	i = input_i();
	printf("Адрес равняется: %p\n Значение переменной = %d\n", &i, i);
	increment(&i);
}

//Задание 3
void HeapVariable()
{
	int p = 0;
	int *i = (int *)malloc(sizeof(int));

	printf("Введите целое число: ");
	i = input_i();
	printf("Адрес равняется: %p\n Значение переменной = %d\n", &i, i);
	increment(&i);
}
//Вывод массива на экран
void wra(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("A[%d]= %d\n", i, A[i]);
	}
}
//Ввод массива через клавиатуру
void readArray(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Введите %d элемент массива: ", i);
		scanf_s("%d", &A[i]);
	}

}

//Метод пузырька
void sort(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		_Bool flag = 1;
		for (int j = 0; j < n - (i + 1); j++)
		{
			if (A[j] > A[j + 1])
			{
				flag = 0;
				int a = A[j];
				A[j] = A[j + 1];
				A[j + 1] = a;
			}
		}
		if (flag)
			break;

	}
}
//Функция создания массива в стеке
void StackArray()
{
	int A[5];
	int n = 5;
	printf("Количество элементов массива равняется: %d\n", n);
	readArray(A, n);

	printf("Введенный массив: \n");
	wra(A, n);

	printf("Отсортированный массив: \n");
	sort(A, n);
	wra(A, n);
}
//Создание массива в динамической памяти
void HeapArray()
{
	int n = 0;
	printf("Введите количество элементов массива: ");
	n = input_i();
	int *A = (int *)malloc(n * sizeof(int));

	printf("Количество элементов массива равняется: %d\n", n);
	readArray(A, n);

	printf("Введенный массив: \n");
	wra(A, n);

	printf("Отсортированный массив: \n");
	sort(A, n);
	wra(A, n);

	free(A);
}
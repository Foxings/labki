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
		printf("1) ����� ���������: %p\n �������� ���������� = %d\n", &i, *i);
		(*i)++;
		printf("2) ����� ���������: %p\n �������� ���������� = %d\n", &i, *i);
	}
	else
	{
		printf("������ ���������");
	}
}


//������� 2 �������� �� ����� ����� �����, ������, ������� �� �����
void incrementStack()
{
	int i;
	printf("������� ����� �����: ");
	i = input_i();
	printf("����� ���������: %p\n �������� ���������� = %d\n", &i, i);
	increment(&i);
}

//������� 3
void HeapVariable()
{
	int p = 0;
	int *i = (int *)malloc(sizeof(int));

	printf("������� ����� �����: ");
	i = input_i();
	printf("����� ���������: %p\n �������� ���������� = %d\n", &i, i);
	increment(&i);
}
//����� ������� �� �����
void wra(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("A[%d]= %d\n", i, A[i]);
	}
}
//���� ������� ����� ����������
void readArray(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("������� %d ������� �������: ", i);
		scanf_s("%d", &A[i]);
	}

}

//����� ��������
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
//������� �������� ������� � �����
void StackArray()
{
	int A[5];
	int n = 5;
	printf("���������� ��������� ������� ���������: %d\n", n);
	readArray(A, n);

	printf("��������� ������: \n");
	wra(A, n);

	printf("��������������� ������: \n");
	sort(A, n);
	wra(A, n);
}
//�������� ������� � ������������ ������
void HeapArray()
{
	int n = 0;
	printf("������� ���������� ��������� �������: ");
	n = input_i();
	int *A = (int *)malloc(n * sizeof(int));

	printf("���������� ��������� ������� ���������: %d\n", n);
	readArray(A, n);

	printf("��������� ������: \n");
	wra(A, n);

	printf("��������������� ������: \n");
	sort(A, n);
	wra(A, n);

	free(A);
}
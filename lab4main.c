#include <locale.h>
#include <stdio.h>
#include "func.h"


void main(void)
{
	setlocale(LC_CTYPE, "rus");
	int c = 0;
	while (1)
	{
		printf("Меню\n Введите номер задания от 1 до 4\n Для выхода из меню введите 0: ");
		c = input_i();
		switch (c)
		{
		case 0:
			system("pause");
			return 0;
		case 1:
			printf("Задание 1: \n");
			incrementStack();
			break;
		case 2:
			printf("Задание 2: \n");
			HeapVariable();
			break;
		case 3:
			printf("Задание 3: \n");
			StackArray();
			break;
		case 4:
			printf("Задание 4: \n");
			HeapArray();
			break;
		default: 
			printf("Невепный номер задания!\n");
			break;

		}
	}
	
}
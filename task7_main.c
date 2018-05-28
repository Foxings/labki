#include "func.h"
#include <stdio.h>
#include <locale.h>


int main(void)
{
	setlocale(LC_CTYPE, "rus");

	printf("Задание 7 \nКогда x, y константы\n");
	vivodxy();
	resh();
	vivodf();

	printf("Задание 7 \nКогда x, y вводим с клавиатуры\n");
	printf("Введите x= ");
	vvodx();
	printf("Введите y= ");
	vvody();
	vivodxy();
	resh();
	vivodf();

	system("pause");
	return 0;
}

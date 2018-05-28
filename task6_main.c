#include <stdio.h>
#include <locale.h>

void resh();
void vivodxy();
int vvodx();
void vivodf();
int vvody();

int main(void)
{
	setlocale(LC_CTYPE, "rus");

	printf("Задание 6 \nКогда x, y константы\n");
	vivodxy();
	resh();
	vivodf();

	printf("Задание 6 \nКогда x, y вводим с клавиатуры\n");
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

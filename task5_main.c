#include <stdio.h>
#include <locale.h>
#include <math.h>


double resh(int x, int y);
void vivodxy(int x, int y);
int vvod();

int main(void)
{
	setlocale(LC_CTYPE, "rus");
	int x, y;
	float f;

	x = 16;
	y = 9;

	printf("Задание 1 \nКогда x, y константы\n");
	vivodxy(x, y);
	f = resh(x, y);
	printf("f(x,y)= %f\n", f);

	printf("Задание 1 \nКогда x, y вводим с клавиатуры\n");
	printf("Введите x= ");
	x = vvod();
	printf("Введите y= ");
	y = vvod();
	vivodxy(x, y);
	f = resh(x, y);
	printf("f(x,y)= %f\n", f);

	system("pause");
	return 0;
}
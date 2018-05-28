#include <stdio.h>
#include <locale.h>
#include <math.h>



int main(void)
{
	setlocale(LC_CTYPE, "rus");


	int x, y;
	float f;

	x = 16;
	y = 9;
	printf("Задание 1\n Когда вычисляем функцию с константами x= %d, y= %d\n", x, y);
	f = (sqrt(x) - sqrt(y)) / x;
	printf("f(x,y)= %f\n", f);


	printf("Задание 1\n Когда вычисляем функцию с вводимыми x, y\n");
	printf("Введите х= ");
	scanf_s("%d", &x);
	printf("Введите y= ");
	scanf_s("%d", &y);
	f = (sqrt(x) - sqrt(y)) / x;
	printf("Константа x= %d\n", x);
	printf("Константа y= %d\n", y);
	printf("f(x,y)= %f\n", f);

	system("pause");
	return 0;
}
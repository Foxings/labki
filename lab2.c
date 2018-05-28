#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <stdbool.h>

//Задание 1

//Глобальные переменные для указания области квадратной фигуры
double lgrX = -1;
double pgrX = 1;
double vgrY = 1;
double ngrY = -1;

_Bool proverka(double x, double y) //Функция определяет входит ли точка в область
{

	if ((y <= vgrY && y >= 0 && x >= lgrX && x <= pgrX) || (y <= 0 && y >= ngrY && x <= 0 && x >= lgrX))
		return 1;
	else
		return 0;

}
void vivodxy(double x, double y)
{
	printf("При x= %f\n", x);
	printf("При y= %f\n", y);
}

void vivodotv(double x, double y)
{
	vivodxy(x, y);
	printf("Данные координаты попадают в область. \n");
}
void vivodotv2(double x, double y)
{
	vivodxy(x, y);
	printf("Данные координаты не попадают в область! \n");
}

//Задание 2
double f(double x)
{
	
	if (x <= 3)
	{
		return pow(x,2) + 3 * x + 9;
	}
	else
	{
		return sin(x) / (pow(x,2) - 9);
	}
}


int main(void)
{
	setlocale(LC_CTYPE, "rus");

	printf("Введите номер задания: ");
	switch (_getch())
	{
	case '1':
		printf("Выбрано задание 1\n");
		float x, y;

		printf("Введите x= ");
		scanf_s("%f", &x);
		printf("Введите y= ");
		scanf_s("%f", &y);

		if (proverka(x, y))
		{
			vivodotv(x, y);
		}
		else
		{
			vivodotv2(x, y);
		}

		break;
	case '2':
		printf("Выбрано задание 2\n");
		float x1;
		printf("Введите х= ");
		scanf_s("%f", &x1);
		printf("%4f\n", f(x1));
		break;
	case '3':
		printf("Введите корректный номер задания или его же не существует!\n");
		break;
	}

	system("pause");
	return 0;
}
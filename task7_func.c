#include <stdio.h>
#include <math.h>
#include "func.h"

x = 16;
y = 9;
f = 0;


void resh()
{
	f = (sqrt(x) - sqrt(y)) / x;
}

void vivodxy()
{
	printf("Переменная x=%d\n", x);
	printf("Переменная y=%d\n", y);
}

int vvodx()
{
	scanf_s("%d", &x);
}
int vvody()
{
	scanf_s("%d", &y);
}
void vivodf()
{
	printf("f(x,y)= %f\n", f);
}
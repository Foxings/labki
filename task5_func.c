#include <math.h>
#include <stdio.h>

double resh(int x, int y)
{
	return (sqrt(x) - sqrt(y)) / x;

}

void vivodxy(int x, int y)
{
	printf("Переменная x=%d\n", x);
	printf("Переменная y=%d\n", y);
}

int vvod()
{
	int s;
	scanf_s("%d", &s);
	return s;
}

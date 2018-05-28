#include <stdio.h>
#include <math.h>

int x = 16;
int y = 9;
float f;


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
#include <stdio.h>
#include <locale.h>
#include <math.h>


double resh(int x, int y)
{
	return (sqrt(x) - sqrt(y)) / x;
	
}

void vivodxy(int x, int y)
{
	printf("���������� x=%d\n", x);
	printf("���������� y=%d\n", y);
}

int vvod()
{
	int s;
	scanf_s("%d", &s);
	return s;
}


int main(void)
{
	setlocale(LC_CTYPE, "rus");
	int x, y;
	float f;

	x = 16;
	y = 9;

	printf("������� 1 \n����� x, y ���������\n");
	vivodxy(x, y);
	f=resh(x, y);
	printf("f(x,y)= %f\n", f);

	printf("������� 1 \n����� x, y ������ � ����������\n");
	printf("������� x= ");
	x = vvod();
	printf("������� y= ");
	y = vvod();
	vivodxy(x, y);
	f=resh(x, y);
	printf("f(x,y)= %f\n", f);

	system("pause");
	return 0;
}
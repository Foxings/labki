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
	printf("������� 1\n ����� ��������� ������� � ����������� x= %d, y= %d\n", x, y);
	f = (sqrt(x) - sqrt(y)) / x;
	printf("f(x,y)= %f\n", f);


	printf("������� 1\n ����� ��������� ������� � ��������� x, y\n");
	printf("������� �= ");
	scanf_s("%d", &x);
	printf("������� y= ");
	scanf_s("%d", &y);
	f = (sqrt(x) - sqrt(y)) / x;
	printf("��������� x= %d\n", x);
	printf("��������� y= %d\n", y);
	printf("f(x,y)= %f\n", f);

	system("pause");
	return 0;
}
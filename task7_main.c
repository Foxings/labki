#include "func.h"
#include <stdio.h>
#include <locale.h>


int main(void)
{
	setlocale(LC_CTYPE, "rus");

	printf("������� 7 \n����� x, y ���������\n");
	vivodxy();
	resh();
	vivodf();

	printf("������� 7 \n����� x, y ������ � ����������\n");
	printf("������� x= ");
	vvodx();
	printf("������� y= ");
	vvody();
	vivodxy();
	resh();
	vivodf();

	system("pause");
	return 0;
}

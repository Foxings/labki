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

	printf("������� 6 \n����� x, y ���������\n");
	vivodxy();
	resh();
	vivodf();

	printf("������� 6 \n����� x, y ������ � ����������\n");
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

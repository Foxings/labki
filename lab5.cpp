// lab5.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "class.h"
#include <locale.h>



int main()
{
	setlocale(LC_CTYPE, "rus");
	double mod = 0;
	double arg = 0;
	cout << "������� ������ ������������ �����\n";
	cin >> mod;
	cout << "������� �������� ������������ �����\n";
	cin >> arg;
	complex z = complex(mod, arg);
	complex result = y(z);
	cout << "z= " << z << "\ny(z)= " << result << "\n";
	system("pause");
    return 0;
}


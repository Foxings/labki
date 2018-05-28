// lab5.cpp: определ€ет точку входа дл€ консольного приложени€.
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
	cout << "¬ведите модуль комплексного числа\n";
	cin >> mod;
	cout << "¬ведите аргумент комплексного числа\n";
	cin >> arg;
	complex z = complex(mod, arg);
	complex result = y(z);
	cout << "z= " << z << "\ny(z)= " << result << "\n";
	system("pause");
    return 0;
}


#pragma once
#include <cmath>
#include <iostream>
#include "stdafx.h"

using namespace std;

class complex
{
public:
	//конструкторы
	complex(); //по умолчанию
	complex(double x); //преобразования
	complex(double r, double phi); //инициализации


	//публичные функции-члены
	//действительная чатсть
	double Re() const;
	//мнимая
	double Im() const;
	//аргумент
	double Phi() const;
	//модуль
	double R() const;

	//перегрузка операторов
	//+
	friend complex operator+ (const complex& left, const complex& right);
	//-
	friend complex operator- (const complex& left, const complex& right);
	//умножение
	friend complex operator* (const complex& left, const complex& right);
	//деления
	friend complex operator/ (const complex& left, const complex& right);
	//вывода
	friend ostream& operator<<(ostream& stream, const complex& data);
	//типа double
	explicit operator double();

	//приватные члены
private:
	double r; //модуль
	double phi; //аргумент

};

//////дополнительные функции/////
//заданная функция y(z)
complex y(const complex& z);
//степень
complex pow(const complex& z, int p);
complex pow(const complex& z1, const complex& z2);
//гиперболический тангенс
complex th(const complex& z);



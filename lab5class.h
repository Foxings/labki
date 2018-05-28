#pragma once
#include <cmath>
#include <iostream>
#include "stdafx.h"

using namespace std;

class complex
{
public:
	//������������
	complex(); //�� ���������
	complex(double x); //��������������
	complex(double r, double phi); //�������������


	//��������� �������-�����
	//�������������� ������
	double Re() const;
	//������
	double Im() const;
	//��������
	double Phi() const;
	//������
	double R() const;

	//���������� ����������
	//+
	friend complex operator+ (const complex& left, const complex& right);
	//-
	friend complex operator- (const complex& left, const complex& right);
	//���������
	friend complex operator* (const complex& left, const complex& right);
	//�������
	friend complex operator/ (const complex& left, const complex& right);
	//������
	friend ostream& operator<<(ostream& stream, const complex& data);
	//���� double
	explicit operator double();

	//��������� �����
private:
	double r; //������
	double phi; //��������

};

//////�������������� �������/////
//�������� ������� y(z)
complex y(const complex& z);
//�������
complex pow(const complex& z, int p);
complex pow(const complex& z1, const complex& z2);
//��������������� �������
complex th(const complex& z);



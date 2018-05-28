#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "class.h"
#include <math.h>

complex::complex()
	:complex(0, 0) {}

complex::complex(double x)
	: complex(sqrt(pow(x,2)), atan(0.)) {}

complex::complex(double mod,double arg)
	: r(mod), phi(arg) {}

double complex::Re() const
{
	return (!R() && !Phi()) ? 0 : sin(phi)*r;
}

double complex::Im() const
{
	return (!R() && !Phi()) ? 0 : sin(phi)*r;
}

double complex::R() const
{
	return r;
}

double complex::Phi() const
{
	return phi;
}

complex operator+ (const complex&left, const complex& right)
{
	double re, im;
	re = left.Re() + right.Re();
	im = left.Im() + right.Im();
	return complex(sqrt(pow(re, 2) + pow(im, 2)), atan(im / re));
}

complex operator- (const complex&left, const complex& right)
{
	double re, im;
	re = left.Re() - right.Re();
	im = left.Im() - right.Im();
	return complex(sqrt(pow(re, 2) + pow(im, 2)), atan(im / re));
}

complex operator* (const complex&left, const complex& right)
{
	double re, im;
	re = left.Re() * right.Re() - left.Im() * right.Im();
	im = left.Re() * right.Re() + left.Im() * right.Im();
	return complex(sqrt(pow(re, 2) + pow(im, 2)), atan(im / re));
}

complex operator/ (const complex& left, const complex& right)
{
	double re, im;
	re = (left.Re()*right.Re() + left.Im()*right.Im()) / (pow(right.Re(), 2) + pow(right.Im(), 2));
	im = (left.Re()*left.Im() - left.Re()*right.Im()) / (pow(right.Re(), 2) + pow(right.Im(), 2));
	return complex(sqrt(pow(re, 2) + pow(im, 2)), atan(im / re));
}

ostream& operator<< (ostream& stream, const complex& data)
{
	stream << data.Re() << ((data.Im() > 0) ? "+" : "") << data.Im() << "i";
	return stream;
}

complex::operator double()
{
	return Re();
}

complex pow(const complex& z, int p)
{
	return complex(pow(z.R(), p), z.Phi()*p);
}

complex pow(const complex& z1, const complex& z2)
{
	return complex(exp(z2.R()*z1.Phi()), z2.R()*log(z1.R()));
}

complex y(const complex& z)
{
	return 1 - pow(z, 5) - th(z);
}

complex th(const complex& z)
{
	return complex((exp(z.R() / 2) - exp(-z.R() / 2)) / (exp(z.R() / 2) + exp(-z.R() / 2)));
}
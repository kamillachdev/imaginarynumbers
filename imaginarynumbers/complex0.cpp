#include "complex0.h"

complex::complex()
{
	realN = 0;
	imaginaryN = 0;
}

complex::complex(double real, double imaginary)
{
	realN = real;
	imaginaryN = imaginary;
}

ostream& operator<<(ostream& output, const complex& object)
{
	output << "(" << object.realN << "," << object.imaginaryN << "i" << ")";
	return output;
}

istream& operator>>(istream& input, complex& object)
{
	cout << "skladowa rzeczywista: ";
	input >> object.realN;
	cout << "skladowa urojona: ";
	input >> object.imaginaryN;
	return input;
}

complex complex::operator~() const
{
	return complex(realN, imaginaryN * -1);
}

complex complex::operator+(const complex& b) const
{
	return complex(realN + b.realN, imaginaryN + b.imaginaryN);
}

complex complex::operator-(const complex& b) const
{
	return complex(realN - b.realN, imaginaryN - b.imaginaryN);
}

complex complex::operator*(const complex& b) const
{
	return complex(realN * b.realN, imaginaryN * b.imaginaryN);
}

complex operator*(double n, const complex& object)
{
	return complex(object.realN * n, object.imaginaryN * n);
}
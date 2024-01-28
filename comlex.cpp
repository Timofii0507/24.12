#include "complex.h"

istream& operator>>(istream& in, Complex& c) 
{
	in >> c.x >> c.y;
	return in;
}

ostream& operator<<(ostream& out, const Complex& c) 
{
	out << c.x << (c.y >= 0 ? " + " : " - ") << abs(c.y) << "i";
	return out;
}

Complex Complex::operator+(const Complex& other) const 
{
	return Complex(x + other.x, y + other.y);
}

Complex Complex::operator-(const Complex& other) const 
{
	return Complex(x - other.x, y - other.y);
}

bool Complex::operator!=(const Complex& other) const 
{
	return x != other.x || y != other.y;
}

bool Complex::operator==(const Complex& other) const 
{
	return x == other.x && y == other.y;
}

double Complex::operator()() const 
{
	return sqrt(x * x + y * y);
}


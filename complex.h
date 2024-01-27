#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex 
{
public:
	Complex() = default;
	Complex(double x, double y) : x(x), y(y) {}
	Complex(const Complex& other) : x(other.x), y(other.y) {}

	friend istream& operator>>(istream& in, Complex& c);
	friend ostream& operator<<(ostream& out, const Complex& c);

	Complex operator+(const Complex& other) const;
	Complex operator-(const Complex& other) const;

	bool operator!=(const Complex& other) const;
	bool operator==(const Complex& other) const;

	double operator()() const;

private:
	double x, y;
};

#endif 

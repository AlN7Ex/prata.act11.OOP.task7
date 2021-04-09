#include "complex0.h"

#include <iostream>

Complex::Complex()
{
	real = imag = 0.0;
}
Complex::Complex(double r)
{
	std::cout << "Complex::Complex(" << r << ")" << std::endl;
	real = r;
	imag = 0.0;
}

Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}

Complex Complex::operator+(const Complex & obj)
{
	return Complex(real + obj.real, imag + obj.imag);
}

Complex Complex::operator-(const Complex & obj)
{
	return Complex(real - obj.real, imag - obj.imag);
}

Complex Complex::operator*(const Complex & obj)
{
	return Complex((real * obj.real - imag * obj.imag), (real * obj.imag + imag * obj.real));
}

Complex operator*(double o1, const Complex & o2)
{
	return Complex(o1 * o2.real, o1 * o2.imag);
}

Complex Complex::operator~()
{
	return Complex(real, -imag);
}

std::ostream & operator<<(std::ostream & out, const Complex & obj)
{
	out << "(" << obj.real << ", " << obj.imag << "i)";

	return out; 
}

std::istream & operator>>(std::istream & in, Complex & obj)
{
	in >> obj.real >> obj.imag;
	
	return in;
}

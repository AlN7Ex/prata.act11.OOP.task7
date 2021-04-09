#include <iostream>

class Complex
{
private:
	double real, imag;
public:
	Complex();
	Complex(double ri);
	Complex(double r, double i);

	Complex operator+(const Complex & obj);
	Complex operator-(const Complex & obj);
	Complex operator*(const Complex & obj);
	Complex operator~();
	
	friend Complex operator*(double o1, const Complex & o2);
	friend std::ostream & operator<<(std::ostream & os, const Complex & obj);
	friend std::istream & operator>>(std::istream & os, Complex & obj);
};
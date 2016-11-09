#include "Complex.h"


ostream &operator<<(ostream&output, const Complex &complex)
{
	output << '(' << complex.a << "," << complex.b << ')';
	return output;
};

istream &operator>>(istream&input, Complex &complex)
{
	input.ignore();
	input >> complex.a;
	input.ignore();
	input >> complex.b;
	input.ignore();
	return input;
}




Complex::Complex()
{
	a = 0;
	b = 0;
}

Complex::Complex(double A)
{
	a = A;
	b = 0;
}

Complex::Complex(double A, double B)
{
	a = A;
	b = B;
}

Complex Complex::add(const Complex &C)const
{
	double newa = a + C.a;
	double newb = b + C.b;
	Complex newc(newa, newb);
	return newc;
}


Complex Complex::subtract(const Complex C)const
{
	double newa = a - C.a;
	double newb = b - C.b;
	Complex newc(newa, newb);
	return newc;
}

Complex Complex::multiply(const Complex C)const
{
	double newA = (a*C.a) - (b*C.b);
	double newB = (a*C.b) + (b*C.a);
	Complex newc(newA,newB);
	return newc;
}

Complex Complex::divide(const Complex C) const
{
	double newA= (a*C.a) + (b*C.b);
	double newB = (b*C.a) - (a*C.b);
	double newD = (C.a*C.a) + (C.b*C.b);
	double newG = newA / newD;
	double newF = newB / newD;
	Complex newc(newG,newF);
	return newc;
}

string Complex::toString()
{
	std::ostringstream s;
	if (b != 0)
	{
		s << "(" << a << " + " << b << "i)";
	}
	else
	{
		s << a;
	}
	return s.str();
}

Complex Complex::operator+(const Complex &D)
{
	return add(D);
}

Complex Complex::operator-(const Complex &D)
{
	return subtract(D);
}

Complex Complex::operator*(const Complex &D)
{
	return multiply(D);
}

Complex Complex::operator/(const Complex &D)
{
	return divide(D);
}

Complex Complex::operator+=(const Complex &D)
{
	a = a + D.a;
	b = b + D.b;

	return *this;
}

Complex Complex::operator-=(const Complex &D)
{
	a = a - D.a;
	b = b - D.b;

	return *this;
}

Complex Complex::operator*=(const Complex &D)
{
	a = a*D.a - b*D.b;
	b = a*D.a + b*D.a;
	
	return *this;
}

Complex Complex::operator/=(const Complex &D)
{
	a = (a*D.a + b*D.b) / (D.a*D.a + D.b*D.b);
	b = (b*D.a + a*D.b) / (D.a*D.a + D.b*D.b);

	return *this;
}

double Complex::operator[](int index)const
{
	if (index == 1)
		return b;
	else if (index == 0)
		return a;
	else return 0;
}

Complex Complex::operator+() const
{
	return Complex(a, b);
	
}

Complex Complex::operator-() const
{
	return Complex(-a, -b);
}

Complex Complex::operator ++()
{
	return Complex(++a, b);
}

Complex Complex::operator --()
{
	return Complex(--a, b);
}

Complex Complex::operator++(int dull)
{
	return Complex(a++, b);
}

Complex Complex::operator--(int dull)
{
	return Complex(a--, b);
}



Complex operator+(const Complex &C1, const Complex &C2)
{
	return C1 + C2;
}

Complex operator-(const Complex &C1, const Complex &C2)
{
	return C1 - C2;
}

Complex operator*(const Complex &C1, const Complex &C2)
{
	return C1 * C2;
}

Complex operator/(const Complex &C1, const Complex &C2)
{
	return C1 / C2;
}
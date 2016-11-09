#include "Complex.h"

Complex::Complex()
{
	a = 0;
	b = 0;
}

Complex::Complex(float A)
{
	a = A;
	b = 0;
}

Complex::Complex(float A, float B)
{
	a = A;
	b = B;
}

Complex Complex::add(const Complex &C)const
{
	float newa = a + C.a;
	float newb = b + C.b;
	Complex newc(newa, newb);
	return newc;
}


Complex Complex::subtract(const Complex C)const
{
	float newa = a - C.a;
	float newb = b - C.b;
	Complex newc(newa, newb);
	return newc;
}

Complex Complex::multiply(const Complex C)const
{
	float newA = (a*C.a) + (b*C.b);
	float newB = (a*C.b) + (b*C.a);
	Complex newc(newA,newB);
	return newc;
}

Complex Complex::divide(const Complex C) const
{
	float newA= (a*C.a) + (b*C.b);
	float newB = (b*C.a) - (a*C.b);
	float newD = (C.a*C.a) + (C.b*C.b);
	Complex newc((newA / newD) + (newB / newD));
	return newc;
}

//string Complex::toString()
//{
//	std::ostringstream s;
//	s << "(" << a << " + " << b << "i)";
//
//	return s.str();
//}


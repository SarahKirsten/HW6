#pragma once

/////////////////////////
//Program Name: 14.7 The Complex class
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 11/8/2016
///////////////////////

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include <vector>
#include <stack>
#include <ostream>
#include <sstream>
#include <complex>
using namespace std;

class Complex
{

private:
	friend ostream &operator<<(ostream&, const Complex &);
	friend istream &operator>>(istream&, Complex &);

	double a;//real
	double b;//imaginary
	
public:
	Complex();
	Complex(double A);
	Complex(double A, double B);
	Complex add(const Complex &C) const;
	Complex subtract(const Complex C) const;
	Complex multiply(const Complex C)const;
	Complex divide(const Complex C)const;

	

	Complex operator+(const Complex &D);
	Complex operator-(const Complex &D);
	Complex operator*(const Complex &D);
	Complex operator/(const Complex &D);
	Complex operator+=(const Complex &D);
	Complex operator-=(const Complex &D);
	Complex operator*=(const Complex &D);
	Complex operator/=(const Complex &D);
	double operator[](int index) const;


	Complex operator+() const;
	Complex operator-() const;


	Complex operator ++();
	Complex operator --();


	Complex operator++(int dull);
	Complex operator--(int dull);


	string toString();
};


Complex operator+(const Complex &C1, const Complex &C2);
Complex operator-(const Complex &C1, const Complex &C2);
Complex operator*(const Complex &C1, const Complex &C2);
Complex operator/(const Complex &C1, const Complex &C2);
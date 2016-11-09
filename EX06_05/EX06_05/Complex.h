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
using namespace std;

class Complex
{
private:
	float a;
	float b;
public:
	Complex();
	Complex(float A);
	Complex(float A, float B);
	Complex add(const Complex &C) const;
	Complex subtract(const Complex C) const;
	Complex multiply(const Complex C)const;
	Complex divide(const Complex C)const;


	Complex operator+(const Complex &C);
	Complex operator-(const Complex &C);
	Complex operator*(const Complex &C);
	Complex operator/(const Complex &C);
	Complex operator+=(const Complex &C);
	Complex operator-=(const Complex &C);
	Complex operator*=(const Complex &C);
	Complex operator/=(const Complex &C);
	double operator[](int index) const;



};


Complex operator+(const Complex &C1, const Complex &C2);
Complex operator-(const Complex &C1, const Complex &C2);
Complex operator*(const Complex &C1, const Complex &C2);
Complex operator/(const Complex &C1, const Complex &C2);
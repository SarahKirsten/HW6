#pragma once

/////////////////////////
//Program Name: 14.3 The Circle class
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

class Circle
{
private:
	double radius;
	static int numberOfObjects;
public:
	Circle();
	Circle(double);
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();

	bool operator<(const Circle& c2);
	bool operator<=(const Circle& c2);
	bool operator>(const Circle& c2);
	bool operator>=(const Circle& c2);
	bool operator==(const Circle& c2);
	bool operator!=(const Circle& c2);
	
};


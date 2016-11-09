/////////////////////////
//Program Name: 14.7
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 11/8/2016
///////////////////////

#include "Complex.h"

int main()
{
	double r1, r2, i1, i2;
	cout << "Enter the first complex number: ";
	cin >> r1 >> i1;
	cout << "Enter the second complex number: ";
	cin >> r2 >> i2;

	Complex num1(r1, i1);
	Complex num2(r2, i2);

	Complex num3 = num1.add(num2);

	cout << endl << num1.toString() << " + " << num2.toString() << " = " << num3.toString();

	num3 = num1.subtract(num2);

	cout << endl << num1.toString() << " - " << num2.toString() << " = " << num3.toString();

	num3 = num1.multiply(num2);

	cout << endl << num1.toString() << " * " << num2.toString() << " = " << num3.toString();

	num3 = num1.divide(num2);

	cout << endl << num1.toString() << " / " << num2.toString() << " = " << num3.toString();

	std::complex<double> mycomplex(r1 , i1);
	cout << endl << "|" << r1 << " + " << i1 << "i| = " << std::abs(mycomplex) << endl;


	cout << endl << endl;
	return 0;
}

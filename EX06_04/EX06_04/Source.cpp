/////////////////////////
//Program Name: 14.3
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 11/8/2016
///////////////////////

#include "CircleWithConstantMemberFunctions.h"
const int SIZE = 3;

int main()
{
	Circle temp;

	Circle arrayOfCircles[SIZE] = { Circle(3.5),Circle(2.33),Circle(9.81) };

	for (int i = 0;i < SIZE - 1;i++)
	{
		for (int j = SIZE - 1; j>0; j--)
		{
			if (arrayOfCircles[j] < arrayOfCircles[j - 1])
			{
				temp = arrayOfCircles[j];
				arrayOfCircles[j] = arrayOfCircles[j - 1];
				arrayOfCircles[j - 1] = temp;
			}
		}
	}
	for (int k = 0; k< 3; k++)
		cout << " Circle [" << k << "]: area of " << arrayOfCircles[k].getArea() << ", radius of " << arrayOfCircles[k].getRadius() << endl;

	return 0;
}

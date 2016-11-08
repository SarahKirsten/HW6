/////////////////////////
//Program Name: 13.1
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 11/5/2016
///////////////////////

#include "Header.h"

int main()
{
	ofstream output;//call the file
	//C:\Users\Sarah\Source\Repos\HW6\EX06_01\EX06_01
	output.open("/Users/Sarah/Source/Repos/HW6/EX06_01/EX06_01/Exercise13_1.txt", fstream::out | fstream::app);//open the file, if not exist, create

	srand((unsigned int)time(NULL));//random numbers

	for (int i = 0; i < 100;i++)//create 100 random integers
	{
		int x = rand() % 100;
		cout << x << " ";//set the random integer to the file
		if (i == 10 || i == 20 || i == 30 || i == 40 || i == 50 || i == 60 || i == 70 || i == 80 || i == 90)//create a new line for every 10 digits
			cout << endl;
	}
	
	output.close();
	cout << endl << endl;
	return 0;
}

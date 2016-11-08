/////////////////////////
//Program Name: 13.2
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 11/5/2016
///////////////////////

#include "Header.h"

int main()
{
	string FileName;
	cout << "'Babynameranking2012.txt'"<<endl;//the file i have in the folder that you could use
	cout << "Enter a file name: ";//prompt for file name
	cin >> FileName;//read in user input

	int sumChars = 0;
	char currentChar;
	ifstream input(FileName.c_str());

	if (input.fail())
	{
		cout << FileName << " does not exist." << endl;
	}
	else
	{
		cout << "Number of characters in " << FileName << ": ";
		while (input >> currentChar)
		{
			sumChars++;
		}
		cout << sumChars << "." << endl;
	}

	input.close();
	return 0;
}

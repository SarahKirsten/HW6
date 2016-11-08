/////////////////////////
//Program Name: 13.5
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 11/5/2016
///////////////////////

#include "Header.h"

int main()
{
	int year;
	char gender;
	string name;
	cout << "Enter the year to search in: ";
	cin >> year;
	cout << "\nEnter a name: ";
	cin >> name;
	cout << "\nEnter the gender: ";
	cin >> gender;
	//C:\Users\Sarah\Source\Repos\HW6\EX06_03\EX06_03\hw6-babyNames\Babynameranking20XX
	ifstream babyNames;
	string mName;
	string fName;
	string mRank;
	string fRank;
	if (year == 2010)
	{
		babyNames.open("/Users/Sarah/Source/Repos/HW6/EX06_03/EX06_03/hw6-babyNames/Babynameranking2010.txt", fstream::in);
		while (mName != name && fName != name)
		{
			{
			babyNames >> mName >> mRank >> fName >> fRank;
			}
		if (mName == name && toupper(gender) == 'M')
			{
			cout << "\nMale ranking is " << mRank << "." << endl;
			}
		else if (fName == name && toupper(gender) == 'F')
			{
			cout << "\nFemale ranking is " << fRank << "." << endl;
			}
		}
		if (name != mName && name != fName)
			cout << "\nRanking for " << name << " doesn't exist for the year " << year << "." << endl << endl;

		babyNames.close();
	}
	else if (year == 2011)
	{
		babyNames.open("/Users/Sarah/Source/Repos/HW6/EX06_03/EX06_03/hw6-babyNames/Babynameranking2011.txt", fstream::in);
		while (!babyNames.eof())
		{
			babyNames >> mName >> mRank >> fName >> fRank;

			if (mName == name && toupper(gender) == 'M')
			{
				cout << "\nMale ranking is " << mRank << "." << endl;
			}
			else if (fName == name && toupper(gender) == 'F')
			{
				cout << "\nFemale ranking is " << fRank << "." << endl;
			}
		}
		if (name != mName && name != fName)
			cout << "\nRanking for " << name << " doesn't exist for the year " << year << "." << endl << endl;

		babyNames.close();
	}
	else if (year == 2012)
	{
		babyNames.open("/Users/Sarah/Source/Repos/HW6/EX06_03/EX06_03/hw6-babyNames/Babynameranking2012.txt", fstream::in);
		while (!babyNames.eof())
		{
			babyNames >> mName >> mRank >> fName >> fRank;

			if (mName == name && toupper(gender) == 'M')
			{
				cout << "\nMale ranking is " << mRank << "." << endl;
			}
			else if (fName == name && toupper(gender) == 'F')
			{
				cout << "\nFemale ranking is " << fRank << "." << endl;
			}
		}
		if (name != mName && name != fName)
			cout << "\nRanking for " << name << " doesn't exist for the year " << year << "." << endl << endl;

		babyNames.close();
	}
	else if (year == 2013)
	{
		babyNames.open("/Users/Sarah/Source/Repos/HW6/EX06_03/EX06_03/hw6-babyNames/Babynameranking2013.txt", fstream::in);
		while (!babyNames.eof())
		{
			babyNames >> mName >> mRank >> fName >> fRank;

			if (mName == name && toupper(gender) == 'M')
			{
				cout << "\nMale ranking is " << mRank << "." << endl;
			}
			else if (fName == name && toupper(gender) == 'F')
			{
				cout << "\nFemale ranking is " << fRank << "." << endl;
			}
		}
		if (name != mName && name != fName)
			cout << "\nRanking for " << name << " doesn't exist for the year " << year << "." << endl << endl;

		babyNames.close();
	}
	else if (year == 2014)
	{
		babyNames.open("/Users/Sarah/Source/Repos/HW6/EX06_03/EX06_03/hw6-babyNames/Babynameranking2014.txt", fstream::in);
		while (!babyNames.eof())
		{
			babyNames >> mName >> mRank >> fName >> fRank;

			if (mName == name && toupper(gender) == 'M')
			{
				cout << "\nMale ranking is " << mRank << "." << endl;
			}
			else if (fName == name && toupper(gender) == 'F')
			{
				cout << "\nFemale ranking is " << fRank << "." << endl;
			}
		}
		if (name != mName && name != fName)
			cout << "\nRanking for " << name << " doesn't exist for the year " << year << "." << endl << endl;

		babyNames.close();
	}

	

	
	return 0;
}
//Why won't the code read the file? or interact with the file?
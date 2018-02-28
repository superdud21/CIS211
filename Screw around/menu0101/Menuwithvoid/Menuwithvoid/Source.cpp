/*Caleb Cameron
This program was to try a menu in my program*/

#include <iostream>
#include <cctype>
using namespace std;

void menu();

void authorprogram();

int main()
{
	menu();

	char userChoice = 0;

	cout << "Please Choose and Option: ";
	cin >> userChoice;


	if (userChoice != 'C')
	{
		switch (userChoice)
		{
		case 'A':
			double numberone;
			double numbertwo;

			cout << "Please enter two numbers as prompted: " << endl
				<< "Number 1: ";
			cin >> numberone;
			cout << "Number 2: ";
			cin >> numbertwo;

			if (numberone > numbertwo)
				cout << " " << numberone << " is greater than " << numbertwo << endl;
			else if (numberone < numbertwo)
				cout << " " << numberone << " is less than " << numbertwo << endl;
			else
				cout << "These two numbers are equal." << endl;
			break;
		case 'B':
			authorprogram();
			break;
		}

	}

	system("pause");
	return 0;
}

void menu()
{
	char userChoice = 0;
	cout << "Welcome!" << endl
		<< "*****************************************************************************************" << endl
		<< "This program is designed to ask for two numbers and determine which number is the maximum" << endl
		<< "and which number is the minimum" << endl
		<< "(A) Proceed" << endl
		<< "(B) Information on Author and Program" << endl
		<< "(C) Exit" << endl
		<< "*****************************************************************************************" << endl;


}

void authorprogram()
{
	cout << "Caleb Cameron" << endl
		<< "CIS 211 Schoolcraft Community College Winter 2018" << endl
		<< "This program is designed to have user input through user input and determine the maximum and minimum." << endl;
}
/*CalebCameron
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
			cout << "WE DID IT FUCKING FINALLY!"<< endl;
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
//Caleb Cameron-PC03-01
//The purpose of this program is to calculate miles per gallon of a vehicle with user input
 
#include <iostream>
using namespace std;

int main()
{
	//Declare variables
	double miles;
	double gallons;
	double milesPerGallon;
	
	//Display questions and get user input
	cout << "Enter number of miles traveled: ";
	cin >> miles;
	cout << "Enter number of gallons of gas used: ";
	cin >> gallons;

	//Calculate Miles Per Gallon
	milesPerGallon = miles / gallons;

	//Display result
	cout << "The miles per gallon during travel was: " << milesPerGallon << endl;
	system("pause");
	return 0;
	



}
// Caleb Cameron-PC05-14 This program is to take in a series of numbers and determine the maximum value and minimum value entered.
#include <iostream>
using namespace std;

int main()
{
	// Set up variables 
	int minvalue; 
	int maxvalue;
	int input;
	int exit;

	//Ask user for first input
	cout << "Please Enter a series of numbers one at a time as prompted. When finished enter the value -99 to finish the series" << endl;
	cout << "Please enter a value: ";
	cin >> input;
	maxvalue = input;				//Initialize the first maximum value
	minvalue = input;			   //Initalize the first minimum value

	do                       //Start Do/While loop for setting max and min values throughout the series of inputs
	{
		cout << "Please enter a value: ";				//Ask for additional user input
		cin >> input;
		
		if (input > maxvalue)					//Determine if a new max value should be set
			maxvalue = input;
		if (input != -99 && input < minvalue)		//Determine if a new minimum value should be set as long as it is not -99
			minvalue = input;
	}
	while (input != -99);			//Do this loop as long as the input value is not -99. If it is break the loop.

	//Print max and min values

	cout << "The maximum number you entered was: " << maxvalue << endl;
	cout << "The minimum number you entered was: " << minvalue << endl;


	system("pause");
	return 0;
}
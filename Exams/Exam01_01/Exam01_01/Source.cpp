#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Declare variables
	double timeinseconds, calctime, days = 86400, hours = 3600, minutes = 60;

	//Ask for user input for a value of seconds
	cout << ("Please enter a quantity of seconds: ");
	cin >> timeinseconds;


	//If statement to calculate for days
	if (timeinseconds >= 86400)
	{
		calctime = timeinseconds / days;
		cout << fixed << setprecision(2) << ("That is equivalent to ") << calctime << (" days.") << endl;
	}

	//Else if for calculation into hours
	else if (timeinseconds < 86400 && timeinseconds >= 3600)
	{
		calctime = timeinseconds / hours;
		cout << fixed << setprecision(2) << ("That is equivalent to ") << calctime << (" hours.") << endl;
	}

	//Else if for calculation into minutes
	else if (timeinseconds < 3600 && timeinseconds >= 60)
	{
		calctime = timeinseconds / minutes;
		cout << fixed << setprecision(2) << ("That is equivalent to ") << calctime << (" minutes.") << endl;
	}

	//Else if for time less than a minute
	else if (timeinseconds < minutes)
	{
		cout << ("Please enter a value greater than 60 seconds.") << endl;
	}

	system("pause");
	return 0;
}
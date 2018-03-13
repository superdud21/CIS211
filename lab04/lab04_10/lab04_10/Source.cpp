/*CalebCameron-PC04-10
This program is designed to display the bank fees associated with how many checks were written 
in a given month
*/
#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
	//Declare variables
	int checkswritten;
	double bankfees, twenty = 0.1, twentytthrity = 0.08, fortyfifty = 0.06, sixtyplus = 0.04;



	//Checks written is less than 20
	do
	{
		//Ask for user input to determine checks written in a given month
		cout << "How many checks were written this month: ";
		cin >> checkswritten;

		if (checkswritten > 0 && checkswritten < 20)
		{
			bankfees = checkswritten * twenty;
			cout << fixed << setprecision(2) << "Your bank fees for this month will be: $" << bankfees << endl;
		}

		//Checks written 20-39
		else if (checkswritten >= 20 && checkswritten <= 39)
		{
			bankfees = checkswritten * twentytthrity;
			cout << fixed << setprecision(2) << "Your bank fees for this month will be: $" << bankfees << endl;
		}
		//Checks written 40-59
		else if (checkswritten >= 40 && checkswritten <= 59)
		{
			bankfees = checkswritten * fortyfifty;
			cout << fixed << setprecision(2) << "Your bank fees foe this month will be: $" << bankfees << endl;
		}
		//Checks written 60 and greater
		else if (checkswritten >= 60)
		{
			bankfees = checkswritten * sixtyplus;
			cout << fixed << setprecision(2) << "Your bank fees for this month will be: $" << bankfees << endl;
		}
	} while (checkswritten <= 0);

	system("pause");
	return 0;

}

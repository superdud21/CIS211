#include <iostream>
using namespace std;

int main()
{	//Initialize Variables 
	double inputsalary = 0;
	double grosspay = 0;
	double paycheck = 0;
	const int  twicemonthly = 24, biweekly = 26;
	int selection = 0;

	//Ask for selection based on how user is paid
	cout << "How would you like to calculate your paychecks?" << endl
		<< "1. Twice a month (24 Paychecks)" << endl
		<< "2. Bi-Weekly (26 Paychecks)" << endl
		<< "3. Quit" << endl;
	cin >> selection;
	
	//If statement to pull out selection 3
	if (selection != 3)
	{
		//Switch statement for cases 1 and 2
		switch (selection)
		{

		//Case 1 for twice a month pay 
		case 1:
			cout << ("Enter your yearly salary: ");
			cin >> inputsalary;

			//Calculate an individual paycheck
			paycheck = inputsalary / twicemonthly;
			cout << ("Your paychecks will be: $ ") << paycheck << endl;

			//For loop to calculate gross pay over a year
			for (int i = 1; i < 25; i++)
			{
				grosspay += inputsalary / twicemonthly;
				cout << ("Week ") << i <<  (": $") << grosspay << (" YTD") << endl;
			}
			break;

		//Case 2 for bi weekly pay
		case 2:
			cout << ("Enter your yearly salary: ");
			cin >> inputsalary;

			//Calculate an individual paycheck
			paycheck = inputsalary / biweekly;
			cout << ("Your paychecks will be: $ ") << paycheck << endl;

			//For loop to calculate gross pay over a year
			for (int i = 1; i < 27; i++)
			{
				grosspay += inputsalary / biweekly;
				cout << ("Week ") << i << (": $") << grosspay << (" YTD") << endl;
			}
			break;
		}
	}

	system("pause");
	return 0;
}

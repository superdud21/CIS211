/*CalebCameron-PC04-01
This program is designed to take two numbers through user input and determine which one is the maximum and which 
is the minimum.
*/
#include <iostream>
using namespace std;

int main()
{
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
	system("pause");
	return 0;
}

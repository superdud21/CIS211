/*Caleb Cameron lab03_08
This program is to calculate the percentage of males and females in a registered class.
The values should add up to 100% allowed 2 decimal places.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Declare variables
	float males, females, total, numMales, numfemales, mpercent, fpercent;

	//User input
	cout << "How many males are in the class? ";
	cin >> males;
	cout << "How many females are in the class? ";
	cin >> females;

	//Calculations
	total = males + females;

	numMales = males / total;
	numfemales = females / total;
	mpercent = numMales * 100;
	fpercent = numfemales * 100;

	//Dislay results in percent form
	cout << setprecision(2) << "Percent of males is: " << mpercent << "%" << endl;
	cout << setprecision(2) << "Percent of females is: " << fpercent << "%" << endl;

	system("pause");
	return 0;
}
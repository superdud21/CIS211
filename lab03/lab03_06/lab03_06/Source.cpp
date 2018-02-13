//Caleb Cameron PC03-06
//The purpose of this program is to calculate an average test score with five tests

#include <iostream>
using namespace std;

int main()
{
	//Declare variables
	double score, totalScore, avgScore;

	//Display instructions
	cout << "This will calculate five test scores and calculate the average.";
	
	totalScore = 0;

	//For loop for test scores
	for (int count = 0; count < 5; count++)
	{
		cout << endl << "Enter score for test " << count + 1 << ": ";
		cin >> score;
		totalScore += score;
	} 

	//Calculate average test score
	avgScore = totalScore / 5;

	//Display average test score
	cout << "Average score is: " << avgScore << endl;

	system("pause");
	return 0;
}
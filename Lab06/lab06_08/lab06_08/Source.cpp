#include <iostream>

double testScore[5] = {0, 0, 0, 0, 0};
int lowest = 100;


void getScore(double &sendback)
{
	int temp;
	do
	{
		std::cout << "Enter a students test score: ";
		std::cin >> temp;

	} while (!(temp <= 100 && temp >= 0));

		sendback = temp;
}

void findLowest(int &lowest)
{

	for (int i = 0; i < 5; i++)
	{
		if (testScore[i] < testScore[lowest])
			lowest = i;
	}

}

void calcAverage(double &testAvg)
{
	double sum = 0;
	int indextobeDisreguarded = 0;

	findLowest(indextobeDisreguarded);

	for (int i = 0; i < 5; i++)
	{
		if (i != indextobeDisreguarded)
			sum += testScore[i];
	}
	
	testAvg = sum / 4;
	
}



int main()
{
	double average = 0.0;

	getScore(testScore[0]);
	getScore(testScore[1]);
	getScore(testScore[2]);
	getScore(testScore[3]);
	getScore(testScore[4]);

	calcAverage(average);


	std::cout << "The average test score was: " << average << std::endl;


	system("pause");
	return 0;
}

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

void maxAndMin();

int main()
{
	int smallest = 0;
	int biggest = 0;
	

	std::string salsaType[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
	int jarsSold[5] = { 0, 0, 0, 0, 0 };

	int n = sizeof(jarsSold)/sizeof(jarsSold[0]);

	std::cout << "How many jars of mild salsa did you sell: ";
	std::cin >> jarsSold[0];

	std::cout << "How many jars of medium salsa did you sell: ";
	std::cin >> jarsSold[1];

	std::cout << "How many jars of sweet salsa did you sell: ";
	std::cin >> jarsSold[2];

	std::cout << "How many jars of hot salsa did you sell: ";
	std::cin >> jarsSold[3];

	std::cout << "How many jars of zesty salsa did you sell: ";
	std::cin >> jarsSold[4];

	std::cout << std::endl;

	for(int i = 0; i < 4; i++)
	{
		std::cout << std::fixed << std::setw(7) << std::left << salsaType[i] << " - ";
		std::cout << std::fixed << std::setw(7) << std::left << jarsSold[i] << std::endl;
	}

	std::sort(jarsSold, jarsSold+n);


	std::cout << "The salsa that was sold the least was: " << jarsSold[0];
	std::cout << "The salsa that was sold the most was: " << jarsSold[4];
	
		
	system("pause");
	return 0;
}

void maxAndMin (int& max, int jarsSold[5], std::string salsaTypes[5])
{
	int temp = 0;

	do
	{
		for (int i = 0; i < 4; i++)
		{
			if (jarsSold[i] < jarsSold[i+1])
			{
				temp = jarsSold[i];
				jarsSold[i] = jarsSold[i + 1];
				jarsSold[i + 1] = temp;
			}
		}


	} while(jarsSold[0] < jarsSold[1]); jarsSold[1] < jarsSold[2]; jarsSold[2] < jarsSold[3]; jarsSold[3] < jarsSold[4];

}





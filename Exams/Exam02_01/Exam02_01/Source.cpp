/*Caleb Cameron - Exam02_01
The purpose of this program is to take user input of how many students are in the class and their names
then sort them in alphabetical order and output the order the student line should be in*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


int main()
{
	int numStudents = 0;					//Declare and Initalize number of students in class
	std::vector<std::string> students;	    // Declare Vector for student class

	
	std::cout << ("How many children are in the class (between 1 and 20): ");	
	std::cin >> numStudents;
	std::string studentName;

	for (int i = 0; i < numStudents; i++)		//For - loop to ask for students name and expand the vector to the required size
	{	
		std::cout << std::endl << "Please enter in the name of the student: ";
		std::cin >> studentName;
		students.push_back(studentName);
	}

	std::sort(students.begin(), students.end());		//Sort the contents of vector alphabetically 

	std::cout << std::endl << "The student line order should be: " << std::endl;

	for (int i = 0; i < numStudents; i++)		//Display the contents of the vector in the new order
	{
		std::cout << students.at(i) << std::endl;
	}

	std::cout << std::endl;

	system ("pause");
	return 0;
}

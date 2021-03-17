/*Author: Juan Antonio Sicardo Contreras
* Date: february 10th of 2021
* Description: This program determines if a year is a leap year or not. In the Gregorian Calendar system
* years are leap years if they are divisible by 4 but not by 100 unless it is also divisible by 400.
* The program takes in a year as input (as a command line argument) and returns the string "{year} was a leap
* year" if true and "{year} was not a leap year" if false.
* Part of the exercise labs for the "Introduction to Programming in C++" online course by NYUx at edx.org.
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	int year;
	bool isLeaper;

	if (argc < 2) {
		cout << "Usage: ./isleapyearc [year]" << endl;
		return 1;
	}

	year = stoi(argv[1]);

	if (year % 400 == 0)
		isLeaper = true;
	else if (year % 100 == 0)
		isLeaper = false;
	else if (year % 4 == 0)
		isLeaper = true;
	else
		isLeaper = false;

	if (isLeaper)
		cout << year << " was a leap year" << endl;
	else
		cout << year << " was not a leap year" << endl;

	return 0;
}
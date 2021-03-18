/*Author: From the "Introduction to Programming in C++" online course by NYUx at edx.org
* Date: march 17 fo 2021
* Description: This program reads a sequence of grades until -1 is entered, and prints the average.
*/

#include <iostream>

using namespace std;

int main() {
	bool seenEndOfInput;
	int sum, numOfStudents;
	int curr;
	double average;

	cout << "Enter the grades separated by a space" << endl;
	cout << "End the sequence by typing -1" << endl;

	seenEndOfInput = false;
	sum = 0;
	numOfStudents = 0;

	while (seenEndOfInput == false) {
		cin >> curr;

		if (curr == -1)
			seenEndOfInput = true;

		else {
			sum += curr;
			numOfStudents++;
		}
	}

	average = (double)sum / (double)numOfStudents;

	cout << "The class average is " << average << endl;


	return 0;
}
/*Author: From the "Introduction to Programming in C++" online course by NYUx at edx.org
* Date: march 17 fo 2021
* Description: This program reads the number of students in a class, and their grades separated by spaces. Then, the
* program calculates the class' average and prints it.
*/

#include <iostream>

using namespace std;

int main() {
	int numOfStudents;
	int count;
	int curr, sum;
	double average;

	cout << "Please enter the number of students in class: ";
	cin >> numOfStudents;

	cout << "Enter the students' grades (separated by a space): ";

	sum = 0;
	for (count = 1; count <= numOfStudents; count++) {
		cin >> curr;
		sum += curr;
	}

	average = (double)sum / (double)numOfStudents;

	cout << "The averages is " << average << endl;

	return 0;
}
/*Author: Juan Antonio Sicardo Contreras
* Date: february 10th of 2021
* Description: This program reads two grades (0 - 100) separated by a space. 
* If both grades are below a score of sixty then the program should output the message: 
* "Student Failed:(". 
* If both grades are greater than or equal to ninety five then the program should output the message:
* "Student Graduated with Honors:)".
* Otherwise the program should output the message:
* "Student Graduated!".
* Part of the exercise labs for the "Introduction to Programming in C++" online course by NYUx at edx.org.
*/

#include <iostream>
using namespace std;

const int PASSING_GRADE = 60;
const int HONOR_GRADE = 95;

int main() {
	int grade1, grade2;

	cout << "Please enter two grades from 0 to 100 separated by a space:" << endl;
	cin >> grade1 >> grade2;


	if (grade1 < PASSING_GRADE && grade2 < PASSING_GRADE)
		cout << "Student Failed:(" << endl;

	else if (grade1 >= HONOR_GRADE && grade2 >= HONOR_GRADE)
		cout << "Student Graduated with Honors:)" << endl;

	else
		cout << "Student Graduated!" << endl;

	return 0;
}
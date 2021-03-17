/*Author: From the "Introduction to Programming in C++" online course by NYUx in edx.org
* Date: february 8th of 2021
* Description: this program reads an integer from the user and displays if the number is
* odd or even. Meant to demonstrate how the "if - else" statement works in c++.
*/

#include <iostream>
using namespace std;

int main() {
	int userInput;

	cout << "Please enter a positive integer:" << endl;
	cin >> userInput;

	if (userInput % 2 == 0)
		cout << userInput << " is even" << endl;
	else
		cout << userInput << " is odd" << endl;

	return 0;
}
/*Author: From the "Introduction to Programming in C++" online course by NYUx in edx.org
* Date: february 8th of 2021
* Description: This program reads an integer from input and calculates and prints it's
* absolute value. Meant to illustrate how to use the "if" clause
*/

#include <iostream>
using namespace std;

int main() {
	int userInput, absoluteValue;

	cout << "Please enter an integer:" << endl;
	cin >> userInput;

	absoluteValue = userInput;
	if (userInput < 0)
		absoluteValue *= (-1);

	cout << "The absolute value of " << userInput << " is " << absoluteValue << endl;

	return 0;
}
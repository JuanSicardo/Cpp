/*From the "Introduction to Programming in C++" course at NYUx
* Date: February the 4th of 2021
* This program reads a char and prints its ASCII value.
*/

#include <iostream>
using namespace std;

int main() {
	char inputChar;
	int asciiValue;

	cout << "Please enter a character:" << endl;
	cin >> inputChar;

	asciiValue = (int)inputChar;

	cout << "The ASCII value of " << inputChar << " is " << asciiValue << endl;

	return 0;
}
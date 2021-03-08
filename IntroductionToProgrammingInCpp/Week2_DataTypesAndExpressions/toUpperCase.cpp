/*From the "Introduction to Programming in C++" online course material from NYUx
* Date: February the 4th of 2021
* This program reads a lower case letter from the user and prints it's upper case couterpart
* This program only works for the english alphabet.
*/

#include <iostream>
using namespace std;

int main() {
	char lowerCaseLetter, upperCaseLetter;
	int offset;

	cout << "Please enter a lower case letter:" << endl;
	cin >> lowerCaseLetter;

	offset = (int)(lowerCaseLetter - 'a');
	upperCaseLetter = (char)('A' + offset);

	cout << "The uppercase of " << lowerCaseLetter << " is " << upperCaseLetter << endl;

	return 0;
}
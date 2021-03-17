/*Author: From the "Introduction to Programming in C++" online course by NYUx in edx.org
* Date: february 8th of 2021
* Description: This program reads a character from the user and then displays if the characters
* is a lowercase or uppercase letter, a digit or a non alphanumeric character.
*/

#include <iostream>
using namespace std;

int main() {
	char userCh;

	cout << "Please enter a character:" << endl;
	cin >> userCh;

	if (userCh >= 'a' && userCh <= 'z')
		cout << userCh << " is a lower case letter" << endl;
	else if (userCh >= 'A' && userCh <= 'Z')
		cout << userCh << " is an upper case letter" << endl;
	else if (userCh >= '0' && userCh <= '9')
		cout << userCh << " is a digit" << endl;
	else
		cout << userCh << " is not an alpha-numeric character" << endl;

	return 0;
}
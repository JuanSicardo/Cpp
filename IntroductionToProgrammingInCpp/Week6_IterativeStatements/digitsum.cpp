/*Author: From the "Introduction to Programming in C++" online course by NYUx at edx.org
* Date: march 17 fo 2021
* Description: This program reads a positive integer num, and prints the number of digits in num and their sum.
* For example, 375 has 3 digits and their sum is 15.
*/

#include <iostream>

using namespace std;

int main() {
	int num, cpy;
	int sumDigits, countDigits;
	int currDigit;

	cout << "Please enter a positive integer:";
	cin >> num;

	cpy = num;

	sumDigits = 0;
	countDigits = 0;
	while (num > 0) {
		currDigit = num % 10;
		countDigits++;
		sumDigits += currDigit;
		num = num / 10;
	}

	cout << cpy << " has " << countDigits << " digits and their sum is " << sumDigits << endl;

	return 0;
}
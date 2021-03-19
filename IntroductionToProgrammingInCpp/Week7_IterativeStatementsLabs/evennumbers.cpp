/*Author: From the "Introduction to Programming in C++" online course by NYUx at edx.org
* Date: march 18 of 2021
* Description: This program reads a positive integer n, and prints the first n even numbers.
*/

#include <iostream>

using namespace std;

int main() {
	int n;
	int i;

	cout << "Please enter a positive integer: ";
	cin >> n;

	for (i = 1; i <= n; i++)
		cout << (i * 2) << endl;

	return 0;
}
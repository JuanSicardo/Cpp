/*Author: From the "Introduction to Programming in C++" online course by NYUx at edx.org
* Date: march 17 fo 2021
* Description: This program reads a positive integer n, and using the for statement prints the numbers from 1 up to n.
*/

#include <iostream>

using namespace std;

int main() {
	int n, counter;

	cout << "Please enter a positive integer:";
	cin >> n;

	for (counter = 1; counter <= n; counter++)
		cout << counter << endl;

	return 0;
}
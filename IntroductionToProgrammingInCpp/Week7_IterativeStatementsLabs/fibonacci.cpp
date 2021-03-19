/*Author: From the "Introduction to Programming in C++" online course by NYUx at edx.org
* Date: march 18 of 2021
* Description: This program reads a positive integer n and prints the first n numbers of the Fibonacci series using
* iterative statements. The first two numbers in the Fibonacci series are the number 1, all the others are
* the sum of the two preceding numbers.
*/

#include <iostream>
using namespace std;

const int FIRST = 1;
const int SECOND = 1;

int main() {
	int n;
	long ultimate, penultimate, current;
	int i;

	cout << "Please enter a positive integer:  ";
	cin >> n;

	if (n >= 1)
		cout << FIRST << endl;

	if (n >= 2)
		cout << SECOND << endl;

	ultimate = SECOND;
	penultimate = FIRST;

	for (i = 3; i <= n; i++) {
		current = ultimate + penultimate;
		cout << current << endl;
		penultimate = ultimate;
		ultimate = current;
	}

	return 0;
}
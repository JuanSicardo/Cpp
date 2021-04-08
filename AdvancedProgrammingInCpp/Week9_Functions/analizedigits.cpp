/*Author: From the "Advanced Programming in C++" online course by NYUx at edx.org
* Date: march 19 of 2021
* Description: This program reads a positive integer num, and prints the number of digits in num and their sum.
*/

#include <iostream>
using namespace std;

int analyzeDigits(int num, int& outSum);

int main() {
	int num, countDigs, sumDigs;

	cout << "Please enter a positive integer: ";
	cin >> num;

	countDigs = analyzeDigits(num, sumDigs);

	cout << num << " has " << countDigs << " digits and their sum is " << sumDigs << endl;

	return 0;
}

//Receives a number num as a parameter and an integer outSum by reference, returns
//how many digits num has and updates outSum to the sum of the digits in num.
int analyzeDigits(int num, int& outSum) {
	int count, sum;
	int currDig;

	count = sum = 0;
	while (num > 0) {
		currDig = num % 10;
		count++;
		sum += currDig;
		num = num / 10;
	}

	outSum = sum;
	return count;
}




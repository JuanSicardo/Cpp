/*Author: Juan Antonio Sicardo Contreras
* Date: February the 4th of 2021
* Excercise for the "Introduction to Programming in C++" online course by NYUx
* This program reads a number of quarters, dimes, nickels and pennies and outputs the monetary
* value of the coins in the format of dollars and remaining cents.
* This program is intended for positive quantities only, though, negative quantities would have
* the expected result of substrating to the total sum.
*/

#include <iostream>
using namespace std;

int main() {
	int quarters, dimes, nickels, pennies;
	int totalCents;
	int dollars, remainingCents;

	cout << "Please enter the number of coins:" << endl;

	cout << "# of quarters: ";
	cin >> quarters;

	cout << "# of dimes: ";
	cin >> dimes;

	cout << "# of nickels: ";
	cin >> nickels;

	cout << "# of pennies: ";
	cin >> pennies;

	totalCents = quarters * 25 + dimes * 10 + nickels * 5 + pennies * 1;
	dollars = totalCents / 100;
	remainingCents = totalCents % 100;

	cout << "The total is " << dollars << " dollars and " << remainingCents << " cents" << endl;

	return 0;
}
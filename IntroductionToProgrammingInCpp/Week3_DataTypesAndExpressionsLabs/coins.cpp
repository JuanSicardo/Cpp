/*Author: Juan Antonio Sicardo Contreras
* Date: february 5th, 2021
* This is a programming exercise from the online course "Introduction to Programming in C++" by NYUx
* This program reads an amount of dollars and cents, then it calculates and prints the
* minimum number of coins (quarters, dimes, nickels and pennies) that are equivalent to the given
* amount.
* This program is not intended for negative quantities of money.
*/

#include <iostream>
using namespace std;

const int QUARTERS_VALUE = 25, DIMES_VALUE = 10, NICKELS_VALUE = 5, DOLLARS_VALUE = 100;
int main() {
	int dollars, cents;
	int totalMoney;
	int quarters, dimes, nickels, pennies;

	cout << "Please enter the amount of menoy to convert:" << endl;

	cout << "# of dollars: ";
	cin >> dollars;

	cout << "# of cents: ";
	cin >> cents;

	totalMoney = dollars * DOLLARS_VALUE + cents;

	quarters = totalMoney / QUARTERS_VALUE;
	totalMoney = totalMoney % QUARTERS_VALUE;

	dimes = totalMoney / DIMES_VALUE;
	totalMoney = totalMoney % DIMES_VALUE;

	nickels = totalMoney / NICKELS_VALUE;
	totalMoney = totalMoney % NICKELS_VALUE;

	pennies = totalMoney;

	cout << "The coins are " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, " << pennies << " pennies" << endl;

	return 0;
}
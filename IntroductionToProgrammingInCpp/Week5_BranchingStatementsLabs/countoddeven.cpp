/*Author: Juan Antonio Sicardo Contreras
* Date: march the 3rd of 2021
* Description: This program receives four integers separated by spaces. The program counts how many
* odd and even numbers there are. The program then outputs one of three possibilities depending on how many even and
* odd numbers are entered:
* - More evens
* - More odds
* - Same number of evens and odds
* Part of the exercise labs for the "Introduction to Programming in C++" online course by NYUx at edx.org.
*/

#include <iostream>
using namespace std;

int main() {
	int i;
	int nums[4];
	int odds = 0, evens = 0;

	cout << "Please enter 4 positive integers, separated by a space :";
	cin >> nums[0] >> nums[1] >> nums[2] >> nums[3];

	for (i = 0; i < 4; i++)
		if (nums[i] % 2 == 0)
			evens++;
		else
			odds++;

	if (evens > odds)
		cout << "more evens" << endl;
	else if (evens < odds)
		cout << "more odds" << endl;
	else
		cout << "same number of evens and odds";

	return 0;
}
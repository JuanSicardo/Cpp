/*Author: From the "Introduction to Programming in C++" online course by NYUx in edx.org
* Date: february 8th of 2021
* Description: This program reads a time of the day in the 24-hours format (0:15, 5:30, 12:26, 16:14, 23:45)
* and prints it's 12-hours format equivalent (12:15 am, 5:30 am, 12:26 pm, 4:14 pm, 11:45 pm).
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int hour24, minutes24;
	int hour12, minutes12;
	string period;
	char temp;

	cout << "Please enter a time in a 24-hour format:" << endl;
	cin >> hour24 >> temp >> minutes24;

	minutes12 = minutes24;
	if (hour24 >= 0 && hour24 <= 11) {
		period = "am";
		if (hour24 == 0)
			hour12 = 12;
		else
			hour12 = hour24;
	}
	else {
		period = "pm";
		if (hour24 == 12)
			hour12 = 12;
		else
			hour12 = hour24 - 12;
	}

	cout << hour24 << ":" << minutes24 << " is " << hour12 << ":" << minutes12 << " " << period << endl;

	return 0;
}
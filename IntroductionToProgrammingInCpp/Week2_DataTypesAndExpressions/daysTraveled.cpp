/*From the "Introduction to Programming in C++" course material at NYUx
* Date: February the 3rd of 2021
* This program asks for a number of days and then it calculates the number of weeks
* and the reminder of days.
*/

#include <iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7;
int main() 
{
	int daysTraveled;
	int fullWeeks, remainingDays;

	cout << "Please enter the number of day you traveled:" << endl;
	cin >> daysTraveled;

	fullWeeks = daysTraveled / DAYS_IN_A_WEEK;
	remainingDays = daysTraveled % DAYS_IN_A_WEEK;

	cout << daysTraveled << " days are " << fullWeeks << " weeks and " << remainingDays << " days " << endl;


	return 0;
}
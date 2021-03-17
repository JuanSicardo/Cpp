/*Author: Juan Antonio Sicardo Contreras
* Date: february 5th of 2021
* This is a programming exercise from the online course "Introduction to Programming in C++" by NYUx
* This program reads the height in inches and weight in pounds of a person, converts these values
* to the metric system and outputs the person's body mass index (BMI). The BMI is Weight/Height^2.
* This program is not intended for negative values.
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double POUNDS_TO_KILOGRAMS = 0.453592, INCHES_TO_METERS = 0.0254;
int main() {
	double inches, pounds;
	double meters, kilograms;
	double bmi;

	cout << "Please enter weight in pounds: ";
	cin >> pounds;

	cout << "Please enter height in inches: ";
	cin >> inches;

	kilograms = pounds * POUNDS_TO_KILOGRAMS;
	meters = inches * INCHES_TO_METERS;

	bmi = kilograms / (meters * meters);

	cout << fixed << setprecision(2);
	cout << "BMI is: " << bmi << endl;

	return 0;
}
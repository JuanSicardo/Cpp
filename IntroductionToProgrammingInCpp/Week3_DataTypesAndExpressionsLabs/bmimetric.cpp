/*Author: Juan Antonio Sicardo Contreras
* Date: february 5th of 2021
* This is a programming exercise from the online course "Introduction to Programming in C++" by NYUx
* This program reads the height in meters and weight in kilograms of a person and outputs it's body 
* mass index (BMI). The BMI is Weight/Height^2
* This program is not intended for negative values.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double weight, height;
	double bmi;

	cout << "Please enter weight in kilograms: ";
	cin >> weight;

	cout << "Please enter height in meters: ";
	cin >> height;

	bmi = weight / (height * height);

	cout << fixed << setprecision(2);
	cout << "BMI is: " << bmi << endl;

	return 0;
}
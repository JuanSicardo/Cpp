/*Author: From the "Advanced Programming in C++" online course by NYUx at edx.org
* Date: march 23 of 2021
* Description: This program reads 3 real numbers, representing coefficients of a
* quadratic equation, and prints the solution of the equation, if there are any,
* or an appropriate message.
*/

#include <cmath>
#include <iostream>
using namespace std;

const int NO_SOLUTION = 0;
const int ONE_REAL_SOLUTION = 1;
const int TWO_REAL_SOLUTIONS = 2;
const int ALL_REALS = 3;
const int NO_REAL_SOLUTIONS = 4;

int quadratic(double a, double b, double c, double& outX1, double& outX2);
int linear(double a, double b, double& outX);

int main() {
	double a, b, c, x1, x2;

	cout << "Please enter coefficients of the quadratic equation: ";
	cin >> a >> b >> c;

	cout << "The equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

	switch (quadratic(a, b, c, x1, x2)) {
	case TWO_REAL_SOLUTIONS:
		cout << "Solutions: " << x1 << " " << x2 << endl;
		break;

	case ONE_REAL_SOLUTION:
		cout << "One solution: " << x1 << endl;
		break;

	case NO_REAL_SOLUTIONS:
		cout << "No real solutions" << endl;
		break;

	case NO_SOLUTION:
		cout << "No solutions" << endl;
		break;

	case ALL_REALS:
		cout << "All real numbers are solutions" << endl;
		break;

	default:
		cout << "Error" << endl;
		break;
	}

	return 0;
}

//Description:	solves the quadratic equation: ax^2 + bx + c = 0
//Input:		a,b,c - coefficients of the equation
//Output: 		1. Type of solution (return value)
//				2. outX1, outX2 - solutions to equations (output parameters)
//Assumptions:	1. If equation has one solution it will be returned in outX1
//				2. If equation has no real solutions the values int outX1 and out X2 are not defined

int quadratic(double a, double b, double c, double& outX1, double& outX2) {
	double x1, x2, delta;

	if (a != 0.0) {
		delta = b * b - 4 * a * c;

		if (delta > 0) {
			double x1 = (-b + sqrt(delta)) / (2 * a);
			double x2 = (-b - sqrt(delta)) / (2 * a);
			outX1 = x1;
			outX2 = x2;
			return TWO_REAL_SOLUTIONS;
		}

		else if (delta == 0) {
			x1 = -b / (2 * a);
			outX1 = x1;
			return ONE_REAL_SOLUTION;
		}

		else
			return NO_REAL_SOLUTIONS;
	}

	else
		return linear(b, c, outX1);

	return 0;
}

/*Description:	Solves the linear equation ax + b = 0
* Input:		a, b - coefficients of the equation
* Output:		1. Type of solution (return value)
*				2. outX - solution to equation (output parameter)
* Assumptions:	If equation has no solutions the value returned at outX is not defined.
*/
int linear(double a, double b, double& outX) {
	double x;

	if (a != 0) {
		x = -b / a;
		outX = x;
		return ONE_REAL_SOLUTION;
	}

	else if ((a == 0) && (b == 0)) {
		x = 0;
		outX = x;
		return ALL_REALS;
	}

	else
		return NO_SOLUTION;
}
/*Author: From the "Introduction to Programming in C++" online course by NYUx at edx.org
* Date: february 10th of 2021
* Description: This program evaluates simple expressions of the form [number1] [operator] [number2], where
* the operator can be: '+' to make a sum, '-' to make a subtraction, '*' to make a multiplication, /
* and '/' to make a division.
*/

#include <iostream>
using namespace std;

int main() {
	double arg1, arg2, res;
	char op;

	cout << "Please enter an expression of the form arg1 op arg2:" << endl;
	cin >> arg1 >> op >> arg2;

	switch (op) {
	case '+':
		res = arg1 + arg2;
		cout << res << endl;
		break;
	case '-':
		res = arg1 - arg2;
		cout << res << endl;
		break;
	case '*':
		res = arg1 * arg2;
		cout << res << endl;
		break;
	case '/':
		if (arg2 != 0) {
			res = arg1 / arg2;
			cout << res << endl;
		}
		else
			cout << "Illegal expression." << endl;
		break;
	default:
		cout << "Illegal expression" << endl;
	}

	return 0;
}
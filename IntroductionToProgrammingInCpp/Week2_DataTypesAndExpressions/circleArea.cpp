/*From the "Introduction to Programming in C++" course at NYUx
* Date: February the 3rd of 2021
* This program reads the radius of a circle and then calculates the area of that circle
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double radius, area;

	cout << "Please enter the radius of the circle:" << endl;
	cin >> radius;

	area = M_PI * (radius * radius);

	cout << "The area of a circle with radius of  " << radius << " is " << area << endl;

	return 0;
}
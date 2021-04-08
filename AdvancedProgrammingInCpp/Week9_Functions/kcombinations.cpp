/*Author: From the "Advanced Programming in C++" online course by NYUx at edx.org
* Date: march 19 of 2021
* Description: Let n and k be two nonnegative integers, such that k <= n. We define k-combinations as the number
* of unordered selections of k distinct elements from the set of size n. The k-combinations of a set of n elements
* its also called "n choose k". The formula for n choose k is: n! / [(n-k)! k!].
* This program reads from the user two positive integers n, k (n >= k) and prints the value of n choose k.
*/

#include <iostream>
using namespace std;

int factorial(int num);
int kcombinations(int n, int k);

int main() {
	int n, k, k_comb;

	cout << "Please enter n and k (n >= k) separated by a space: " << endl;
	cin >> n >> k;

	k_comb = kcombinations(n, k);
	cout << n << " choose " << k << " is " << k_comb << endl;

	return 0;
}

//Retruns n choose k
int kcombinations(int n, int k) {
	int nFact, kFact, n_kFact;

	nFact = factorial(n);
	kFact = factorial(k);
	n_kFact = factorial(n - k);

	return nFact / (n_kFact * kFact);
}

//Receives an integer as argument and returns its factorial value.
int factorial(int num) {
	int factRes, i;

	factRes = 1;
	for (i = 1; i <= num; i++)
		factRes *= i;

	return factRes;
}
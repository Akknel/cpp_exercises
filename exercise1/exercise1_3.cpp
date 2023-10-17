/*
Enter from keyboard natural number n.
Print all possible triplets of integer numbers where all numbers in triplet are less than n 
and numbers in each triplet makes integer lengths for rectangular triangle.
Remember Pythagorean theorem c^2 = a^2 + b^2
*/
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter from keyboard natural number: ";
	cin >> n;
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < i; j++) {
			for (int k = 1; k < j; k++) {
				if (i * i == j * j + k * k) {
					cout << i << "^2" << " = " << j << "^2" << " + " << k << "^2 |";
					break;
				} 
			}
		}
	}
	return 0;
}

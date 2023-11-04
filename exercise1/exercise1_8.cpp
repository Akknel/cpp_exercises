/*
Given a natural number N. Without using an array or other data structure,
find out whether there are equal numbers of 2 and 3 among all the
prime factors of the number, and return the count of such prime
factors (counted separately). Otherwise, return -1.
Example#1: N = 180; Answer: 2 (because 180 = 2*2*3*3*5, 2 and 3 each repeat 2 times)
Example#2: N = 35; Answer: 0 (because 35 = 5*7, 2 and 3 repeat 0 times)
Example#3: N = 120; Answer: -1 (because 120 = 2*2*2*3*5, 2 and 3 have different repeat counts)
*/
#include <iostream>
using namespace std;
int calc(int n) {
	int two = 0, three = 0;
	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
			two += 1;
		}
		else if (n % 3 == 0) {
			n /= 3;
			three += 1;
		}
		else if (n % 3 != 0) {
			for (int i = 5; i = n; i++) {
				if (n % i == 0) {
					n /= i;
					break;
				}
			}
		}
	}
	if (two == three) return two;
	else return -1;
}
int main() {
	int n;
	cout << "Type natural number: ";
	cin >> n;
	cout << calc(n);
}
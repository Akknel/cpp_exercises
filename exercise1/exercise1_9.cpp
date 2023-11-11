/*
Write a program that counts how many zeros the user will type until 0 0. 
After that, it will stop counting zeros. When the user types 0 0 0, 
the program ends and shows how many zeroes were typed before 0 0.
*/
#include <iostream>
using namespace std;

int check(int n) {
	int flag = 0, stop = 0;
	while (true) {
		while (stop != 2) {
			if (n == 0) {
				stop += 1;
				cin >> n;
				if (n == 0) {
					stop += 1;
				}
				else {
					flag += 1;
					stop = 0;
				}
			}
			cin >> n;
		}
		if (n == 0) {
			cin >> n;
			if (n == 0) {
				cin >> n;
				if (n == 0) {
					return flag;
				}
			}
		}
		cin >> n;
	}
}
int main() {
	int n;
	cout << "Type numbers: " << endl;
	cin >> n;
	int res = check(n);
	cout << "Zeros: " << res;
}


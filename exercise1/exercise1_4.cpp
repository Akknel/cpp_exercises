/*
Enter from keyboard coordinates of one place on chess desk using Algebraic notation. (a - h and 1 - 8 )
Print on screen chess desc made from 0 and 1. Print 1 for places where Knight can move from entered place.Print 0 for all other places.
Example: 
Enter: c 5
Print :
00000000
00000000
01010000
10001000
00000000
10001000
01010000
00000000
*/

#include <iostream>
using namespace std;

void chess(int x, int y) {
	for (int i = 8; i > 0; i--) {
		for (int j = 0; j < 8; j++) {
			int forx = abs(j - x);
			int fory = abs(i - y);
			if (forx == 1 && fory == 2 || forx == 2 && fory == 1) {
				cout << '1';
			}
			else {
				cout << '0';
			}
		}
		cout << endl;
	}
}
int main() {
	char letter;
	int y;
	int x;
	cout << "Enter values for cordinates: ";
	cin >> letter >> y;
	x = int(letter) - 97;
	if (y < 1 || y > 8 || x < 0 || x > 7) {
		cout << "Invalid input. Please enter valid coordinates." << endl;
	}
	else {
		chess(x, y);
	}
}


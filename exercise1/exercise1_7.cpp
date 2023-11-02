/* Create a function with 4 parameters. Three numbers are given as the first 3 parameters. Execute:
1) If the 3rd number is greater than the 2nd (beginning value), then print 1 or 0 (1 - true, 0 - false).
2) Swap the 1st and 3rd numbers with each other.
3) If the 1st number is an even number, return the 4th parameter as the 2nd number; otherwise, return it as the 3rd number (beginning value).
Example#1 Type three numbers: 4, 2, 7 (first 3 parameters) Console returns: 1 7,2,4,2
Example#2 Type three numbers: 5, 9, 4 (first 3 parameters) Console returns: 0 4,9,5,4
*/
#include <iostream>
using namespace std;
int calc(int a, int b, int c, int x = 0) {
	if (c > b) cout << 1 << " ";
	else cout << 0 << " ";
	if (a % 2 == 0) x = b;
	else x = c;
	int newa = a;
	a = c;
	c = newa;
	cout << a << "," << b << "," << c << ",";
	return x;
}
int main() {
	int a, b, c;
	cout << "Type three numbers: ";
	cin >> a >> b >> c;
	cout << calc(a, b, c);
}

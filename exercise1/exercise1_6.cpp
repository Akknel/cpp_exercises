/*
Enter from keyboard a string (symbol by symbol until you enter dot (‘.‘)). 
Process entered string symbol by symbol. Do not use C++ bult in string processing functions. 
Capitalize each word in entered string. Print entered string with capitalized words.
Words are delimited with whitespace.
Some examples:
Enter: asa desa.		Print: Asa Desa
Enter: asa DESA.	Print: Asa Desa
Enter: Asa Desa		Print: Asa Desa
Enter: as43242fdsf.	Print: As43242fdsf
Enter: 12312aas.	Print: 12312aas
*/
#include <iostream>
using namespace std;
void fun(char c) {
	int flag = 0;
	string end;
	while (c != '.') {
		int num = int(c);
		if (num == 32) {
			flag = 0;
			end += char(num);
		} else if (flag == 0 && num > 96) {
			end += char(num - 32);
			flag += 1;
		} else if (num >= 65 && num <= 90 && flag != 0) {
			end += char(num + 32);
		} else {
			end += char(num);
			flag += 1;
		}
		cin.get(c);
	}
	cout << "Print: " << end << endl;
}
int main(){
	char c;
	cout << "Enter: ";
	cin.get(c);
	fun(c);
}

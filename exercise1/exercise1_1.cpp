/*
Enter sequence of numbers until two following zeros(0 0) are entered.
Print how many negative, how many positive and how many zeros are entered.
Example: Enter: 5 7 0 4 7 0 -2 5 -7 0 0.
Answer will be: 5 positive 2 negative 4 zeros.
*/
#include <iostream>
using namespace std;

int main(){
    int neg = 0, pos = 0, zer = 0;
    int flag = 0;
    int type;
    cout<<"Type numbers: "<<endl;
    while (true) {
        if (flag == 2) {
            break;
        }
        cin>>type;
        if (type == 0) {
            zer += 1;
            flag += 1;
        } else if (type < 0) {
            neg += 1;
            flag = 0;
        } else if (type > 0) {
            pos += 1;
            flag = 0;
        }
    }
    cout << pos <<" positive "<< neg <<" negative "<< zer <<" zeros"<<endl;
    return 0;
}

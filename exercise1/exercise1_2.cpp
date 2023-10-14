//Enter from keyboard real number with 2 digits after decimal separator.
//Print entered amount of EUR splitted in nominals.
//Print how many pieces of money of each nominal are necessary to get entered amount.
//Example:
//Enter: 138.53
//Print: 0 - 500 1 - 100 0 - 50 1 - 20 1 - 10 1 - 5 1 - 2 1 - 1 1 - 0,50 0 - 0,10
//0 - 0,05 1 - 0,02 1 - 0,01

#include <iostream>
using namespace std;
void taka(double x, double y[], double n) {
    cout<<"Print: ";
    int flag = 0;
    for(int i=0;i<n;++i) {
        if (x - y[i] >= 0) {
            while(true) {
                if (x - y[i] >= 0) {
                    x -= y[i];
                    flag +=1;
                } else {
                    break;
                }
            }
            cout<<flag<<" - "<<y[i]<<" ";
            flag = 0;
        } else {
            cout<<"0 - "<<y[i]<<" ";
        }
    }
}
int main() {
    double money;
    double diff[]={500,100,50,20,10,5,2,1,0.50,0.10,0.05,0.02,0.01};
    cout<<"Enter: ";
    cin>>money;
    taka(money, diff, 13);
}

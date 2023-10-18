/*
Two boys are playing card game 10 times.After each set, they count points and enter result of each player into your program.
Your program must decide who is winner in current set and count how many sets winner is first player and how many sets winner is second player.
To decide who is winner, follow rules:
If one player has less points as 21 and another has more points than 21 then winner is player with points less than 21.
If both players have points more than 21 or both have less than 21 then winner is player with result closer to 21.
Example: (Bolded data are entered from keyboard)
1.set: 1 player result is: 18
2 player result is: 20
The winner of 1. set is 2 player.Total result is 0 : 1
2.set: 1 player result is: 12
2 player result is: 22
The winner of 2. set is 1 player.Total result is 1 : 1
3.set: 1 player result is: 19
2 player result is: 19
Spare in 3. set – no winner.Total result is 1 : 1
4.set: 1 player result is: 22
2 player result is: 23
The winner of 4. set is 1 player.Total result is 2 : 1
*/
#include <iostream>
using namespace std; 

void count(int x, int y) {
    int score1 = 0, score2 = 0;
    for (int i = 1; i < 11; i++) {
        cout << i << ".set: 1 player result is: ";
        cin >> x;
        cout << "2 player result is: ";
        cin >> y;
        if (x == y) {
            cout << "Spare in " << i << ". set - no winner.Total result is " << score1 << " : " << score2 << endl;
        } else {
            if ((x > 21 && y < 21) || (x <= 21 && y <= 21 && x < y) || (x >= 21 && y >= 21 && x > y)) {
                score2 += 1;
                cout << "The winner of " << i << ". set is 2 player.Total result is " << score1 << " : " << score2 << endl;
            } else {
                score1 += 1;
                cout << "The winner of " << i << ". set is 1 player.Total result is " << score1 << " : " << score2 << endl;
            }
        }
    }
}
int main() {
    int points1 = 0;
    int points2 = 0;
    count(points1, points2);
}
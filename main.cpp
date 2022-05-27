#include <iostream>
/*
 * Winner = 1 - Petya
 * Winner = 2 - Vanya
 */
using namespace std;
string TicToc(string gameresult) {
    int x = 0, o = 0, winner;

    for (int i = 0; i < gameresult.length(); i++) {
        if (gameresult[i] == 'X' || gameresult[i] == 'O' || gameresult[i] == '.') {
            if (gameresult[i] == 'X') x++;
            else if (gameresult[i] == 'O') o++;
        } else {
            cout << "Incorrect";
            break;
        }
    }
        ///------------------------------------------------------------------------------------------
        if (gameresult[0] == 'X' && gameresult[3] == 'X' && gameresult[6] == 'X') winner = 1;
        else if (gameresult[0] == 'O' && gameresult[3] == 'O' && gameresult[6] == 'O') winner = 2;

        else if(gameresult[1] == 'X' && gameresult[4] == 'X' && gameresult[7] == 'X') winner = 1;
        else if (gameresult[1] == 'O' && gameresult[4] == 'O' && gameresult[7] == 'O') winner = 2;

        else if (gameresult[2] == 'X' && gameresult[5] == 'X' && gameresult[8] == 'X') winner = 1;
        else if (gameresult[2] == 'O' && gameresult[5] == 'O' && gameresult[8] == 'O') winner = 2;
        ///------------------------------------------------------------------------------------------
        else if (gameresult[0] == 'X' && gameresult[1] == 'X' && gameresult[2] == 'X') winner = 1;
        else if (gameresult[0] == 'O' && gameresult[1] == 'O' && gameresult[2] == 'O') winner = 2;

        else if (gameresult[3] == 'X' && gameresult[4] == 'X' && gameresult[5] == 'X') winner = 1;
        else if (gameresult[3] == 'O' && gameresult[4] == 'O' && gameresult[5] == 'O') winner = 2;

        else if (gameresult[6] == 'X' && gameresult[7] == 'X' && gameresult[8] == 'X') winner = 1;
        else if (gameresult[6] == 'O' && gameresult[7] == 'O' && gameresult[8] == 'O') winner = 2;
        ///------------------------------------------------------------------------------------------------
        else if (gameresult[0] == 'X' && gameresult[4] == 'X' && gameresult[8] == 'X') winner = 1 ;
        else if (gameresult[0] == 'O' && gameresult[4] == 'O' && gameresult[8] == 'O') winner = 2;

        else if (gameresult[2] == 'X' && gameresult[4] == 'X' && gameresult[6] == 'X') winner = 1 ;
        else if (gameresult[2] == 'O' && gameresult[4] == 'O' && gameresult[6] == 'O') winner = 2;
        ///-----------------------------------------------------------------------------------------------

        if (winner == 1) {
            if (x > 5 || (x - 1) != o) return "Incorrect";
            else return "Petya won";
        } else if (winner == 2){
            if (o > 4 || x != o) return "Incorrect";
            else return "Vanya won";
        } else return "Nobody";
}
int main(){
    cout << "Enter the result of the game in three lines" << endl;
    string playground1 , playground2, playground3;
    cin >> playground1 >> playground2 >> playground3;
    string gameresult = playground1 + playground2 + playground3;
    cout << TicToc(gameresult);
}



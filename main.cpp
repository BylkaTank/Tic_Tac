#include <iostream>

using namespace std;
string TicToc(string gameresult) {
    int x, o = 0;

    for (int i = 0; i < gameresult.length(); i++) {
        if (gameresult[i] == 'X' || gameresult[i] == 'O' || gameresult[i] == '.') {
            if (gameresult[i] == 'X') x++;
            else if (gameresult[i] == 'X') o++;
        } else {
            cout << "Incorrect";
            break;
        }
    }

    if (x > 5 || ((o - 1) != x)) cout << "Incorrect";
    else {
        ///------------------------------------------------------------------------------------------
        if (gameresult[0] == 'X' && gameresult[3] == 'X' && gameresult[6] == 'X') cout << "Petya won";
        else if (gameresult[0] == 'O' && gameresult[3] == 'O' && gameresult[6] == 'O') cout << "Vanya won";

        if (gameresult[1] == 'X' && gameresult[4] == 'X' && gameresult[7] == 'X') cout << "Petya won";
        else if (gameresult[1] == 'O' && gameresult[4] == 'O' && gameresult[7] == 'O') cout << "Vanya won";

        if (gameresult[2] == 'X' && gameresult[5] == 'X' && gameresult[8] == 'X') cout << "Petya won";
        else if (gameresult[2] == 'O' && gameresult[5] == 'O' && gameresult[8] == 'O') cout << "Vanya won";
        ///------------------------------------------------------------------------------------------
        if (gameresult[0] == 'X' && gameresult[1] == 'X' && gameresult[2] == 'X') cout << "Petya won";
        else if (gameresult[0] == 'O' && gameresult[1] == 'O' && gameresult[2] == 'O') cout << "Vanya won";

        if (gameresult[3] == 'X' && gameresult[4] == 'X' && gameresult[5] == 'X') cout << "Petya won";
        else if (gameresult[3] == 'O' && gameresult[4] == 'O' && gameresult[5] == 'O') cout << "Vanya won";

        if (gameresult[6] == 'X' && gameresult[7] == 'X' && gameresult[8] == 'X') cout << "Petya won";
        else if (gameresult[6] == 'O' && gameresult[7] == 'O' && gameresult[8] == 'O') cout << "Vanya won";
        ///------------------------------------------------------------------------------------------------
        if (gameresult[0] == 'X' && gameresult[4] == 'X' && gameresult[8] == 'X') cout << "Petya won";
        else if (gameresult[0] == 'O' && gameresult[4] == 'O' && gameresult[8] == 'O') cout << "Vanya won";

        if (gameresult[2] == 'X' && gameresult[4] == 'X' && gameresult[6] == 'X') cout << "Petya won";
        else if (gameresult[2] == 'O' && gameresult[4] == 'O' && gameresult[6] == 'O') cout << "Vanya won";
        ///-----------------------------------------------------------------------------------------------
        else cout << "Nobody";
    }
}
int main(){
    string playground1 , playground2, playground3;
    cin >> playground1 >> playground2 >> playground3;
    string gameresult = playground1 + playground2 + playground3;
    cout << gameresult;
    cout << TicToc(gameresult);
}



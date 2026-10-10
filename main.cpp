#include <iostream>

char player;
char computer;
using namespace std;

int main() { 

    do{
    cout << "Welcome to Rock Paper Scissors! Good Luck Winning!" << endl;
    cout << "=======================" << endl;
    cout << "Please choose your weaapon." << endl;
    cout << "'r' for rock, 'p' for paper, 's' for scissors" << endl;
    cin >> player;
    } while(player!='r' && player!='p' && player!='s');

    return 0;
};

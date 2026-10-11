#include <iostream>

char player;
char computer;
using namespace std;


int main() { 
    int count = 0;

    cout << "Welcome to Rock Paper Scissors! Good Luck Winning!" << endl;
    cout << "======================================================" << endl;
    
    do{
    std::string r = "Rock";
    std::string p = "Paper";
    std::string s = "Scissors";

    
    do{
    cout << "Please choose your weaapon." << endl;
    cout << "'r' for rock, 'p' for paper, 's' for scissors" << endl;
    cin >> player;
    } while(player!='r' && player!='p' && player!='s');

    if(player == 'r'){
        cout << "*************************************" << endl;
        cout << "Your choice is " << r << endl;
        cout << "I CHOOSE PAPER! YOU LOSE!!!!" << endl;
    };
    if(player == 'p'){
        cout << "*************************************" << endl;
        cout << "Your choice is " << p << endl;
        cout << "I CHOOSE SCISSORS!!!! YOU WILL NEVER WIN MWAHHAHAH!!!!!!!!!!!" << endl;
    };
    if(player == 's'){
        cout << "*************************************" << endl;
        cout << "Your choice is " << s << endl;
        cout << "I CHOOSE ROCK. YES ROCK. YOU LOSEEEEE!!!!" << endl;
    };

    cout << "========================================================" << endl;
        count+=1;
    }   while(count < 3);
   
    cout << "You lost 0-3. Better luck next time." << endl;

    return 0;
    };

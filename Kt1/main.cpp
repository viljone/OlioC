#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int range);
using namespace std;

int main()
{
    int range;
    cout << "Define the guess range by submitting the desired number: ";
    cin >> range;
    int guesses = game(range);
    cout << "It took you "<< guesses <<" guesses to get it right!" << endl;

    return 0;
}

int game(int range){
    srand(time(NULL));
    int RNG = rand() % range+1;
    int guess;
    int calc;
    cout << "Guess a number between 1-" << range << ": " << endl;
    cin >> guess;

    while(1){
        calc++;
        if(guess == RNG){
            cout << "BIg W!" << endl;
            break;
        }
        else if(guess < RNG){
            cout << "Try bigger number:" << endl;
            cin >> guess;
        }
        else if(guess > RNG){
            cout << "Try smaller number:" << endl;
            cin >> guess;
        }
    }

    return calc;
}

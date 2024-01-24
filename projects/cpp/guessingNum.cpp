#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){

    srand(time(0));

    int min = 1, max = 10;
    int gap = max - min + 1;
    int randNum = rand() % gap + min;
    int guess, guessCount = 5;
    


while(guessCount != 0){
 
    cout << "\nEnter your guess (" << guessCount << ") : ";
    cin >> guess;

    if(guess == randNum){
        cout << "\nCongurulations ! You guessed the correct number.\n";
        return 0;
    }else{
        guessCount--;
        cout << endl <<"Try again :(\n";
        if (guessCount == 0) {
                cout << "Out of guesses. The correct number was " << randNum << ".\n";
            }
    }

}
    

    return 0;
}
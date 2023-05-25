#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){

    srand(time(0));
    int guess , guessCount = 5 , randNum = rand() , min = 1 , max = 100;
    int gap = max-min ;

    cout << "Enter your guess ";


    cout << randNum%gap;

    //CONTUNİE....

    return 0;
}
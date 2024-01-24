#include <iostream>

using namespace std;


int main (){

    long long userInput , addition = 1;
    

    cout << "Enter a number that you want to take it's factorial : ";
    cin >> userInput;



    if (userInput == 0){

        cout << "It's factorial : " << 1;

    } else {

        for(int everyNum = 1 ; everyNum <= userInput ; everyNum++){

        addition *= everyNum;

        }

        cout << "It's factorial : " << addition;

    }



    return 0;
}
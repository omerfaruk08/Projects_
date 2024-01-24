#include <iostream> 

using namespace std;

int main () {

    int userInput;
    bool isPrime;

    cout << "Enter a number. Program detect whether prime num or not : ";
    cin >> userInput;
    

    if (userInput < 0){

        userInput = -(userInput);
        cout << endl << "Your number transferred into positive version since negative numbers can't be prime numbers. " << endl 
             << "(" << userInput << ")" << endl;

    } else if(userInput == 0){

        cout << "Your number has letter or 0 please change it.";
        return 0;

    } else if (userInput == 2){

        isPrime = true;

    }



    for(int i = 2 ; i < userInput; i++){

        if(userInput % i == 0){

            isPrime = false;
            break;

        }else{

            isPrime = true;

        }

    }



    if (isPrime == false){

        cout << endl <<"Your number is not prime number.";
        return 0;

    }
    else if (isPrime == true){

        cout << endl << "Your number is prime number.";
        return 0;

    }
    else{
        cout << endl << "something went wrong.";
        return 0 ;
    }



    return 0;
}
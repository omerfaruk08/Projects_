//this is a basic calculator using c++
#include <iostream>
using namespace std;


int main(){
    double x;
    double y;
    char opt;

    cout << "select your type (+,-,/,*))" << endl << ">> ";
    cin >> opt;

    cout << "enter your first value: ";
    cin  >> x;

    cout << "enter your second value: ";
    cin  >> y;
    
    switch (opt)

    {
    case '+':
        cout << x + y;
        break;
    case '-':
        cout << x-y;
        break;

    case '/':
        if (y == 0){
            cout << endl << "undefined";
            break;
        }

        else{
        cout << x / y;
        break;
        }
    case '*':
    cout << x*y;
    break;
        
    default:
    cout << "no operator selected.";
        break;


    }



}

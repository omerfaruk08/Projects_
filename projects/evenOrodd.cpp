#include <iostream>
using namespace std;

int main () {

int entryOfUser  , evenORodd = 2;

cout << "Enter your num : ";
cin >> entryOfUser;

cout << endl;

if(entryOfUser % evenORodd == 0){

    cout << "Your number is " << entryOfUser << " and it's even. "; 

}

else{

    cout << "Your number is " << entryOfUser << " and it's odd.";

}

    return 0;
}
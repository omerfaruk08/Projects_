#include <iostream> 
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;


int main(){

    string wordInp , reversedInp;

    cout << "Enter a word or sentence: ";
    getline(cin,wordInp);



    //deleting whitespaces
    wordInp.erase(remove(wordInp.begin(),wordInp.end(),' '),wordInp.end());



    //Converting big char's to little.
    transform(wordInp.begin(), wordInp.end(), wordInp.begin() , [](unsigned char c) { return tolower(c); });
    


    //Reverse.
    reversedInp = wordInp;
    reverse(reversedInp.begin(), reversedInp.end());




    if(reversedInp == wordInp){

        cout << endl << "Your word is a palindrome word or sentence.";


    }else{

        cout << endl << "Your word isn't a palindrome word or sentence.";

    }

    cout << endl;



    return 0;
}
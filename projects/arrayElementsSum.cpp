#include <iostream>
using namespace std;

int main (){

 int Array[5]{1230,-2138,52,23,1400} , sumOfAll{} , numberOfElements = 0;


    for(int nums : Array){

        numberOfElements++;
        sumOfAll += nums ;

    }

    cout << "You have " << numberOfElements << " elements in your array and sum of all of em is : " << sumOfAll;
    
    return 0;
}
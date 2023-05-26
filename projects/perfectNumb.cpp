#include <iostream>
#include <vector>
using namespace std;

int main(){

    int userInp = 0, sumOfdivisors = 0;
    vector<int> storingDivisors; //Getting the divisors.
  
    do{

        cout << "Enter a positive number , program will detect whether the number is perfect or imperfect : ";
        cin >> userInp;
        cout << "\n";

    }while(userInp < 0 || userInp == 0);



    for(int x = 1; x < userInp ; x++){

        if(userInp % x == 0){
            
            sumOfdivisors += x;
            storingDivisors.push_back(x);

        }

    }


    if(sumOfdivisors == userInp){

        cout << "\nYour number is a perfect number. (" << userInp << ")\n";
        cout << "These are the divisors : ";

        for(int y = 0 ; y < storingDivisors.size(); y++){

            cout << storingDivisors[y]; 
            if (y != storingDivisors.size() - 1) {
            
            cout << " | ";
           
           }

        }
        cout << "\n" ;

    }else{

        cout << "\nYour number isn't a perfect number.\n";
        cout << "These are the divisors : ";
        for(int y = 0 ; y < storingDivisors.size(); y++){

            cout << storingDivisors[y];
            if (y != storingDivisors.size() - 1) {

            cout << " | ";

            }

        }
        cout << "\n" ;

    }

    return 0;
}
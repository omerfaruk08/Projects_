#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double userInpCelcius , fahrenheit;

    cout << "Please enter your celcius degree : ";
    cin >> userInpCelcius;

    fahrenheit = ((userInpCelcius*9)/5) + 32;

    cout << fixed << setprecision(2);
    cout << "Your input in Celsius: " << userInpCelcius << "°C\n";
    cout << "Equivalent temperature in Fahrenheit: " << fahrenheit << "°F\n";


    return 0;
}
#include <iostream>

using namespace std;

int main (){

    double bTriangle,hTriangle,triangleArea;
    

    cout << endl << "*-*-*-*-*-*-*" << endl;
    cout << "Enter height length of your triangle : ";
    cin >> hTriangle;
    cout << endl;

    cout << "Enter base length of your triangle : ";
    cin >> bTriangle;
    cout << endl;

    triangleArea = (bTriangle * hTriangle)/2 ;

    cout << "Your mesauraments are {height = " << hTriangle << ", base = " << bTriangle << "} " << endl
         << "Area of your triangle is == " << triangleArea  ;

    cout << endl << "*-*-*-*-*-*-*" << endl;

    return 0;
}
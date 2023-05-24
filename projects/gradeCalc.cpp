#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    float math = 0, biology = 0, physics = 0 , chemistry = 0 , geography = 0, total = 0 , amountOfsubject = 5;
    char grade;
    string row (25,'-');

    cout << ": Enter your student's grades :" << 
    endl << "Maths : ";

    cin >> math;
    
    cout << endl << "Biology : " ;
    cin >> biology;

    cout << endl << "Physics : " ;
    cin >> physics;

    cout << endl << "Chemistry : " ;
    cin >> chemistry;

    cout << endl << "Geography : " ;
    cin >> geography;

    total = (math + biology + physics + chemistry + geography)/amountOfsubject;


    if(total < 60)
    {
        grade = 'F';
    }
    else if (total <= 69)
    {
         grade = 'D';
    }
    else if (total <= 79)
    {
         grade = 'C';
    }
    else if (total <= 89)
    {
        grade = 'B';
    }
    else{
        grade = 'A';
    }
    

    cout << row << endl <<"Student grade is : " << fixed << setprecision(2) << total << " {" << grade << "}" << endl << row ;


    return 0;
}

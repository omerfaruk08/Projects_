#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct userInfo{

    string userName , password;

};


vector<userInfo> users;


void regUser(const string& username , const string& password ){

    auto find = find_if(users.begin() , users.end() , [&username](const userInfo& user){
        return user.userName == username;
    });

    if(users.end() == find){

        userInfo user;
        user.userName = username;
        user.password = password;
        users.push_back(user);
        
        cout << "\nRegistaration succesfull !\n";

    }else{
        cout << "\nThis username already exists please choose a different username.";
    }

}


bool loginUser(const string& username , const string& password){

    auto find = find_if(users.begin() , users.end() , [&username,&password](const userInfo& user){
        return user.userName == username && user.password == password;
    });

    if(find != users.end()){

        cout << "\nWelcome " << username << " !\n";
        return true;

    }else{

        cout << "\nYour informations are not correct .. please enter your username or password correctly .\n";
        return false;

    }


}

int main() {
    bool exit = false;
    while (!exit) {
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        cout << "\n";

        string username, password;
        switch (choice) {
            case 1:
                cout << "Enter username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;
                regUser(username, password);
                break;
            case 2:
                cout << "Enter username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;
                if (loginUser(username, password)) {
                    // Proceed with the logged-in user's session
                    // Add your code here
                }
                break;
            case 3:
                exit = true;
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

        cout << "\n";
    }

    return 0;
}
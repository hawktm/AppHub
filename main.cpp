#include "allApplications.cpp"
#include "allAccounts.cpp"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    cout << "Hello World \n";

    AllAccounts accounts;
    AllApplications applications;

    string Email;
    string Username;
    string Password;
    bool login_attempt;

    cout << "Login \n";
    cout << "Enter username: ";
    cin >> Username;

    cout << "Enter password: ";
    cin >> Password;

    login_attempt = accounts.login(Username, Password);
    if (login_attempt == true) {
        cout << "Successful login!";
    } else {
        cout << "Incorrect login credentials";
    }

    cout << "Registration \n";
    cout << "Enter email: ";
    cin >> Email;
    cout << "Enter username: ";
    cin >> Username;

    cout << "Enter password: ";
    cin >> Password;

    Account myAccount;
    myAccount = accounts.registration(Email, Username, Password);

    if (myAccount.getUsername().empty()) {
        cout << "Cannot create user";
    } else {
        cout << "New account successful!";
    }

    cout << "Registration \n";
    cout << "Enter email: ";
    cin >> Email;
    cout << "Enter username: ";
    cin >> Username;

    cout << "Enter password: ";
    cin >> Password;

    myAccount = accounts.registration(Email, Username, Password);

    if (myAccount.getUsername().empty()) {
        cout << "Cannot create user";
    } else {
        cout << "New account successful!";
    }

    cout << "\n Login \n";
    cout << "Enter username: ";
    cin >> Username;

    cout << "Enter password: ";
    cin >> Password;

    login_attempt = accounts.login(Username, Password);
    if (login_attempt == true) {
        cout << "Successful login!";
    } else {
        cout << "Incorrect login credentials";
    }

    return 0;
}


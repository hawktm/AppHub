#include "user.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

User::User(string new_email, string new_username, string new_password) {
    email = new_email;
    username = new_username;
    password = new_password;
}

void User::print() {
    cout << "Email: " << email << "\tUsername: " << username;
}

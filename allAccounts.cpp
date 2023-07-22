#include "allAccounts.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool AllAccounts::registration(string new_email, string new_username, string new_password) {
    bool email_taken = false;
    bool user_taken = false;
    
    // Check if email is already used
    for (int i = 0; i < emails.size(); i++) {
        if (emails.at(i) == new_email) {
            email_taken = true;
            break;
        }
    }
    if (email_taken == true) {
        return false;
    }

    // Check if username is already used
    for (int i = 0; i < usernames.size(); i++) {
        if (usernames.at(i) == new_username) {
            user_taken = true;
            break;
        }
    }
    if (user_taken == true) {
        return false;
    }

    // Create account
    emails.push_back(new_email);
    usernames.push_back(new_username);
    passwords.push_back(new_password);
}

bool AllAccounts::login(string check_username, string check_password) {

    // Check vectors of login information to verify inputs
    for (int i = 0; i < usernames.size(); i++) {
        // Check if found username
        if (check_username == usernames.at(i)) {
            // Check if correct password
            if (check_password == passwords.at(i)) {
                return true;
            } else {
                return false;
            }
        }
    }

    // Return false if username not found
    return false;
}

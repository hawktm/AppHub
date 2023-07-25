#include "allAccounts.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool AllAccounts::checkAccounts(string new_email, string new_username) {
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

    // Return true if information is available
    return true;

}

Account AllAccounts::registration(string new_email, string new_username, string new_password) {
    bool account_available = checkAccounts(new_email, new_username);
    Account new_account;

    if (account_available == true) {
        // Create new account and return it
        new_account.setEmail(new_email);
        new_account.setUsername(new_username);
        new_account.setPassword(new_password);

        emails.push_back(new_email);
        usernames.push_back(new_username);
        passwords.push_back(new_password);
    }
    return new_account;

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

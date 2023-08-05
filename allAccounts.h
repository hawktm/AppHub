#ifndef ALLACCOUNTS_H
#define ALLACCOUNTS_H
#include "user.cpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class AllAccounts {
    private:
        vector<string> emails;
        vector<string> usernames;
        vector<string> passwords;

    public:
        // Function to check if account information taken
        // Returns true if available, returns false if not
        bool accountAvailable(string new_email, string new_username);

        // Function to create a new account
        // Calls checkAccounts to check credentials against those already used
        // Returns filled in account if successfull, returns empty account if not
        User registration(string new_email, string new_username, string new_password);


        // Function to check login credentials
        // Returns true if successul, returns false if not
        bool login(string check_username, string check_password);
};

#endif
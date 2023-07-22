#ifndef ALLACCOUNTS_H
#define ALLACCOUNTS_H
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
        // Function to add account if not already taken
        // Returns true if successul, returns false if not
        bool registration(string new_email, string new_username, string new_password);

        // Function to check login credentials
        // Returns true if successul, returns false if not
        bool login(string check_username, string check_password);
};

#endif
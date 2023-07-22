#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Account {
    private:
        string email;
        string username;
        string password;

    public:
        Account(string new_email, string new_username, string new_password);
};

#endif
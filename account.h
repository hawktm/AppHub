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
        Account() {};
        Account(string new_email, string new_username, string new_password);

        void setEmail(string new_email) {email = new_email;}
        void setUsername(string new_username) {username = new_username;}
        void setPassword(string new_password) {password = new_password;}

        string getEmail() {return email;}
        string getUsername() {return username;}
        string getPassword() {return password;}
};

#endif
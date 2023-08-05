#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User {
    private:
        string email;
        string username;
        string password;

    public:
        User() {};
        User(string new_email, string new_username, string new_password);

        void setEmail(string new_email) {email = new_email;}
        void setUsername(string new_username) {username = new_username;}
        void setPassword(string new_password) {password = new_password;}

        string getEmail() {return email;}
        string getUsername() {return username;}
        string getPassword() {return password;}
        
        void print();
};

#endif
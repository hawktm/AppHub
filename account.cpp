#include "account.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Account::Account(string new_email, string new_username, string new_password) {
    email = new_email;
    username = new_username;
    password = new_password;
}
#ifndef REQUEST_H
#define REQUEST_H
#include "Application.cpp"
#include "Account.cpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Request {
    private:
        Account user_requested;
        Application app_requested;
        bool status = NULL;

    public:
        Request() {};
        Request(Account user, Application app);
};

#endif
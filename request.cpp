#include "request.h"
#include <iostream>
#include <string>
#include <vector>

Request::Request(Account user, Application app) {
    user_requested = user;
    app_requested = app;
    status = NULL;
}


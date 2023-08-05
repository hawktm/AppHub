#ifndef ALLAPPLICATIONS_H
#define ALLAPPLICATIONS_H
#include "application.cpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class AllApplications {
    private:
        vector<Application> all_apps;
        vector<Application> all_requests;

    public:
        // Function to add application
        void addApp(Application new_app) {all_apps.push_back(new_app);}

        // Function to print all application names
        void printAll();

        // Function to print application information given the app number
        void printApp(int index);

        // Function to search all applications by string search
        vector<Application> stringSearch(string search);
        
        // Function to add app request
        void addRequest(Application app_request);

        // Function to view requests
        void printRequests();

        // Function to view details of request given index number
        void printRequest(int index);

        // Function to approve or deny request with comments
        bool requestDecision(int index, bool decision, string comment);
};

#endif
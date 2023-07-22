#ifndef ALLAPPLICATIONS_H
#define ALLAPPLICATIONS_H
#include "application.cpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class AllApplications {
    private:
        vector<string> all_names;
        vector<string> all_descriptions;
        vector<string> all_organizations;
        vector<vector<string>> all_platforms;
        vector<vector<string>> all_versions;
        vector<vector<string>> all_links;
        vector<double> all_prices;

    public:
        // Function to add application
        Application addApp(string app_name, string app_description, string app_organization, vector<string> app_platforms, vector<string> app_versions, vector<string> app_links, double app_price);
};

#endif
#include "allApplications.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Application AllApplications::addApp(string app_name, string app_description, string app_organization, vector<string> app_platforms, vector<string> app_versions, vector<string> app_links, double app_price) {
//     Application new_app(app_name, app_description, app_organization, app_platforms, app_versions, app_links, app_price);
//     all_names.push_back(app_name);
//     all_descriptions.push_back(app_description);
//     all_organizations.push_back(app_organization);
//     all_platforms.push_back(app_platforms);
//     all_versions.push_back(app_versions);
//     all_links.push_back(app_links);
//     all_prices.push_back(app_price);
//     return new_app;
// }

// void AllApplications::printApps() {
//     for (int i = 0; i < all_names.size(); i++) {
//         cout << all_names.at(i);
//         cout << "\n";
//     }
// }

void AllApplications::printApps() {
    for (int i = 0; i < all_apps.size(); i++) {
        cout << "App #" << (i + 1) << "\n";
        cout << "Name: " << all_apps.at(i).getName() << "\n";
        cout << "Description: " << all_apps.at(i).getDescription() << "\n";
        cout << "Organization: " << all_apps.at(i).getOrganization() << "\n";
        cout << "Plaforms: \n";
        for (int j = 0; j < all_apps.at(i).getPlatforms().size(); j++) {
            cout << "\t" << all_apps.at(i).getPlatforms().at(j) << "\t";
            cout << all_apps.at(i).getVersions().at(j) << "\t";
            cout << all_apps.at(i).getLinks().at(j) << "\n";
        }
        cout << "Price: " << all_apps.at(i).getPrice() << "\n";
    }
}
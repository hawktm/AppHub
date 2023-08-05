#include "allApplications.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void AllApplications::printAll() {
    for (int i = 0; i < all_apps.size(); i++) {
        cout << (i+1) << ". " << all_apps.at(i).getName();
        cout << "\n";
    }
}

void AllApplications::printApp(int index) {
    all_apps.at(index-1).print();
    cout << "\n";
}


vector<Application> AllApplications::stringSearch(string search) {
    vector <Application> results;

    // Loop through all apps
    for (int i = 0; i < all_apps.size(); i++) {
        // If string is in the name of application, add to results list
        if (all_apps.at(i).getName().find(search) != string::npos) {
            results.push_back(all_apps.at(i));
            break;
        }

        // If string is in the description of application, add to results list
        if (all_apps.at(i).getDescription().find(search) != string::npos) {
            results.push_back(all_apps.at(i));
            break;
        }

        // If string is in the organization of application, add to results list
        if (all_apps.at(i).getOrganization().find(search) != string::npos) {
            results.push_back(all_apps.at(i));
            break;
        }

        return results;
    }
}

void AllApplications::addRequest(Application app_request) {
    all_requests.push_back(app_request);
}

void AllApplications::printRequests() {
    for (int i = 0; i < all_requests.size(); i++) {
        cout << (i+1) << ". " << all_requests.at(i).getName();
        cout << "\n";
    } 
}

void AllApplications::printRequest(int index) {
    all_requests.at(index-1).print();
    cout << "\n";
}

bool AllApplications::requestDecision(int index, bool decision, string comment) {
    if (decision == true) {
        all_apps.push_back(all_requests.at(index-1));
        all_requests.erase(all_requests.begin() + index - 1);
    }
    cout << comment << "\n";
    return decision;
}

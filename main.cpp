#include "allApplications.cpp"
#include "allAccounts.cpp"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    cout << "Hello World \n";

    AllAccounts accounts;
    AllApplications applications;

    // string Email;
    // string Username;
    // string Password;
    // bool login_attempt;

    // cout << "Login \n";
    // cout << "Enter username: ";
    // cin >> Username;

    // cout << "Enter password: ";
    // cin >> Password;

    // login_attempt = accounts.login(Username, Password);
    // if (login_attempt == true) {
    //     cout << "Successful login!";
    // } else {
    //     cout << "Incorrect login credentials";
    // }

    // cout << "Registration \n";
    // cout << "Enter email: ";
    // cin >> Email;
    // cout << "Enter username: ";
    // cin >> Username;

    // cout << "Enter password: ";
    // cin >> Password;

    // Account myAccount;
    // myAccount = accounts.registration(Email, Username, Password);

    // if (myAccount.getUsername().empty()) {
    //     cout << "Cannot create user";
    // } else {
    //     cout << "New account successful!";
    // }

    // cout << "Registration \n";
    // cout << "Enter email: ";
    // cin >> Email;
    // cout << "Enter username: ";
    // cin >> Username;

    // cout << "Enter password: ";
    // cin >> Password;

    // myAccount = accounts.registration(Email, Username, Password);

    // if (myAccount.getUsername().empty()) {
    //     cout << "Cannot create user";
    // } else {
    //     cout << "New account successful!";
    // }

    // cout << "\n Login \n";
    // cout << "Enter username: ";
    // cin >> Username;

    // cout << "Enter password: ";
    // cin >> Password;

    // login_attempt = accounts.login(Username, Password);
    // if (login_attempt == true) {
    //     cout << "Successful login!";
    // } else {
    //     cout << "Incorrect login credentials";
    // }

    string app_name;
    string app_description;
    string app_organization;
    string Platform;
    string Version;
    string Link;
    vector<string> app_platforms;
    vector<string> app_versions;
    vector<string> app_links;
    double app_price;

    cout << "New App \n";
    cout << "Enter app name: ";
    getline(cin, app_name);
    cout << "Enter app description: ";
    getline(cin, app_description);
    cout << "Enter app organization: ";
    getline(cin, app_organization);
    while (Platform != "0") {
        cout << "Enter platform: (enter 0 to exit)";
        getline(cin, Platform);
        if (Platform == "0") {
            break;
        }

        cout << "Enter version: ";
        getline(cin, Version);
        cout << "Enter link: ";
        getline(cin, Link);
        app_platforms.push_back(Platform);
        app_versions.push_back(Version);
        app_links.push_back(Link);
    }

    cout << "Enter app price: ";
    cin >> app_price;

    Application new_app(app_name, app_description, app_organization, app_platforms, app_versions, app_links, app_price);

    applications.addApp(new_app);
    
    // vector<string> plats = new_app.getPlatforms();
    // for (int i = 0; i < plats.size(); i++) {
    //     cout << plats.at(i) + "\n";
    // }

    applications.printApps();

    return 0;
}


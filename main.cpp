#include "allApplications.cpp"
#include "allAccounts.cpp"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    AllAccounts accounts;
    AllApplications applications;

    int action;
    int choice = 1;
    string Email;
    string Username;
    string Password;
    bool login_attempt;
    Account myAccount;
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
    Application new_app;

    while (choice != 0) {

        cout << "Welcome to AppHub! \n";
        cout << "1. Login \n2. Register \n3. Add App \n4. View Apps \n5. Exit \n";
        cout << "Please enter number of what you would like to do: ";
        cin >> action;

        switch(action) {
            case 1: 
                cout << "Login \n";
                cout << "Enter username: ";
                cin >> Username;

                cout << "Enter password: ";
                cin >> Password;

                login_attempt = accounts.login(Username, Password);
                if (login_attempt == true) {
                    cout << "Successful login! \n";
                } else {
                    cout << "Incorrect login credentials \n";
                }
                break;
            case 2:
                cout << "Registration \n";
                cout << "Enter email: ";
                cin >> Email;
                cout << "Enter username: ";
                cin >> Username;

                cout << "Enter password: ";
                cin >> Password;

                myAccount = accounts.registration(Email, Username, Password);

                if (myAccount.getUsername().empty()) {
                    cout << "Cannot create user \n";
                } else {
                    cout << "New account successful! \n";
                }
                break;
            case 3:
                app_platforms.clear();
                app_versions.clear();
                app_links.clear();
                Platform = "1";

                cout << "New App \n";
                cout << "Enter app name: ";
                cin.ignore();
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

                new_app.setName(app_name);
                new_app.setDescription(app_description);
                new_app.setOrganization(app_organization);
                new_app.clearPlatforms();
                for (int i = 0; i < app_platforms.size(); i++) {
                    new_app.addPlatform(app_platforms.at(i), app_versions.at(i), app_links.at(i));
                }
                new_app.setPrice(app_price);

                applications.addApp(new_app);
                applications.printApps();
                break;
            case 4:
                applications.printApps();
                break;
            case 5:
                cout << "Goodbye \n";
                choice = 0;
                break;
            default:
                cout << "The number you entered does not correspond to one of the choices \n";
        }

    }

    return 0;
}
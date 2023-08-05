#include "allApplications.cpp"
#include "allAccounts.cpp"
// #include "request.cpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    AllAccounts accounts;
    AllApplications applications;

    // Create applicaitons to add 
    vector<string> plat{"1","2"};
    vector<string> ver{"1","2"};
    vector<string> li{"1","2"};

    vector<string> plat2{"2","3"};
    vector<string> ver2{"2.5","3.5"};
    vector<string> li2{"2","3"};

    applications.addApp(Application("Tremendous Application", "This app...", "Org1", plat, ver, li, 20.50));
    applications.addApp(Application("Great Application", "This other app...", "Org2", plat, ver, li, 15.50));

    // Initialize necessary variables
    int action;
    int choice = 1;
    string Email;
    string Username;
    string Password;
    bool login_attempt = false;
    User myAccount;
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
    int app_select;
    int print_apps;
    string password;
    string admin_password = "admin";
    int decide;
    string comments;
    string search_string;
    vector <Application> results;

    // Continue to loop until user chooses to exit application
    while (choice != 0) {

        // Check if user is logged in
        if (login_attempt == false) {
            // Options to choose from if not logged in
            cout << "\nWelcome to AppHub! \n";
            cout << "\t1. Login \n\t2. Register \n\t3. View Apps \n\t4. Exit \n";
            cout << "Please enter number of action you would like to do: ";
            cin >> action;

            switch(action) {
                case 1: 
                    // Login attempt
                    cout << "\nLogin \n";
                    cout << "Enter username: ";
                    cin >> Username;

                    cout << "Enter password: ";
                    cin >> Password;

                    login_attempt = accounts.login(Username, Password);
                    if (login_attempt == true) {
                        cout << "\nSuccessful login! \n";
                    } else {
                        cout << "\nIncorrect login credentials \n";
                    }
                    break;
                case 2:
                    // Register for an account
                    cout << "\nRegistration \n";
                    cout << "Enter email: ";
                    cin >> Email;
                    cout << "Enter username: ";
                    cin >> Username;
                    cout << "Enter password: ";
                    cin >> Password;

                    myAccount = accounts.registration(Email, Username, Password);

                    if (myAccount.getUsername().empty()) {
                        cout << "\nCannot create user \n";
                    } else {
                        cout << "\nNew account successful! \n";
                    }
                    break;
                case 3:
                    // View applications
                    app_select = 1;
                    while (app_select != 0) {
                        applications.printAll();
                        cout << "\nType number of application you would like to view more information about, type -1 to search, or type 0 to exit to main menu)";
                        cin >> app_select;
                        if (app_select == 0) {
                            break;
                        }

                        if (app_select == -1) {
                            cout << "\nPlease type search string: ";
                            cin >> search_string;
                            results = applications.stringSearch(search_string);
                            for (int i = 0; i < results.size(); i++) {
                                cout << (i+1) << ". ";
                                results.at(i).print();
                                cout << "\n";
                            }
                        } else {
                            applications.printApp(app_select);
                        }
                    }
                    break;
                case 4:
                    // Exit application
                    cout << "\nGoodbye! \n";
                    choice = 0;
                    break;
                default:
                    cout << "The number you entered does not correspond to one of the choices \n";
            }
        } else {
            // Options to choose from if logged in
            cout << "\nWelcome to AppHub, " << Username << "! \n";
            cout << "1. View Apps \n2. Request New App \n3. Pending Requests (Admin necessary)\n4. Exit \n";
            cout << "Please enter number of action you would like to do: ";
            cin >> action;

            switch(action) {
                case 1: 
                    // View applications
                    app_select = 1;
                    while (app_select != 0) {
                        applications.printAll();
                        cout << "\nType number of application you would like to view more information about, type -1 to search, or type 0 to exit to main menu)";
                        cin >> app_select;
                        if (app_select == 0) {
                            break;
                        }

                        if (app_select == -1) {
                            cout << "\nPlease type search string: ";
                            cin >> search_string;
                            results = applications.stringSearch(search_string);
                            for (int i = 0; i < results.size(); i++) {
                                cout << (i+1) << ". ";
                                results.at(i).print();
                                cout << "\n";
                            }
                        } else {
                            applications.printApp(app_select);
                        }
                    }
                    break;
                case 2:
                    // Request a new application to be added
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

                    applications.addRequest(new_app);
                    cout << "Application request: \n";
                    new_app.print();
                    break;
                case 3:
                    // Pending requests
                    cout << "Enter admin password: ";
                    cin >> password;
                    if (password != admin_password) {
                        cout << "Incorrect password. You must be an admin to access this function.\n";
                    } else {
                        app_select = 1;
                        while (app_select != 0) {
                            applications.printRequests();
                            cout << "\nType number of request you would like to view more information about: (type 0 to exit to main menu) ";
                            cin >> app_select;
                            if (app_select == 0) {
                                break;
                            }

                            applications.printRequest(app_select);
                            cout << "Would you like to make a decision? (1 for yes, 0 for no) ";
                            cin >> decide;
                            if (decide == 1) {
                                cout << "Would you like to approve this app? (1 for yes, 0 for no) ";
                                cin >> decide;
                                cout << "Please add comments: ";
                                cin.ignore();
                                getline(cin, comments);

                                if (decide == 1) {
                                    applications.requestDecision(app_select, true, comments);
                                    cout << "\nApp approved! \n";
                                } else {
                                    applications.requestDecision(app_select, false, comments);
                                    cout << "App denied \n";
                                }
                            }
                        }
                    }
                    break;
                case 4:
                    // Exit application
                    cout << "\nGoodbye! \n";
                    choice = 0;
                    break;
                default:
                    cout << "The number you entered does not correspond to one of the choices \n";
            }
        }



    }

    return 0;
}
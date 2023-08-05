#ifndef APPLICATION_H
#define APPLICATION_h
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Application {
    private:
        string name;
        string description;
        string organization;
        vector<string> platforms;
        vector<string> versions;
        vector<string> links;
        double price;

    public:
        //Default constructor
        Application();

        // Constructor with all information given
        Application(string app_name, string app_description, string app_organization, vector<string> app_platforms, vector<string> app_versions, vector<string> app_links, double app_price);

        // Set functions to set values of attributes
        void setName(string app_name) {name = app_name;}
        void setDescription(string app_description) {description = app_description;}
        void setOrganization(string app_organization) {organization = app_organization;}
        void setPrice(double app_price) {price = app_price;}
        void addPlatform(string new_platform, string new_version, string new_link);
        
        // Get functions to get values of attributes
        string getName() {return name;}
        string getDescription() {return description;}
        string getOrganization() {return organization;}
        double getPrice() {return price;}
        vector<string> getPlatforms() {return platforms;}
        vector<string> getVersions() {return versions;}
        vector<string> getLinks() {return links;}

        // Function to clear platforms
        void clearPlatforms();

        // Prints application information
        void print();

};



#endif
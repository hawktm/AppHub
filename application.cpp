#include "application.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Application::Application() {

}

Application::Application(string app_name, string app_description, string app_organization, vector<string> app_platforms, vector<string> app_versions, vector<string> app_links, double app_price) {
    name = app_name;
    description = app_description;
    organization = app_organization;
    platforms = app_platforms;
    versions = app_versions;
    links = app_links;
    price = app_price;
}

void Application::addPlatform(string new_platform, string new_version, string new_link) {
    platforms.push_back(new_platform);
    versions.push_back(new_version);
    links.push_back(new_link);
}

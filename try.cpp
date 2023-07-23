#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> myvector;

    myvector.push_back("first");
    myvector.push_back("second");
    myvector.push_back("third");

    myvector.clear();

    cout << "Size of vector: " << myvector.size() << "\n";

    myvector.push_back("fourth");

    cout << "Size of vector: " << myvector.size() << "\n";
}



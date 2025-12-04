#include <iostream>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;

int main() {
    // Load the JSON file
    ifstream file("data.json");
    json db;
    file >> db;

    // Ask user for key
    string key;
    cout << "Enter English phrase: ";
    getline(cin, key);

    // Check and print value
    if (db.contains(key)) {
        cout << "Japanese: " << db[key] << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}

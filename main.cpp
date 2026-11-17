#include <iostream>
#include <fstream>
#include <string>
#include "filter.h"

using namespace std;

int main() {
    string filePath;
cout << "Log file path: ";
cin >> filePath;

ifstream inputFile(filePath);

    if (!inputFile.is_open()) {
        cerr << "Could not open " << filePath << "\n";
        return 1;
    }

    string line;
    int totalLines = 0;
    int infoCount = 0;
    int warningCount = 0;
    int errorCount = 0;
    string keyword;
    string level;
cout << "Level filter (INFO/WARNING/ERROR/*): ";
cin >> level;
cout << "Keyword to search (use * for all): ";
cin >> keyword;

int matchedLines = 0;

    while (getline(inputFile, line)) {
        totalLines++;

        if (line.find("[INFO]") != string::npos) {
            infoCount++;
        }

        if (line.find("[WARNING]") != string::npos) {
            warningCount++;
        }

        if (line.find("[ERROR]") != string::npos) {
            errorCount++;
        }
       if (matchesFilters(line, level, keyword)) {
    cout << line << "\n";
    matchedLines++;
}
    }
    cout << "Matching lines: " << matchedLines << "\n";
    cout << "Total lines: " << totalLines << "\n";
    cout << "INFO: " << infoCount << "\n";
    cout << "WARNING: " << warningCount << "\n";
    cout << "ERROR: " << errorCount << "\n";

    inputFile.close();
    return 0;
}
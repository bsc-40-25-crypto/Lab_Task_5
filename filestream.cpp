#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

// Requirement (v): Function to reverse the string
string Reverse(string str) {
    string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}

int main() {
    // Requirement (i) & (ii): Read file contents into fileData
    ifstream file("module.txt");
    string fileData;

    if (file.is_open()) {
        getline(file, fileData);
        file.close();
    } else {
        cout << "Error: Unable to open file!" << endl;
        return 1;
    }

    cout << "Original Text: " << fileData << endl << endl;

    // Requirement (iii): Calculate and output number of vowels
    int vowelCount = 0;
    for (int i = 0; i < fileData.length(); i++) {
        char ch = tolower(fileData[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;

    // Requirement (iv): Calculate and output number of words
    int wordCount = 0;
    bool inWord = false;
    for (int i = 0; i < fileData.length(); i++) {
        if (fileData[i] != ' ') {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    cout << "Number of words: " << wordCount << endl;

    // Requirement (v): Output text in reverse using Reverse function
    string reversedData = Reverse(fileData);
    cout << "Reversed text: " << reversedData << endl;

    // Requirement (vi): Capitalize the second letter of each word
    string capitalizedData = fileData;
    int currentWordLength = 0;

    for (int i = 0; i <= capitalizedData.length(); i++) {
        if (i < capitalizedData.length() && capitalizedData[i] != ' ') {
            currentWordLength++;
            // Capitalize the second character of the current word
            if (currentWordLength == 2) {
                capitalizedData[i] = toupper(capitalizedData[i]);
            }
        } else {
            // Reset word length count when a space or end of string is reached
            currentWordLength = 0;
        }
    }
    cout << "Second letter capitalized: " << capitalizedData << endl;

    return 0;
}
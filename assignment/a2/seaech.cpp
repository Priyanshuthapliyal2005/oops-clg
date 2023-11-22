#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filePath = " D:/oops clg/assignment/a2/q1.cpp ";
    string searchWord = "main";

    ifstream file(filePath);
    if (!file) {
        cout << "Error opening file." << endl;
        return 1;
    }

    string word;
    int frequency = 0;

    while (file >> word) {
        if (word == searchWord) {
            frequency++;
        }
    }

    cout << "Frequency of word '" << searchWord << "' in the file: " << frequency << endl;

    file.close();

    return 0;
}

#include<iostream>
#include<string>
using namespace std;
string replaceConsecutiveDuplicates(const string& input) {
    if (input.empty())
        return "";

    string result = "";
    char current_char = input[0];

    for (size_t i = 1; i < input.size(); ++i) {
        if (input[i] != current_char) {
            result += current_char;
            current_char = input[i];
        }
    }

    result += current_char; // Add the last character
    return result;
}

int main() {
    string input;
    cout << "Enter a word: ";
    cin >> input;

    string result = replaceConsecutiveDuplicates(input);
    
    cout << "Output: " << result << endl;

    return 0;
}
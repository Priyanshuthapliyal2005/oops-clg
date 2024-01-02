#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int main()
{
    ifstream hin("a.txt");
    ofstream hout("b.txt");

    // Check if file opening is successful
    if (!hin.is_open() || !hout.is_open()) {
        cerr << "Error opening files." << endl;
        return 1; // Exit with an error code
    }

    string line;
    while (getline(hin, line)) {
        istringstream iss(line);
        string word;

        while (iss >> word) {
            // Check if the first letter is a vowel or a space
            if (word[0] == 'a' || word[0] == 'e' || word[0] == 'o' || word[0] == 'i' || word[0] == 'u' || word[0] == ' ') {
                hout << word << " ";
            }
        }

        // Add a newline at the end of each line
        hout << "\n";
    }

    hin.close();
    hout.close();

    return 0;
}

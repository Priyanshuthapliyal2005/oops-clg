#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1 = "Myworld";
    string s2 = "myrworld";

    int result = s1.compare(s2);

    if (result == 0) {
        cout << "Both strings are equal." << endl;
    } else if (result < 0) {
        cout << "s1 is less than s2." << endl;
    } else {
        cout << "s1 is greater than s2." << endl;
    }

    return 0;
}

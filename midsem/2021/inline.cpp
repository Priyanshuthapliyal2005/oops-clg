#include <iostream>
using namespace std;

inline string greatest(int a, int b) {
    if (a > b) {
        return "a > b";
    } else if (a == b) {
        return "a = b";
    } else {
        return "a < b";
    }
}

int main() {
    int a = 5;
    int b = 3;

    string result = greatest(a, b);
    cout << "Result: " << result << endl;

    return 0;
}

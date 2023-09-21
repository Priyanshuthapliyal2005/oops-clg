#include <iostream>
using namespace std;

class ss {
private:
    string s1;
    string s2;

public:
    ss(string s1, string s2) {
        this->s1 = s1;
        this->s2 = s2;
    }

    // Overload the + operator to concatenate two ss objects
    ss operator+(const ss& other) {
        ss result("", "");
        result.s1 = this->s1 + other.s1;
        result.s2 = this->s2 + other.s2;
        return result;
    }

    void show() {
        cout << s1 << s2 << endl;
    }
};

int main() {
    int x = 123;
    string b = "xyz";
    string a = to_string(x);
    ss d1(a, b);
    d1.show();

    ss d2("456", "abc");
    ss d3 = d1 + d2;  // Use the overloaded + operator to concatenate d1 and d2

    d3.show();

    return 0;
}

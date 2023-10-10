#include<iostream>
#include<string>
using namespace std;

class MyString {
private:
    string str;

public:
    MyString(const string& s) : str(s) {}

    MyString operator+(int num) {
        return MyString(str + to_string(num));
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Amit");

    MyString result = s1 + 123;

    result.display();

    return 0;
}

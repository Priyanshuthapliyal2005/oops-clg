#include <iostream>
using namespace std;

class student {
public:
    string name = "AMAN";
    int roll = 6;

    void setroll(int roll) {
        this->roll = roll;
    }

    void setname(string name) {
        this->name = name;
    }

    int getroll() {
        return this->roll;
    }

    string getname() {
        return this->name;
    }
};

int main() {
    student e1;
    e1.setname("John"); // Set the name to "John"
    e1.setroll(42);    // Set the roll to 42

    cout << "Name: " << e1.getname() << endl;
    cout << "Roll: " << e1.getroll() << endl;

    return 0;
}

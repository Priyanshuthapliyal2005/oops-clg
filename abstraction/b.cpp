/*
The this keyword is used to refer to the current instance of the class.
 It helps distinguish between class member variables and function parameters with the same name.
*/

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

    void getroll() {
        cout << "roll: " << this->roll << endl;
    }

    void getname() {
        cout << "name: " << this->name << endl;
    }
};

int main() {
    student e1;
    e1.getname(); // This will print the default name value "AMAN"
    e1.getroll(); // This will print the default roll value 6

    student e2;
    e2.getname(); // This will also print the default name value "AMAN"
    e2.getroll(); // This will also print the default roll value 6

    return 0;
}

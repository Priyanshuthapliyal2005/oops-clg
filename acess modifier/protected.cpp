#include<iostream>
using namespace std;

// Define a base class named x
class x {
protected:
    int a = 89; // Protected member variable 'a' with an initial value of 89
};

// Define a derived class named y that inherits from x
class y : x {
public:
    // Public member function 'show' to display the value of 'a' from the base class
    void show() {
        cout << a; // Accessing the protected member variable 'a' from the base class 'x'
    }
};

int main() {
    // Create an instance of the derived class 'y'
    y d1;

    // Call the 'show' method to display the value of 'a' from the base class
    d1.show();

    return 0;
}

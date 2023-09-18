#include<iostream>
using namespace std;

// Define a class named xyz
class xyz {
public:
    int x, y;

    // Default constructor
    xyz() {
        // Initialize x to 5 and y to 10
        x = 5;
        y = 10;
    }

    // Parameterized constructor
    xyz(int x, int y) {
        // Assign the values passed as arguments to x and y using the 'this' pointer
        this->x = x;
        this->y = y;
    }

    // Copy constructor
    xyz(const xyz &other) {
        // Copy the values of 'other' into this object
        this->x = other.x;
        this->y = other.y;
    }

    // Member function to display the values of x and y
    void show() {
        cout << x << "\t" << y << endl;
    }
};

int main() {
    // Create an instance of the xyz class using the default constructor
    xyz d1;
    
    // Display the values of x and y for d1
    d1.show();

    // Create an instance of the xyz class using the parameterized constructor with values 50 and 70
    xyz d2(50, 70);
    
    // Display the values of x and y for d2
    d2.show();

    // Create an instance of the xyz class and initialize it with the values of d2 (copy constructor)
    xyz d3 = d1;
    
    // Display the values of x and y for d3
    d3.show();

    return 0;
}

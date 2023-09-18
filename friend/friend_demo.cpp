#include<iostream>
using namespace std;

// Forward declaration of class B
class B;

// Define a class A
class A {
private:
    int x;

public:
    A() : x(0) {} // Constructor to initialize x

    void setX(int x1) {
        x = x1;
    }
    
    int getX() {
        return x;
    }

    // Friend function declaration: Allows the function sum to access private members of A and B
    friend void sum(A a, B b);
};

// Define a class B
class B {
private:
    int y;

public:
    B() : y(0) {} // Constructor to initialize y

    void setY(int y1) {
        y = y1;
    }

    int getY() {
        return y;
    }

    // Friend function declaration: Allows the function sum to access private members of A and B
    friend void sum(A a, B b);
};

// Friend function definition: Can access private members of both A and B
void sum(A a, B b) {
    cout << "Sum of x and y is: " << a.x + b.y << endl;
}

int main() {
    // Create instances of class A and B
    A objA;
    B objB;

    // Set values for x and y
    objA.setX(50);
    objB.setY(70);

    // Call the friend function sum to calculate and display the sum of x and y
    sum(objA, objB);

    return 0;
}

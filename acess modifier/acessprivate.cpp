#include<iostream>
using namespace std;

// Define a class named xyz
class xyz {
private:
    int x; // Private member variable to store an integer

public:
    // Public member function to set the value of x
    void setx(int x) {
        this->x = x; // 'this' pointer is used to distinguish between class's x and parameter x
    }

    // Public member function to get the value of x
    int getx() {
        return x;
    }
};

int main() {
    // Create an instance of the xyz class
    xyz d1;

    // Set the value of x to 10 using the setx method
    d1.setx(10);

    // Get the value of x using the getx method and print it
    cout << d1.getx();

    return 0;
}

#include <iostream>
using namespace std;

class ObjectCounter {
private:
    static int count;  // Static member variable to count objects

public:
    ObjectCounter() {
        count++;  // Increment count when an object is created
    }

    ~ObjectCounter() {
        count--;  // Decrement count when an object is destroyed
    }

    static int getCount() {
        return count;  // Static member function to get the count
    }
};

// Initialize the static member variable
int ObjectCounter::count = 0;

int main() {
    ObjectCounter obj1;
    ObjectCounter obj2;
    ObjectCounter obj3;

    // Get and display the count of objects
    cout << "Number of objects created: " << ObjectCounter::getCount() << endl;

    return 0;
}

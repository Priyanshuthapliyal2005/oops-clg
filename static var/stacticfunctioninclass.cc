#include<iostream>
using namespace std;

class Xyz {
public:
    static int x;      // Static member variable 'x' shared among all objects
    int y = 0;          // Non-static member variable 'y' specific to each object

    // Static member function 'show'
    static void show() {
        cout << x;      // Access the static member variable 'x'
    }
};

int Xyz::x = 15;       // Initialization of the static member variable 'x'

int main() {
    Xyz d;
    
    Xyz::show();        // Call the static member function 'show' using the class name
}

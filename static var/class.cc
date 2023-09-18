#include<iostream>
using namespace std;

class Xyz {
public:
    int x;             // Non-static member variable 'x' specific to each object
    static int y;      // Static member variable 'y' shared among all objects

};

int Xyz::y = 10;       // Initialization of the static member variable 'y'

int main() {
    Xyz d;
    d.x = 15;           // Set the non-static member variable 'x' for object 'd'
    Xyz::y = 20;        // Modify the static member variable 'y' using the class name

    cout << d.x << endl;    // Display 'x' for object 'd'
    cout << Xyz::y;        // Access and display the static member variable 'y'
}

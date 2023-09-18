#include<iostream>
using namespace std;

void disp() {
    int x = 0;          // Local variable 'x' initialized to 0 for each function call
    static int y = 0;   // Static local variable 'y' retains its value across function calls

    cout << "x= " << x << "  " << "y= " << y << "\n"; // Display values of 'x' and 'y'
    
    x++;  // Increment local variable 'x' (not retained between calls)
    y++;  // Increment static local variable 'y' (retained between calls)
}

int main() {
    for (int i = 0; i < 5; i++) {
        disp(); // Call 'disp()' function multiple times
    }
}

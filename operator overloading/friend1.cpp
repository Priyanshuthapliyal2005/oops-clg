#include<iostream>
using namespace std;

class xyz {
private:
    int x, y;

public:
    xyz(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void show() {
        cout << x << "\t" << y << endl;
    }

    friend void operator+(xyz& d1, xyz& d2); // Declaration inside the class
};

// Definition of the friend function outside the class
void operator+(xyz& d1, xyz& d2) {
    d1.x += 1; // Increment x by 1
    d1.y += 1; // Increment y by 1
}

int main() {
    xyz d1(10, 20);
    xyz d2(5, 10);

    cout << "Before addition:" << endl;
    d1.show();

    operator+(d1, d2); // Using the overloaded + operator as a friend function to increment by 1

    cout << "After addition:" << endl;
    d1.show();

    return 0;
}

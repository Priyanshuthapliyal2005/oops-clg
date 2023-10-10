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

    // Overloading the ++ operator as a member function
    void operator++() {
        x++;
        y++;
    }

    void show() {
        cout << x << "\t" << y << endl;
    }
};

int main() {
    xyz d1(10, 20);

    cout << "before:";
    d1.show();

    // Using the overloaded ++ operator
    d1.operator++(); // Alternatively, you can use ++d1;

    cout << "after:";
    d1.show();

    return 0;
}

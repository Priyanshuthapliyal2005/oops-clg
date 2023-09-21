#include <iostream>
using namespace std;

class xyz {
private:
    int real;
    int imaginary;

public:
    xyz(int real, int imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }

    // Overload the + operator to add two xyz objects
    xyz operator+(const xyz& other) {
        xyz result(0, 0);
        result.real = this->real + other.real;
        result.imaginary = this->imaginary + other.imaginary;
        return result;
    }

    void show() {
        cout << real << "+" << imaginary << "i" << endl;
    }
};

int main() {
    xyz d1(1, 2);
    d1.show();

    xyz d2(2, 4);
    d2.show();
    // Use the overloaded + operator to add d1 and d2, and store the result in d3
    xyz d3 = d1 + d2;

    d3.show();

    return 0;
}

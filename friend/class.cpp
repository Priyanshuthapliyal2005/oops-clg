#include<iostream>
using namespace std;
class A {
private:
    int x;
public:
    void setX(int x1) {
        x = x1;
    }
    int getX() {
        return x;
    }
    friend class B; // Class B is a friend to class A
};

class B {
public:
    void show(A a) {
        cout << "The value of x in class A is: " << a.x; // Accessing 'x' from class A
    }
};

int main() {
    A s1;
    s1.setX(50);
    B s2;
    s2.show(s1); // Calling a member function of class B to access 'x' from class A
}

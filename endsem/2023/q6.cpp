#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Mammal : public virtual Animal {
public:
    void eat() {
        cout << "Mammal eats" << endl;
    }
};

class Bird : public virtual Animal {
public:
    void fly() {
        cout << "Bird flies" << endl;
    }
};

// Diamond problem occurs when a class inherits from both Mammal and Bird
class Bat : public Mammal, public Bird {
public:
    // Compiler will complain about ambiguity without virtual inheritance
};

int main() {
    Bat bat;

    // The following line will result in a compilation error due to ambiguity
    bat.speak();
    bat.fly();
    bat.eat();

    return 0;
}

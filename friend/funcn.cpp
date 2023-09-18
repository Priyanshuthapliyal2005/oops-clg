#include<iostream>
using namespace std;
class Student {
private:
    int id;
public:
    void setId(int id1) {
        id = id1;
    }
    int getId() {
        return id;
    }
    friend void show(Student); // Friend function declaration within the class
};

void show(Student s) {
    cout << s.id; // Accessing the private member 'id' using a friend function
}

int main() {
    Student s1;
    s1.setId(50);
    show(s1); // Calling the friend function directly
}

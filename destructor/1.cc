#include<iostream>
using namespace std;

// Define a class named Student
class Student {
public:
    int roll;        // Member variable to store roll number
    string name;     // Member variable to store student name

    // Default Constructor
    Student() {
        roll = 5;        // Initialize roll to 5
        name = "Ravi";   // Initialize name to "Ravi"
    }

    // Parameterized Constructor
    Student(int r, string na) {
        roll = r;         // Initialize roll with the provided value
        name = na;        // Initialize name with the provided value
    }

    // Copy Constructor
    Student(Student &ss) {
        roll = ss.roll;   // Copy roll from another Student object
        name = ss.name;   // Copy name from another Student object
    }

    // Member function to display student information
    void show() {
        cout << roll << "   " << name << "\n"; // Display roll and name
    }

    // Destructor
    ~Student() {
        cout << "bye  " << roll << endl; // Display "bye" followed by roll number
    }
};

int main() {
    // Create an instance of the Student class using the default constructor
    Student s;
    cout << "Output for s: ";
    s.show(); // Display student information

    // Create an instance of the Student class using the parameterized constructor
    Student s1(10, "Sita");
    cout << "Output for s1: ";
    s1.show(); // Display student information

    // Create an instance of the Student class by copying s1
    Student s2(s1);
    cout << "Output for s2: ";
    s2.show(); // Display student information

    cout << "Output for s3: ";
    // Create an instance of the Student class by copying s (default constructor)
    Student s3 = s; // Copy constructor is called here
    s3.show(); // Display student information

    return 0;
}

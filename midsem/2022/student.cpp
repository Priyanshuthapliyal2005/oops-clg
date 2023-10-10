#include<iostream>
#include<vector>
using namespace std;

class Student {
private:
    string name;
    int roll;
    string add;
    string branch;
    string univ;

public:
    Student() : name(""), roll(0), add(""), branch(""), univ("") {}
    Student(string n, int u, string a, string b, string U)
        : name(n), roll(u), add(a), branch(b), univ(U) {}

    void setname(string n) {
        this->name = n;
    }

    void setroll(int u) {
        this->roll = u;
    }

    void setadd(string a) {
        this->add = a;
    }

    void setbranch(string b) {
        this->branch = b;
    }

    void setuniv(string U) {
        this->univ = U;
    }

    // Getter functions without const
    string getname() {
        return name;
    }

    int getroll() {
        return roll;
    }

    string getadd() {
        return add;
    }

    string getbranch() {
        return branch;
    }

    string getuniv() {
        return univ;
    }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Address: " << add << endl;
        cout << "Branch: " << branch << endl;
        cout << "University: " << univ << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    cin.ignore(); // Consume newline character after reading 'n'

    vector<Student> students;

    for (int i = 0; i < n; ++i) {
        string name, address, branch, university;
        int roll;

        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin, name);

        cout << "Roll No: ";
        cin >> roll;
        cin.ignore(); // Consume newline character after reading 'roll'

        cout << "Address: ";
        getline(cin, address);

        cout << "Branch: ";
        getline(cin, branch);

        cout << "University: ";
        getline(cin, university);

        students.push_back(Student(name, roll, address, branch, university));
    }

    cout << "\n\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
        cout << endl;
    }

    return 0;
}

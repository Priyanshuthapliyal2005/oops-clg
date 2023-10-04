#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    int salary;
    string company = "Microsoft";

public:
    Employee(int id, string name, int salary) : id(id), name(name), salary(salary) {
    }
    Employee() : id(0), name(""), salary(0) {}


    void setid(int id) {
        this->id = id;
    }

    void setname(string name) {
        this->name = name;
    }

    void setsalary(int salary) {
        this->salary = salary;
    }

    int getid() {
        return id;
    }

    string getname() {
        return name;
    }

    int getsalary() {
        return salary;
    }
    string getcompany(){
        return company;
    }
};

int main() {
    int n;
    cout << "Enter Number Of Employees :";
    cin >> n;

    Employee *e = new Employee[n];

    for (int i = 0; i < n; i++) {
        int p;
        cout << "Enter id of " << i + 1 << ": ";
        cin >> p;
        e[i].setid(p);

        string y;
        cout << "Enter name of " << i + 1 << ": ";
        cin >> y;
        e[i].setname(y);

        int s;
        cout << "Enter salary of " << i + 1 << ": ";
        cin >> s;
        e[i].setsalary(s);
    }

    for (int i = 0; i < n; i++) {
        cout << "Employee " << i + 1 << " - ID: "
         << e[i].getid() << ", Name: " << e[i].getname() << ", Salary: "
          << e[i].getsalary() <<",Company: "<<e[i].getcompany()<< endl;
    }

    delete[] e;

    return 0;
}

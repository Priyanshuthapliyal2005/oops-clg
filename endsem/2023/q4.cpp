#include<iostream>
#include<vector>
using namespace std;

class Person{
private:
    int mob;
    string add;
public:
    Person(int mob=0, string add="Not known"){
        this->mob = mob;
        this->add = add;
    }

    void acceptDetails() {
        cout << "Enter mobile number: ";
        cin >> mob;
        cout << "Enter address: ";
        cin.ignore();
        getline(cin, add);
    }

    void displayDetails() const {
        cout << "Mobile: " << mob << "\nAddress: " << add << endl;
    }
};

class Employee : public Person{
private:
    int eno;
    string ename;
public:
    Employee(int eno=0, string ename="unknown", int mob=0, string add="Not known")
        : Person(mob, add) {
        this->eno = eno;
        this->ename = ename;
    }

    void acceptDetails() {
        Person::acceptDetails();
        cout << "Enter employee number: ";
        cin >> eno;
        cout << "Enter employee name: ";
        cin.ignore();
        getline(cin, ename);
    }

    void displayDetails() const {
        Person::displayDetails();
        cout << "Employee Number: " << eno << "\nEmployee Name: " << ename << endl;
    }
};

class Manager : public Employee {
private:
    string designation;
    string department_name;
    int basic_salary;
public:
    Manager(string designation="Not Known", string department_name="Not Known", int basic_salary=0,
            int eno=0, string ename="unknown", int mob=0, string add="Not known")
        : Employee(eno, ename, mob, add) {
        this->designation = designation;
        this->basic_salary = basic_salary;
        this->department_name = department_name;
    }

    void acceptDetails() {
        Employee::acceptDetails();
        cout << "Enter designation: ";
        cin.ignore();
        getline(cin, designation);
        cout << "Enter department name: ";
        getline(cin, department_name);
        cout << "Enter basic salary: ";
        cin >> basic_salary;
    }

    int getBasicSalary() const {
        return basic_salary;
    }
    
    void displayDetails() const {
        Employee::displayDetails();
        cout << "Designation: " << designation << "\nDepartment Name: " << department_name
             << "\nBasic Salary: " << basic_salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of managers: ";
    cin >> n;

    vector<Manager> managers;

    for (int i = 0; i < n; ++i) {
        Manager manager;
        cout << "\nEnter details for manager " << i + 1 << ":\n";
        manager.acceptDetails();
        managers.push_back(manager);
    }

    // Display manager with the highest salary
    int maxSalaryIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (managers[i].getBasicSalary() > managers[maxSalaryIndex].getBasicSalary()) {
            maxSalaryIndex = i;
        }
    }

    cout << "\nManager with the highest salary:\n";
    managers[maxSalaryIndex].displayDetails();

    return 0;
}

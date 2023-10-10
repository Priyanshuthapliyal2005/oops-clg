#include<iostream>
using namespace std;

class Employee {
private:
    string pan;
    string name;
    double taxableIncome;
    double tax;

public:
    // Function to input employee details
    void inputInfo() {
        cout << "Enter PAN number: ";
        cin >> pan;
        cout << "Enter name: ";
        cin.ignore(); // Ignore newline character in buffer
        getline(cin, name);
        cout << "Enter annual taxable income: ";
        cin >> taxableIncome;
    }

    // Function to calculate tax based on taxable income
    void taxCalc() {
        if (taxableIncome <= 250000) {
            tax = 0;
        } else if (taxableIncome <= 500000) {
            tax = 0.1 * (taxableIncome - 250000);
        } else if (taxableIncome <= 1000000) {
            tax = 25000 + 0.2 * (taxableIncome - 500000);
        } else {
            tax = 125000 + 0.3 * (taxableIncome - 1000000);
        }
    }

    // Function to display employee details and tax
    void displayInfo() {
        cout << "\nEmployee Details:\n";
        cout << "PAN Number: " << pan << endl;
        cout << "Name: " << name << endl;
        cout << "Annual Taxable Income: " << taxableIncome << endl;
        cout << "Tax: " << tax << endl;
    }
};

int main() {
    Employee employee;

    // Input employee details
    employee.inputInfo();

    // Calculate tax
    employee.taxCalc();

    // Display employee details and tax
    employee.displayInfo();

    return 0;
}

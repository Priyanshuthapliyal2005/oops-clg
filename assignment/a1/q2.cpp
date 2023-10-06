#include <iostream>
using namespace std;
class ElectricityBill {
private:
    int consumedUnits;
    string customerName;

public:
    ElectricityBill() : consumedUnits(0), customerName("") {}

    ElectricityBill(int units, string name) : consumedUnits(units), customerName(name) {}

    void setConsumedUnits(int units) {
        this->consumedUnits = units;
    }

    void setCustomerName(string name) {
        this->customerName = name;
    }

    int getConsumedUnits() {
        return consumedUnits;
    }

    string getCustomerName() {
        return customerName;
    }

    int calculateTotalBill() {
        double totalBill = 0.0;

        if (consumedUnits <= 100) {
            totalBill = 50 + consumedUnits * 0.6;
        } else if (consumedUnits <= 300) {
            totalBill = 50 + 100 * 0.6 + (consumedUnits - 100) * 0.8;
        } else {
            totalBill = 50 + 100 * 0.6 + 200 * 0.8 + (consumedUnits - 300) * 0.9;
        }

        if (totalBill > 300) {
            return static_cast<int>(totalBill + 0.15 * totalBill);
        } else {
            return static_cast<int>(totalBill);
        }
    }
};

int main() {
    int numberOfCustomers;
    cout << "Enter the number of customers: ";
    cin >> numberOfCustomers;
    cin.ignore();
    ElectricityBill *bills = new ElectricityBill[numberOfCustomers];

    for (int i = 0; i < numberOfCustomers; i++) {
        int units;
        string name;

        cout << "Enter the name of customer " << i + 1 << ": ";
        getline(cin, name);
        bills[i].setCustomerName(name);

        cout << "Enter consumed units for customer " << i + 1 << ": ";
        cin >> units;
        cin.ignore();  
        bills[i].setConsumedUnits(units);
    }

    cout << "\n\n";

    for (int i = 0; i < numberOfCustomers; i++) {
        cout << "Customer " << i + 1 << ": ";
        cout << "Name: " << bills[i].getCustomerName() << ", ";
        cout << "Consumed Units: " << bills[i].getConsumedUnits() << ", ";
        cout << "Total Bill: " << bills[i].calculateTotalBill() << endl;
    }

    delete[] bills;

    return 0;
}

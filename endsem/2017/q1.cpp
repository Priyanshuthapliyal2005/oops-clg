#include<iostream>
#include<vector>
using namespace std;

class bank{
private:
    long account_num;
    string type;
    long balance;

public:
    bank(long a=0, string t="", long b=0){
        account_num = a;
        type = t;
        balance = b;
    }

    void deposit(){
        long amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
    }

    int check(){
        cout << "Your account balance is: " << balance << endl;
        return balance;
    }

    void withdraw(){
        long amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if(amount <= check()){
            balance -= amount;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void print(){
        cout << "Account number: " << account_num << " ";
        cout << "Account type: " << type << " ";
        cout << "Account balance: " << balance << endl;
    }
};

int main(){
    const int num_customers = 2;
    vector<bank> customers;

    for (int i = 0; i < num_customers; ++i) {
        long account_num = 123456789 + i;  // Generating unique account numbers for each customer
        string account_type = "savings";
        long initial_balance = 1000;

        bank b(account_num, account_type, initial_balance);
        customers.push_back(b);
    }

    // Display initial details for all customers
    for (int i = 0; i < num_customers; ++i) {
        cout << "Customer " << i+1 << " details:" << endl;
        customers[i].print();
    }

    // Perform transactions for all customers
    for (int i = 0; i < num_customers; ++i) {
        cout << "Customer " << i+1 << " transactions:" << endl;
        customers[i].deposit();
        customers[i].print();
        customers[i].withdraw();
        customers[i].print();
    }

    // Display final details for all customers
    for (int i = 0; i < num_customers; ++i) {
        cout << "Customer " << i+1 << " final details:" << endl;
        customers[i].print();
    }

    return 0;
}

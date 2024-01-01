#include<iostream>
#include<vector>
using namespace std;

class student {
private:
    int roll_num;

public:
    student(int r = 0) {
        roll_num = r;
    }

    vector<int> evenodd(vector<int> a) {
        vector<int> ans;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] % 2 == 0) {  // Change condition to check for even numbers
                ans.push_back(a[i]);
            }
        }

        for (int i = 0; i < a.size(); i++) {
            if (a[i] % 2 != 0) {  // Change condition to check for odd numbers
                ans.push_back(a[i]);
            }
        }

        return ans;
    }

    void print(vector<int> a) {
        cout << "Class roll numbers are:";
        for (int i = 0; i < a.size(); i++) {
            cout << " " << a[i];
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter Number Of Students:";
    cin >> n;

    vector<int> roll;
    for (int i = 0; i < n; i++) {
        cout << "Enter Roll Number:";
        int j;
        cin >> j;
        roll.push_back(j);
    }

    // Creating an object of the student class
    student s;

    // Using the evenodd function and print function
    vector<int> result = s.evenodd(roll);
    s.print(result);

    return 0;
}

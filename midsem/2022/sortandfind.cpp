#include <iostream>
#include <algorithm>
using namespace std;

class NumberOperations {
public:
    void sortAscending(int numbers[]);
    bool searchNumber(int numbers[], int target);
    void displayNumbers(int numbers[]);
};

void NumberOperations::sortAscending(int numbers[]) {
    sort(numbers, numbers + 10);
    cout << "Numbers sorted in ascending order: ";
    displayNumbers(numbers);
}

bool NumberOperations::searchNumber(int numbers[], int target) {
    auto it = find(numbers, numbers + 10, target);
    if (it != numbers + 10) {
        cout << "Number " << target << " found in the array." << endl;
        return true;
    } else {
        cout << "Number " << target << " not found in the array." << endl;
        return false;
    }
}

void NumberOperations::displayNumbers(int numbers[]) {
    for (int i = 0; i < 10; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

int main() {
    int numbers[10] = {5, 2, 8, 1, 7, 3, 10, 4, 6, 9};
    NumberOperations operations;

    cout << "Original numbers: ";
    operations.displayNumbers(numbers);

    operations.sortAscending(numbers);

    int targetNumber;
    cout << "Enter a number to search: ";
    cin >> targetNumber;

    operations.searchNumber(numbers, targetNumber);

    return 0;
}

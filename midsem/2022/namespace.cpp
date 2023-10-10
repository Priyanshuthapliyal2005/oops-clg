#include <iostream>
using namespace std;
// First namespace
namespace FirstNamespace {
    void show() {
        cout << "Inside FirstNamespace::show()" << endl;
    }
}

// Second namespace
namespace SecondNamespace {
    void show() {
        cout << "Inside SecondNamespace::show()" << endl;
    }
}

int main() {
    // Call the show() method from the first namespace
    FirstNamespace::show();

    // Call the show() method from the second namespace
    SecondNamespace::show();

    return 0;
}

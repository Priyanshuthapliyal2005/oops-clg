#include <iostream>
using namespace std;

class MyClass {
    private:
    int privateData;
public:
    MyClass(int value){
        privateData = value;
    }

    // Public function to access private member
    int getPrivateData() const {
        return privateData;                                                                                     
    }

    // Public function to modify private member
    void setPrivateData(int value) {
        privateData = value;
    }
};

int main() {
    MyClass obj(42);
    cout << "Name : Priyanshu Thapliyal \nSection : A2 \nRoll No. 46" << endl;

    // Accessing private member using a public member function
    int data = obj.getPrivateData();
    cout << "Private Data: " << data << endl;

    // Modifying private member using a public member function
    obj.setPrivateData(100);
    cout << "Modified Private Data: " << obj.getPrivateData() << endl;

    return 0;
}

#include<iostream>
#include<cmath> // Include for sqrt
using namespace std;

class Area {
public:
    // Function to calculate area for square/rectangle/triangle
    double calculateArea(int a) {
        double s = (a + a ) / 2.0;
        return (s * s);
    }
    double calculateArea(int a,int b) {
        return (a * b);
    }

    // Function to calculate area for triangle
    double calculateArea(int a, int b, int c) {
        // Using Heron's formula for the area of a triangle
        double s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main() {
    Area a;
    cout<<"Area of sq: "<<a.calculateArea(5)<<endl;

    cout<<"Area of rec: "<<a.calculateArea(5,6)<<endl;

    cout<<"Area of triangle: "<<a.calculateArea(5,5,8)<<endl;

    return 0;
}

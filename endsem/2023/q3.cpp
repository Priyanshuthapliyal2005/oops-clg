#include<iostream>
using namespace std;

class A{
private:
    int num;
public:
    A(int num=0){
        this->num=num;
    }
    // int operator*(A  &other){
    //     int result=num*other.num;
    //     return result;
    // }
    friend int operator*(A &p,A &q);
};

int operator*(A &p,A &q){
    int result=p.num* q.num;
    return result;
}

int main()
{
    int n=0;
    cout<<"Enter the First number:";
    cin>>n;
    A obj1(n);
    cout<<"Enter the second number:";
    cin>>n;
    A obj2(n);
    int result= obj1 * obj2;

    cout << "Result: " << result << endl;

    return 0;
}